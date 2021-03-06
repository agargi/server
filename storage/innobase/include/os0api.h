/***********************************************************************

Copyright (c) 2017, 2019, MariaDB Corporation.

This program is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; version 2 of the License.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1335 USA

***********************************************************************/

/**************************************************//**
@file os0api.h
The interface to the helper functions.
These functions are used on os0file.h where
including full full header is not feasible and
implemented on buf0buf.cc and fil0fil.cc.
*******************************************************/

#ifndef OS_API_H
#define OS_API_H 1

/** Page control block */
class buf_page_t;

/** File Node */
struct fil_node_t;

/**
Calculate the length of trim (punch_hole) operation.
@param[in]	bpage		Page control block
@param[in]	write_length	Write length
@return length of the trim or zero. */
ulint
buf_page_get_trim_length(
	const buf_page_t*	bpage,
	ulint			write_length)
	MY_ATTRIBUTE((warn_unused_result));

#endif /* OS_API_H */
