#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_keyword_and = 1,
  sym_keyword_or = 2,
  sym_keyword_not = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  sym_field_name = 6,
  anon_sym_COLON = 7,
  anon_sym_LT = 8,
  anon_sym_GT = 9,
  anon_sym_LT_EQ = 10,
  anon_sym_GT_EQ = 11,
  sym_string = 12,
  sym_int = 13,
  sym_float = 14,
  sym_unquote_string = 15,
  sym__whitespace = 16,
  sym_source = 17,
  sym__query = 18,
  sym_boolean_expression = 19,
  sym_boolean_factor = 20,
  sym_field_expression = 21,
  sym_operator = 22,
  sym_value = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword_and] = "keyword_and",
  [sym_keyword_or] = "keyword_or",
  [sym_keyword_not] = "keyword_not",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_field_name] = "field_name",
  [anon_sym_COLON] = ":",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [sym_string] = "string",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_unquote_string] = "unquote_string",
  [sym__whitespace] = "_whitespace",
  [sym_source] = "source",
  [sym__query] = "_query",
  [sym_boolean_expression] = "boolean_expression",
  [sym_boolean_factor] = "boolean_factor",
  [sym_field_expression] = "field_expression",
  [sym_operator] = "operator",
  [sym_value] = "value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword_and] = sym_keyword_and,
  [sym_keyword_or] = sym_keyword_or,
  [sym_keyword_not] = sym_keyword_not,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_field_name] = sym_field_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym_string] = sym_string,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_unquote_string] = sym_unquote_string,
  [sym__whitespace] = sym__whitespace,
  [sym_source] = sym_source,
  [sym__query] = sym__query,
  [sym_boolean_expression] = sym_boolean_expression,
  [sym_boolean_factor] = sym_boolean_factor,
  [sym_field_expression] = sym_field_expression,
  [sym_operator] = sym_operator,
  [sym_value] = sym_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword_and] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_or] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_not] = {
    .visible = true,
    .named = true,
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
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_string] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_expression] = {
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      ADVANCE_MAP(
        '"', 3,
        '(', 23,
        ')', 24,
        '.', 11,
        ':', 31,
        '<', 32,
        '>', 33,
        'A', 26,
        'a', 26,
        'N', 27,
        'n', 27,
        'O', 28,
        'o', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 0xa0) ADVANCE(47);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '.') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 10:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == 0xa0) ADVANCE(47);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_keyword_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_field_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_unquote_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == 0xa0) ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 0xa0) ADVANCE(47);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword_and] = ACTIONS(1),
    [sym_keyword_or] = ACTIONS(1),
    [sym_keyword_not] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_field_name] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_unquote_string] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(36),
    [sym__query] = STATE(35),
    [sym_boolean_expression] = STATE(29),
    [sym_boolean_factor] = STATE(20),
    [sym_field_expression] = STATE(28),
    [sym_keyword_not] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_field_name] = ACTIONS(7),
    [sym__whitespace] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(5), 1,
      sym_operator,
    ACTIONS(13), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 3,
      anon_sym_COLON,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [13] = 3,
    STATE(6), 1,
      sym_operator,
    ACTIONS(13), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(11), 3,
      anon_sym_COLON,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [26] = 6,
    ACTIONS(3), 1,
      sym_keyword_not,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_field_expression,
    STATE(24), 1,
      sym_boolean_factor,
    STATE(25), 1,
      sym_boolean_expression,
  [45] = 3,
    ACTIONS(19), 1,
      sym__whitespace,
    STATE(13), 1,
      sym_value,
    ACTIONS(17), 4,
      sym_string,
      sym_int,
      sym_float,
      sym_unquote_string,
  [58] = 3,
    ACTIONS(21), 1,
      sym__whitespace,
    STATE(17), 1,
      sym_value,
    ACTIONS(17), 4,
      sym_string,
      sym_int,
      sym_float,
      sym_unquote_string,
  [71] = 3,
    ACTIONS(17), 1,
      sym_int,
    STATE(11), 1,
      sym_value,
    ACTIONS(23), 3,
      sym_string,
      sym_float,
      sym_unquote_string,
  [83] = 2,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(25), 4,
      sym_string,
      sym_int,
      sym_float,
      sym_unquote_string,
  [93] = 3,
    ACTIONS(17), 1,
      sym_int,
    STATE(15), 1,
      sym_value,
    ACTIONS(23), 3,
      sym_string,
      sym_float,
      sym_unquote_string,
  [105] = 4,
    ACTIONS(3), 1,
      sym_keyword_not,
    ACTIONS(7), 1,
      sym_field_name,
    STATE(26), 1,
      sym_field_expression,
    STATE(27), 1,
      sym_boolean_expression,
  [118] = 2,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym__whitespace,
  [126] = 2,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym__whitespace,
  [134] = 2,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym__whitespace,
  [142] = 3,
    ACTIONS(3), 1,
      sym_keyword_not,
    ACTIONS(7), 1,
      sym_field_name,
    STATE(12), 1,
      sym_field_expression,
  [152] = 2,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym__whitespace,
  [160] = 2,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 2,
      sym_keyword_and,
      sym_keyword_or,
  [168] = 2,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym__whitespace,
  [176] = 2,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym__whitespace,
  [184] = 2,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 2,
      sym_keyword_and,
      sym_keyword_or,
  [192] = 2,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym__whitespace,
  [199] = 1,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      sym__whitespace,
  [204] = 1,
    ACTIONS(47), 2,
      sym_keyword_and,
      sym_keyword_or,
  [209] = 1,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym__whitespace,
  [214] = 2,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym__whitespace,
  [221] = 2,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym__whitespace,
  [228] = 2,
    ACTIONS(65), 1,
      sym__whitespace,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
  [235] = 2,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      sym__whitespace,
  [242] = 1,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym__whitespace,
  [247] = 2,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      sym__whitespace,
  [254] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [258] = 1,
    ACTIONS(79), 1,
      sym__whitespace,
  [262] = 1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
  [266] = 1,
    ACTIONS(81), 1,
      sym__whitespace,
  [270] = 1,
    ACTIONS(83), 1,
      sym_field_name,
  [274] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [278] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 58,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 83,
  [SMALL_STATE(9)] = 93,
  [SMALL_STATE(10)] = 105,
  [SMALL_STATE(11)] = 118,
  [SMALL_STATE(12)] = 126,
  [SMALL_STATE(13)] = 134,
  [SMALL_STATE(14)] = 142,
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 160,
  [SMALL_STATE(17)] = 168,
  [SMALL_STATE(18)] = 176,
  [SMALL_STATE(19)] = 184,
  [SMALL_STATE(20)] = 192,
  [SMALL_STATE(21)] = 199,
  [SMALL_STATE(22)] = 204,
  [SMALL_STATE(23)] = 209,
  [SMALL_STATE(24)] = 214,
  [SMALL_STATE(25)] = 221,
  [SMALL_STATE(26)] = 228,
  [SMALL_STATE(27)] = 235,
  [SMALL_STATE(28)] = 242,
  [SMALL_STATE(29)] = 247,
  [SMALL_STATE(30)] = 254,
  [SMALL_STATE(31)] = 258,
  [SMALL_STATE(32)] = 262,
  [SMALL_STATE(33)] = 266,
  [SMALL_STATE(34)] = 270,
  [SMALL_STATE(35)] = 274,
  [SMALL_STATE(36)] = 278,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 6, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 6, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 5, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 5, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 5, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 5, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 4, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 4, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__query, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_factor, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_expression, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_expression, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
