/* cSploit - a simple penetration testing suite
 * Copyright (C) 2014  Massimo Dragano aka tux_mind <tux_mind@csploit.org>
 * 
 * cSploit is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * cSploit is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with cSploit.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#include "handler.h"
#include "blind.h"

handler handler_info = {
  NULL,                   // next
  0,                      // handler id
  0,                      // have_stdin
  0,                      // have_stdout
  1,                      // enabled
  NULL,                   // raw_output_parser
  NULL,                   // output_parser
  NULL,                   // input_parser
  NULL,                   // argv[0]
  NULL,                   // workdir
  "blind"                 // handler name
};