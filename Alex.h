// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t DejaVu_Sans_7Bitmaps[] PROGMEM = {

	// Bitmap Data:
	0x00, // ' '
	0xE8, // '!'
	0xB4, // '"'
	0x57,0xD5,0xF6,0x00, // '#'
	0x5F,0x77,0xD0, // '$'
	0xCB,0x4F,0xCB,0x4C, // '%'
	0x72,0x3B,0x67,0x80, // '&'
	0xC0, // '''
	0x6A,0x90, // '('
	0x95,0x60, // ')'
	0x5D,0x70, // '*'
	0x21,0x3E,0x42,0x00, // '+'
	0xC0, // ','
	0xC0, // '-'
	0x80, // '.'
	0x56,0xA0, // '/'
	0xF6,0xDE, // '0'
	0xC9,0x2E, // '1'
	0xE4,0xAE, // '2'
	0xE5,0x1E, // '3'
	0x26,0x6F,0x20, // '4'
	0xF3,0x9E, // '5'
	0x73,0xDE, // '6'
	0xE4,0xA4, // '7'
	0xF5,0x5E, // '8'
	0xF7,0x9C, // '9'
	0x90, // ':'
	0x98, // ';'
	0x1E,0xE1, // '<'
	0xF0,0xF0, // '='
	0x87,0x78, // '>'
	0xE5,0x04, // '?'
	0x7B,0x1B,0x6E,0xC1,0xC0, // '@'
	0x23,0x94,0xE8,0x80, // 'A'
	0xF9,0xE9,0xF0, // 'B'
	0x78,0x88,0x70, // 'C'
	0xE9,0x99,0xE0, // 'D'
	0xF3,0xCE, // 'E'
	0xF3,0xC8, // 'F'
	0x78,0xB9,0x70, // 'G'
	0x99,0xF9,0x90, // 'H'
	0xF8, // 'I'
	0x55,0x70, // 'J'
	0xAC,0xCE,0xB0, // 'K'
	0x92,0x4E, // 'L'
	0xDE,0xEB,0x58,0x80, // 'M'
	0xDD,0xFB,0x90, // 'N'
	0x69,0x99,0x60, // 'O'
	0xF7,0xC8, // 'P'
	0x69,0x99,0x62, // 'Q'
	0xEA,0xCA,0xB0, // 'R'
	0xF8,0x71,0xF0, // 'S'
	0xF9,0x08,0x42,0x00, // 'T'
	0x99,0x99,0x60, // 'U'
	0x8A,0x94,0xE2,0x00, // 'V'
	0xB6,0xD7,0x92,0x48, // 'W'
	0x96,0x66,0x90, // 'X'
	0xDA,0x88,0x42,0x00, // 'Y'
	0xF2,0x64,0xF0, // 'Z'
	0xEA,0xB0, // '['
	0xA9,0x50, // '\'
	0xD5,0x70, // ']'
	0x69, // '^'
	0xF0, // '_'
	0x80, // '`'
	0x67,0xF0, // 'a'
	0x93,0xDB,0xC0, // 'b'
	0x72,0x30, // 'c'
	0x27,0xDB,0xC0, // 'd'
	0xFE,0x70, // 'e'
	0x6B,0xA4,0x80, // 'f'
	0xF6,0xFE, // 'g'
	0x93,0xDB,0x40, // 'h'
	0xF8, // 'i'
	0x55,0x70, // 'j'
	0x93,0xED,0xC0, // 'k'
	0xFC, // 'l'
	0xFD,0x6B,0x50, // 'm'
	0xF6,0xD0, // 'n'
	0xF6,0xF0, // 'o'
	0xF6,0xF8, // 'p'
	0xF6,0xF2, // 'q'
	0xEA, // 'r'
	0xF8,0xF0, // 's'
	0xBA,0xC0, // 't'
	0xB6,0xF0, // 'u'
	0x96,0x66, // 'v'
	0xAE,0xD4,0xA0, // 'w'
	0xF6,0x6F, // 'x'
	0x96,0x64,0xC0, // 'y'
	0xED,0x70, // 'z'
	0x6A,0x24,0xC0, // '{'
	0xFE, // '|'
	0xC8,0xA5,0x80 // '}'
};
const GFXglyph DejaVu_Sans_7Glyphs[] PROGMEM = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {     0,   1,   1,   3,    0,    0 }, // ' '
	  {     1,   1,   5,   4,    1,   -5 }, // '!'
	  {     2,   3,   2,   4,    1,   -5 }, // '"'
	  {     3,   5,   5,   7,    1,   -5 }, // '#'
	  {     7,   3,   7,   5,    1,   -6 }, // '$'
	  {    10,   6,   5,   8,    1,   -5 }, // '%'
	  {    14,   5,   5,   6,    1,   -5 }, // '&'
	  {    18,   1,   2,   3,    1,   -5 }, // '''
	  {    19,   2,   6,   4,    1,   -6 }, // '('
	  {    21,   2,   6,   4,    1,   -6 }, // ')'
	  {    23,   3,   4,   5,    1,   -5 }, // '*'
	  {    25,   5,   5,   7,    1,   -5 }, // '+'
	  {    29,   1,   2,   3,    1,   -1 }, // ','
	  {    30,   2,   1,   4,    1,   -3 }, // '-'
	  {    31,   1,   1,   3,    1,   -1 }, // '.'
	  {    32,   2,   6,   3,    0,   -5 }, // '/'
	  {    34,   3,   5,   5,    1,   -5 }, // '0'
	  {    36,   3,   5,   5,    1,   -5 }, // '1'
	  {    38,   3,   5,   5,    1,   -5 }, // '2'
	  {    40,   3,   5,   5,    1,   -5 }, // '3'
	  {    42,   4,   5,   5,    1,   -5 }, // '4'
	  {    45,   3,   5,   5,    1,   -5 }, // '5'
	  {    47,   3,   5,   5,    1,   -5 }, // '6'
	  {    49,   3,   5,   5,    1,   -5 }, // '7'
	  {    51,   3,   5,   5,    1,   -5 }, // '8'
	  {    53,   3,   5,   5,    1,   -5 }, // '9'
	  {    55,   1,   4,   3,    1,   -4 }, // ':'
	  {    56,   1,   5,   3,    1,   -4 }, // ';'
	  {    57,   4,   4,   7,    1,   -4 }, // '<'
	  {    59,   4,   3,   7,    1,   -4 }, // '='
	  {    61,   4,   4,   7,    1,   -4 }, // '>'
	  {    63,   3,   5,   5,    1,   -5 }, // '?'
	  {    65,   6,   6,   8,    1,   -5 }, // '@'
	  {    70,   5,   5,   6,    0,   -5 }, // 'A'
	  {    74,   4,   5,   6,    1,   -5 }, // 'B'
	  {    77,   4,   5,   6,    1,   -5 }, // 'C'
	  {    80,   4,   5,   6,    1,   -5 }, // 'D'
	  {    83,   3,   5,   5,    1,   -5 }, // 'E'
	  {    85,   3,   5,   5,    1,   -5 }, // 'F'
	  {    87,   4,   5,   6,    1,   -5 }, // 'G'
	  {    90,   4,   5,   6,    1,   -5 }, // 'H'
	  {    93,   1,   5,   3,    1,   -5 }, // 'I'
	  {    94,   2,   6,   3,    0,   -5 }, // 'J'
	  {    96,   4,   5,   6,    1,   -5 }, // 'K'
	  {    99,   3,   5,   5,    1,   -5 }, // 'L'
	  {   101,   5,   5,   7,    1,   -5 }, // 'M'
	  {   105,   4,   5,   6,    1,   -5 }, // 'N'
	  {   108,   4,   5,   7,    1,   -5 }, // 'O'
	  {   111,   3,   5,   5,    1,   -5 }, // 'P'
	  {   113,   4,   6,   7,    1,   -5 }, // 'Q'
	  {   116,   4,   5,   6,    1,   -5 }, // 'R'
	  {   119,   4,   5,   5,    1,   -5 }, // 'S'
	  {   122,   5,   5,   5,    0,   -5 }, // 'T'
	  {   126,   4,   5,   6,    1,   -5 }, // 'U'
	  {   129,   5,   5,   6,    0,   -5 }, // 'V'
	  {   133,   6,   5,   8,    0,   -5 }, // 'W'
	  {   137,   4,   5,   5,    0,   -5 }, // 'X'
	  {   140,   5,   5,   5,    0,   -5 }, // 'Y'
	  {   144,   4,   5,   6,    1,   -5 }, // 'Z'
	  {   147,   2,   6,   4,    1,   -5 }, // '['
	  {   149,   2,   6,   3,    0,   -5 }, // '\'
	  {   151,   2,   6,   4,    1,   -5 }, // ']'
	  {   153,   4,   2,   7,    1,   -5 }, // '^'
	  {   154,   4,   1,   5,    0,    1 }, // '_'
	  {   155,   2,   1,   5,    0,   -6 }, // '`'
	  {   156,   3,   4,   5,    1,   -4 }, // 'a'
	  {   158,   3,   6,   5,    1,   -6 }, // 'b'
	  {   161,   3,   4,   5,    1,   -4 }, // 'c'
	  {   163,   3,   6,   5,    1,   -6 }, // 'd'
	  {   166,   3,   4,   5,    1,   -4 }, // 'e'
	  {   168,   3,   6,   3,    0,   -6 }, // 'f'
	  {   171,   3,   5,   5,    1,   -4 }, // 'g'
	  {   173,   3,   6,   5,    1,   -6 }, // 'h'
	  {   176,   1,   5,   3,    1,   -5 }, // 'i'
	  {   177,   2,   6,   3,    0,   -5 }, // 'j'
	  {   179,   3,   6,   5,    1,   -6 }, // 'k'
	  {   182,   1,   6,   3,    1,   -6 }, // 'l'
	  {   183,   5,   4,   8,    1,   -4 }, // 'm'
	  {   186,   3,   4,   5,    1,   -4 }, // 'n'
	  {   188,   3,   4,   5,    1,   -4 }, // 'o'
	  {   190,   3,   5,   5,    1,   -4 }, // 'p'
	  {   192,   3,   5,   5,    1,   -4 }, // 'q'
	  {   194,   2,   4,   4,    1,   -4 }, // 'r'
	  {   195,   3,   4,   5,    1,   -4 }, // 's'
	  {   197,   2,   5,   4,    1,   -5 }, // 't'
	  {   199,   3,   4,   5,    1,   -4 }, // 'u'
	  {   201,   4,   4,   5,    0,   -4 }, // 'v'
	  {   203,   5,   4,   7,    0,   -4 }, // 'w'
	  {   206,   4,   4,   5,    0,   -4 }, // 'x'
	  {   208,   4,   5,   5,    0,   -4 }, // 'y'
	  {   211,   3,   4,   5,    1,   -4 }, // 'z'
	  {   213,   3,   6,   5,    1,   -5 }, // '{'
	  {   216,   1,   7,   3,    1,   -5 }, // '|'
	  {   217,   3,   6,   5,    1,   -5 } // '}'
};
const GFXfont DejaVu_Sans_7 PROGMEM = {
(uint8_t  *)DejaVu_Sans_7Bitmaps,(GFXglyph *)DejaVu_Sans_7Glyphs,0x20, 0x7E, 9};