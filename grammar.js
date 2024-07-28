module.exports = grammar({
  name: "kql",

  rules: {
    source_file: ($) => $.query,

    query: ($) => choice($.boolean_expression, $.field_expression),

    boolean_expression: ($) =>
      choice(
        $.boolean_term,
        seq($.boolean_expression, "AND", $.boolean_term),
        seq($.boolean_expression, "OR", $.boolean_term)
      ),

    boolean_term: ($) =>
      choice($.boolean_factor, seq($.boolean_term, "NOT", $.boolean_factor)),

    boolean_factor: ($) => seq("(", $.boolean_expression, ")"),

    field_expression: ($) => seq($.field_name, $.operator, $.value),

    field_name: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    operator: ($) =>
      choice(":", "==", "!=", "=~", "!~", "<", ">", "<=", ">=", "IN", "NOT IN"),

    value: ($) => choice($.string, $.number, $.boolean),

    string: ($) => seq('"', /[^"]*/, '"'),

    number: ($) => /-?\d+(\.\d+)?/,

    boolean: ($) => choice("true", "false"),
  },
});
