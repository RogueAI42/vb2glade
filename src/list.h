/* vb2glade
 * Copyright (C) 2002 Ishan Chattopadhyaya
 * Copyright 2016 Declan Hoare
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include "fstream"
#include "stdio.h"


long filesize(FILE *stream);
long address_convert(char *string);

void OutputList(ofstream& outfile, char list_array[20][20], int no_of_items,int&);
void Process_and_Output_List_from_file (ofstream& outfile, char *filename, int no_of_items,int&);
int Create_and_store_List(char *sourcefilename, char *listaddr, char *listname, char *type);

