const digits = repeat1(/[0-9]+_?/);
const exponent = seq(/[eE][\+-]?/, digits);

module.exports = grammar({
  name: "kql",

  rules: {
    source: ($) => $._query,

    _query: ($) =>
      seq(optional($._whitespace), choice($.boolean_factor, $.boolean_expression, $.field_expression), optional($._whitespace)),

    keyword_and: (_) => /and/i,
    keyword_or: (_) => /or/i,
    keyword_not: (_) => /not/i,

    boolean_expression: ($) =>
      prec.left(
        1,
        choice(
          $.field_expression,
          seq($.boolean_expression, $._whitespace, $.keyword_and, $._whitespace, $.field_expression),
          seq($.boolean_expression, $._whitespace, $.keyword_or, $._whitespace, $.field_expression)
        )
      ),

    boolean_factor: ($) => seq("(", $.boolean_expression, ")"),

    field_expression: ($) =>
      seq(
        optional(seq($.keyword_not, $._whitespace)),
        $.field_name,
        $.operator,
        optional($._whitespace),
        $.value,
      ),

    field_name: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    operator: ($) => choice(":", "<", ">", "<=", ">="),

    value: ($) => choice($.string, $.int, $.float, $.unquote_string),

    string: _ => /"[^"]*"/,

    int: (_) => {
      return token(seq(choice(seq(digits, exponent), seq(digits))));
    },

    float: (_) => {
      return token(
        seq(
          choice(
            seq(digits, ".", optional(digits), optional(exponent)),
            seq(optional(digits), ".", digits, optional(exponent))
          )
        )
      );
    },

    unquote_string: ($) => /[a-zA-Z_][a-zA-Z0-9_]+/,

    _whitespace: _ => /[\ \t\r\n\u00A0]+/
  },
});
