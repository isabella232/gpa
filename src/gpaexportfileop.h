/* gpaexportfileop.h - The GpaExportFileOperation object.
 *	Copyright (C) 2003, Miguel Coca.
 *
 * This file is part of GPA
 *
 * GPA is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * GPA is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

#ifndef GPA_EXPORT_FILE_OP_H
#define GPA_EXPORT_FILE_OP_H

#include "gpa.h"
#include <glib.h>
#include <glib-object.h>
#include "gpaexportop.h"

/* GObject stuff */
#define GPA_EXPORT_FILE_OPERATION_TYPE	  (gpa_export_file_operation_get_type ())
#define GPA_EXPORT_FILE_OPERATION(obj)	  (G_TYPE_CHECK_INSTANCE_CAST ((obj), GPA_EXPORT_FILE_OPERATION_TYPE, GpaExportFileOperation))
#define GPA_EXPORT_FILE_OPERATION_CLASS(klass)  (G_TYPE_CHECK_CLASS_CAST ((klass), GPA_EXPORT_FILE_OPERATION_TYPE, GpaExportFileOperationClass))
#define GPA_IS_EXPORT_FILE_OPERATION(obj)	  (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GPA_EXPORT_FILE_OPERATION_TYPE))
#define GPA_IS_EXPORT_FILE_OPERATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GPA_EXPORT_FILE_OPERATION_TYPE))
#define GPA_EXPORT_FILE_OPERATION_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GPA_EXPORT_FILE_OPERATION_TYPE, GpaExportFileOperationClass))

typedef struct _GpaExportFileOperation GpaExportFileOperation;
typedef struct _GpaExportFileOperationClass GpaExportFileOperationClass;

struct _GpaExportFileOperation {
  GpaExportOperation parent;

  char *file;
  int fd;
};

struct _GpaExportFileOperationClass {
  GpaExportOperationClass parent_class;

};

GType gpa_export_file_operation_get_type (void) G_GNUC_CONST;

/* API */

/* Creates a new export to file operation.
 */
GpaExportFileOperation*
gpa_export_file_operation_new (GtkWidget *window, GList *keys);

#endif
