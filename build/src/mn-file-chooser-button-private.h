/* Generated by GOB (v2.0.15)   (do not edit directly) */

#ifndef __MN_FILE_CHOOSER_BUTTON_PRIVATE_H__
#define __MN_FILE_CHOOSER_BUTTON_PRIVATE_H__

#include "mn-file-chooser-button.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#line 35 "src/mn-file-chooser-button.gob"

#include <libgnomevfs/gnome-vfs.h>

#line 18 "mn-file-chooser-button-private.h"
struct _MNFileChooserButtonPrivate {
#line 47 "src/mn-file-chooser-button.gob"
	char * filename;
#line 64 "src/mn-file-chooser-button.gob"
	MNFileChooserButtonCreateDialogFunction create_dialog;
#line 65 "src/mn-file-chooser-button.gob"
	gpointer create_dialog_data;
#line 67 "src/mn-file-chooser-button.gob"
	GtkWidget * image;
#line 68 "src/mn-file-chooser-button.gob"
	GtkWidget * label;
#line 69 "src/mn-file-chooser-button.gob"
	GtkWidget * dialog;
#line 71 "src/mn-file-chooser-button.gob"
	GnomeVFSAsyncHandle * async_handle;
#line 34 "mn-file-chooser-button-private.h"
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif