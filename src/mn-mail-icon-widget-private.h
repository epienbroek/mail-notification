/* Generated by GOB (v2.0.14)   (do not edit directly) */

#ifndef __MN_MAIL_ICON_WIDGET_PRIVATE_H__
#define __MN_MAIL_ICON_WIDGET_PRIVATE_H__

#include "mn-mail-icon-widget.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#line 26 "mn-mail-icon-widget.gob"

#include "mn-locked-callback.h"

#line 18 "mn-mail-icon-widget-private.h"
struct _MNMailIconWidgetPrivate {
#line 46 "mn-mail-icon-widget.gob"
	gboolean blinking;
#line 73 "mn-mail-icon-widget.gob"
	PangoLayout * count_layout;
#line 75 "mn-mail-icon-widget.gob"
	int count;
#line 92 "mn-mail-icon-widget.gob"
	MNLockedGSource * blink_timeout_source;
#line 93 "mn-mail-icon-widget.gob"
	gboolean is_on;
#line 95 "mn-mail-icon-widget.gob"
	char * stock_id;
#line 96 "mn-mail-icon-widget.gob"
	GtkIconSize icon_size;
#line 34 "mn-mail-icon-widget-private.h"
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif