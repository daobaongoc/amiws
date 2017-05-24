/* Generated by re2c 0.16 */
#line 1 "src/lib/amipack_parse_prompt.re"
/**
 * amiws -- Library with functions for read/create AMI packets
 * Copyright (C) 2016, Stas Kobzar <staskobzar@modulis.ca>
 *
 * This file is part of amiws.
 *
 * amiws is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * amiws is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with amiws.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file parse_prompt.c
 * @brief AMI (Asterisk Management Interface) prompt packet parser.
 *
 * @author Stas Kobzar <stas.kobzar@modulis.ca>
 */

#include "amipack.h"

// introducing types:re2c for prompt packet
/*! re2c condition markers */
enum yycond_prompt {
  yycinit,
  yycminor,
  yycpatch,
  yycmajor,
};

int amiparse_prompt (const char *packet, AMIVer *ver)
{
  // init version structure
  ver->major = 0;
  ver->minor = 0;
  ver->patch = 0;

  const char *cur = packet;
  int c = yycinit;


#line 53 "src/lib/amipack_parse_prompt.c"
{
	unsigned char yych;
	switch (c) {
	case yycinit: goto yyc_init;
	case yycminor: goto yyc_minor;
	case yycpatch: goto yyc_patch;
	case yycmajor: goto yyc_major;
	}
/* *********************************** */
yyc_init:
	yych = *cur;
	switch (yych) {
	case 'A':	goto yy5;
	default:	goto yy3;
	}
yy3:
	++cur;
yy4:
#line 63 "src/lib/amipack_parse_prompt.re"
	{ return 0; }
#line 74 "src/lib/amipack_parse_prompt.c"
yy5:
	yych = *(packet = ++cur);
	switch (yych) {
	case 's':	goto yy6;
	default:	goto yy4;
	}
yy6:
	yych = *++cur;
	switch (yych) {
	case 't':	goto yy8;
	default:	goto yy7;
	}
yy7:
	cur = packet;
	goto yy4;
yy8:
	yych = *++cur;
	switch (yych) {
	case 'e':	goto yy9;
	default:	goto yy7;
	}
yy9:
	yych = *++cur;
	switch (yych) {
	case 'r':	goto yy10;
	default:	goto yy7;
	}
yy10:
	yych = *++cur;
	switch (yych) {
	case 'i':	goto yy11;
	default:	goto yy7;
	}
yy11:
	yych = *++cur;
	switch (yych) {
	case 's':	goto yy12;
	default:	goto yy7;
	}
yy12:
	yych = *++cur;
	switch (yych) {
	case 'k':	goto yy13;
	default:	goto yy7;
	}
yy13:
	yych = *++cur;
	switch (yych) {
	case ' ':	goto yy14;
	default:	goto yy7;
	}
yy14:
	yych = *++cur;
	switch (yych) {
	case 'C':	goto yy15;
	default:	goto yy7;
	}
yy15:
	yych = *++cur;
	switch (yych) {
	case 'a':	goto yy16;
	default:	goto yy7;
	}
yy16:
	yych = *++cur;
	switch (yych) {
	case 'l':	goto yy17;
	default:	goto yy7;
	}
yy17:
	yych = *++cur;
	switch (yych) {
	case 'l':	goto yy18;
	default:	goto yy7;
	}
yy18:
	yych = *++cur;
	switch (yych) {
	case ' ':	goto yy19;
	default:	goto yy7;
	}
yy19:
	yych = *++cur;
	switch (yych) {
	case 'M':	goto yy20;
	default:	goto yy7;
	}
yy20:
	yych = *++cur;
	switch (yych) {
	case 'a':	goto yy21;
	default:	goto yy7;
	}
yy21:
	yych = *++cur;
	switch (yych) {
	case 'n':	goto yy22;
	default:	goto yy7;
	}
yy22:
	yych = *++cur;
	switch (yych) {
	case 'a':	goto yy23;
	default:	goto yy7;
	}
yy23:
	yych = *++cur;
	switch (yych) {
	case 'g':	goto yy24;
	default:	goto yy7;
	}
yy24:
	yych = *++cur;
	switch (yych) {
	case 'e':	goto yy25;
	default:	goto yy7;
	}
yy25:
	yych = *++cur;
	switch (yych) {
	case 'r':	goto yy26;
	default:	goto yy7;
	}
yy26:
	yych = *++cur;
	switch (yych) {
	case '/':	goto yy27;
	default:	goto yy7;
	}
yy27:
	++cur;
	c = yycmajor;
	goto yyc_major;
/* *********************************** */
yyc_major:
	yych = *cur;
	switch (yych) {
	case '.':	goto yy33;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy35;
	default:	goto yy31;
	}
yy31:
	++cur;
#line 63 "src/lib/amipack_parse_prompt.re"
	{ return 0; }
#line 229 "src/lib/amipack_parse_prompt.c"
yy33:
	++cur;
#line 69 "src/lib/amipack_parse_prompt.re"
	{ goto yyc_minor; }
#line 234 "src/lib/amipack_parse_prompt.c"
yy35:
	++cur;
#line 68 "src/lib/amipack_parse_prompt.re"
	{ ver->major = ver->major * 10 + (yych - '0'); goto yyc_major; }
#line 239 "src/lib/amipack_parse_prompt.c"
/* *********************************** */
yyc_minor:
	yych = *cur;
	switch (yych) {
	case '\r':	goto yy41;
	case '.':	goto yy42;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy44;
	default:	goto yy39;
	}
yy39:
	++cur;
yy40:
#line 63 "src/lib/amipack_parse_prompt.re"
	{ return 0; }
#line 263 "src/lib/amipack_parse_prompt.c"
yy41:
	yych = *++cur;
	switch (yych) {
	case '\n':	goto yy46;
	default:	goto yy40;
	}
yy42:
	++cur;
#line 72 "src/lib/amipack_parse_prompt.re"
	{ goto yyc_patch; }
#line 274 "src/lib/amipack_parse_prompt.c"
yy44:
	++cur;
#line 71 "src/lib/amipack_parse_prompt.re"
	{ ver->minor = ver->minor * 10 + (yych - '0'); goto yyc_minor; }
#line 279 "src/lib/amipack_parse_prompt.c"
yy46:
	++cur;
#line 66 "src/lib/amipack_parse_prompt.re"
	{ goto done; }
#line 284 "src/lib/amipack_parse_prompt.c"
/* *********************************** */
yyc_patch:
	yych = *cur;
	switch (yych) {
	case '\r':	goto yy52;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy53;
	default:	goto yy50;
	}
yy50:
	++cur;
yy51:
#line 63 "src/lib/amipack_parse_prompt.re"
	{ return 0; }
#line 307 "src/lib/amipack_parse_prompt.c"
yy52:
	yych = *++cur;
	switch (yych) {
	case '\n':	goto yy55;
	default:	goto yy51;
	}
yy53:
	++cur;
#line 74 "src/lib/amipack_parse_prompt.re"
	{ ver->patch = ver->patch * 10 + (yych - '0'); goto yyc_patch; }
#line 318 "src/lib/amipack_parse_prompt.c"
yy55:
	++cur;
#line 66 "src/lib/amipack_parse_prompt.re"
	{ goto done; }
#line 323 "src/lib/amipack_parse_prompt.c"
}
#line 75 "src/lib/amipack_parse_prompt.re"


done:
  return 1;
}

