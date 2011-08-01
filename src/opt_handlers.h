/* vifm
 * Copyright (C) 2011 xaizek.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

#ifndef __OPT_HANDLERS_H__
#define __OPT_HANDLERS_H__

#include "ui.h"

enum {
	VIFMINFO_OPTIONS   = 1 << 0,
	VIFMINFO_FILETYPES = 1 << 1,
	VIFMINFO_COMMANDS  = 1 << 2,
	VIFMINFO_BOOKMARKS = 1 << 3,
	VIFMINFO_TUI       = 1 << 4,
	VIFMINFO_DHISTORY  = 1 << 5,
	VIFMINFO_STATE     = 1 << 6,
	VIFMINFO_CS        = 1 << 7,
	VIFMINFO_WARN      = 1 << 8,
};

void init_option_handlers(void);
void load_local_options(FileView *view);
int process_set_args(const char *args);

#endif

/* vim: set tabstop=2 softtabstop=2 shiftwidth=2 noexpandtab cinoptions-=(0 : */
/* vim: set cinoptions+=t0 : */
