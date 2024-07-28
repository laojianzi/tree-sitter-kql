#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_AND = 1,
  anon_sym_OR = 2,
  anon_sym_NOT = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  sym_field_name = 6,
  anon_sym_COLON = 7,
  anon_sym_EQ_EQ = 8,
  anon_sym_BANG_EQ = 9,
  anon_sym_EQ_TILDE = 10,
  anon_sym_BANG_TILDE = 11,
  anon_sym_LT = 12,
  anon_sym_GT = 13,
  anon_sym_LT_EQ = 14,
  anon_sym_GT_EQ = 15,
  anon_sym_IN = 16,
  anon_sym_NOTIN = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_token1 = 19,
  sym_number = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  sym_source_file = 23,
  sym_query = 24,
  sym_boolean_expression = 25,
  sym_boolean_term = 26,
  sym_boolean_factor = 27,
  sym_field_expression = 28,
  sym_operator = 29,
  sym_value = 30,
  sym_string = 31,
  sym_boolean = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AND] = "AND",
  [anon_sym_OR] = "OR",
  [anon_sym_NOT] = "NOT",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_field_name] = "field_name",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_EQ_TILDE] = "=~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_IN] = "IN",
  [anon_sym_NOTIN] = "NOT IN",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym_query] = "query",
  [sym_boolean_expression] = "boolean_expression",
  [sym_boolean_term] = "boolean_term",
  [sym_boolean_factor] = "boolean_factor",
  [sym_field_expression] = "field_expression",
  [sym_operator] = "operator",
  [sym_value] = "value",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_field_name] = sym_field_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_EQ_TILDE] = anon_sym_EQ_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_NOTIN] = anon_sym_NOTIN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym_query] = sym_query,
  [sym_boolean_expression] = sym_boolean_expression,
  [sym_boolean_term] = sym_boolean_term,
  [sym_boolean_factor] = sym_boolean_factor,
  [sym_field_expression] = sym_field_expression,
  [sym_operator] = sym_operator,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_term] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_factor] = {
    .visible = true,
    .named = true,
  },
  [sym_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '!', 4,
        '"', 43,
        '(', 29,
        ')', 30,
        '-', 23,
        ':', 32,
        '<', 37,
        '=', 5,
        '>', 38,
        'A', 8,
        'I', 9,
        'N', 11,
        'O', 13,
        'f', 16,
        't', 20,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == 'I') ADVANCE(9);
      if (lookahead == 'N') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == '~') ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '~') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'N') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'T') ADVANCE(1);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_field_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ_TILDE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_NOTIN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 44},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(15),
    [sym_query] = STATE(21),
    [sym_boolean_expression] = STATE(11),
    [sym_boolean_term] = STATE(6),
    [sym_boolean_factor] = STATE(7),
    [sym_field_expression] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(3),
    [sym_field_name] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(3), 1,
      sym_operator,
    ACTIONS(9), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(7), 9,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_EQ_TILDE,
      anon_sym_BANG_TILDE,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_IN,
      anon_sym_NOTIN,
  [19] = 5,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    STATE(19), 1,
      sym_value,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_string,
      sym_boolean,
  [37] = 1,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
      anon_sym_RPAREN,
  [45] = 2,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_RPAREN,
  [55] = 2,
    ACTIONS(21), 1,
      anon_sym_NOT,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_RPAREN,
  [65] = 1,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
      anon_sym_RPAREN,
  [73] = 1,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      anon_sym_AND,
      anon_sym_OR,
      anon_sym_NOT,
      anon_sym_RPAREN,
  [81] = 1,
    ACTIONS(29), 4,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_true,
      anon_sym_false,
  [88] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_boolean_term,
    STATE(7), 1,
      sym_boolean_factor,
    STATE(12), 1,
      sym_boolean_expression,
  [101] = 2,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 2,
      anon_sym_AND,
      anon_sym_OR,
  [109] = 2,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 2,
      anon_sym_AND,
      anon_sym_OR,
  [117] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_boolean_term,
    STATE(7), 1,
      sym_boolean_factor,
  [127] = 2,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_boolean_factor,
  [134] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [138] = 1,
    ACTIONS(39), 1,
      aux_sym_string_token1,
  [142] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
  [146] = 1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [150] = 1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
  [154] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [158] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [162] = 1,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
  [166] = 1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 37,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 65,
  [SMALL_STATE(8)] = 73,
  [SMALL_STATE(9)] = 81,
  [SMALL_STATE(10)] = 88,
  [SMALL_STATE(11)] = 101,
  [SMALL_STATE(12)] = 109,
  [SMALL_STATE(13)] = 117,
  [SMALL_STATE(14)] = 127,
  [SMALL_STATE(15)] = 134,
  [SMALL_STATE(16)] = 138,
  [SMALL_STATE(17)] = 142,
  [SMALL_STATE(18)] = 146,
  [SMALL_STATE(19)] = 150,
  [SMALL_STATE(20)] = 154,
  [SMALL_STATE(21)] = 158,
  [SMALL_STATE(22)] = 162,
  [SMALL_STATE(23)] = 166,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_term, 3, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 3, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_term, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_factor, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_kql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
