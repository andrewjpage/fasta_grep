/*
 *  Wellcome Trust Sanger Institute
 *  Copyright (C) 2013  Wellcome Trust Sanger Institute
 *  
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _PARSE_FASTA_H_
#define _PARSE_FASTA_H_

#include "kseq.h"
#include <regex.h>

void search_for_query(char filename[], char ** search_queries, int number_of_queries);
int does_string_contain_query(char * input_string, regex_t regex);
int does_sequence_have_start_or_stop_codons(char * input_string, int input_length);
int number_of_valid_sequences(char filename[]);
void flag_largest_sequence_if_duplicates(int num_seqs,char ** sequence_names,int * sequence_lengths );
void get_sequence_names_and_lengths(char filename[],int num_seqs,char ** sequence_names,int * sequence_lengths );

#endif