/* 
 * Copyright (c) 2003, 2004 Jean-Yves Lefort <jylefort@brutele.be>
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
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef _MN_UTIL_H
#define _MN_UTIL_H

#include "config.h"
#include <stdarg.h>
#include <gtk/gtk.h>

#define MN_LIST_FOREACH(var, head)		\
for ((var) = (head);				\
     (var);					\
     (var) = (var)->next)

void		mn_info				(const char	*format,
						 ...);
void		mn_slist_free			(GSList		*list);

gboolean	mn_str_isnumeric		(const char	*str);

GdkPixbuf	*mn_pixbuf_new			(const char	*filename);
void		mn_create_interface		(const char	*name,
						 ...);

void mn_file_chooser_dialog_allow_select_folder (GtkFileChooserDialog *dialog,
						 int accept_id);

void		mn_setup_dnd			(GtkWidget	*widget);

typedef enum
{
  MN_GNOME_COPIED_FILES_CUT,
  MN_GNOME_COPIED_FILES_COPY
} MNGnomeCopiedFilesType;

char		*mn_build_gnome_copied_files	(MNGnomeCopiedFilesType type,
						 GSList		*uri_list);
gboolean	mn_parse_gnome_copied_files	(const char	*gnome_copied_files,
						 MNGnomeCopiedFilesType *type,
						 GSList		**uri_list);

void		mn_display_help			(const char	*link_id);

#endif /* _MN_UTIL_H */
