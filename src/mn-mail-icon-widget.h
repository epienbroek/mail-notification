/* Generated by GOB (v2.0.14)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <gtk/gtk.h>

#ifndef __MN_MAIL_ICON_WIDGET_H__
#define __MN_MAIL_ICON_WIDGET_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_MAIL_ICON_WIDGET	(mn_mail_icon_widget_get_type())
#define MN_MAIL_ICON_WIDGET(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_mail_icon_widget_get_type(), MNMailIconWidget)
#define MN_MAIL_ICON_WIDGET_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_mail_icon_widget_get_type(), MNMailIconWidget const)
#define MN_MAIL_ICON_WIDGET_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_mail_icon_widget_get_type(), MNMailIconWidgetClass)
#define MN_IS_MAIL_ICON_WIDGET(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_mail_icon_widget_get_type ())

#define MN_MAIL_ICON_WIDGET_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_mail_icon_widget_get_type(), MNMailIconWidgetClass)

/* Private structure type */
typedef struct _MNMailIconWidgetPrivate MNMailIconWidgetPrivate;

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_MAIL_ICON_WIDGET__
#define __TYPEDEF_MN_MAIL_ICON_WIDGET__
typedef struct _MNMailIconWidget MNMailIconWidget;
#endif
struct _MNMailIconWidget {
	GtkDrawingArea __parent__;
	/*< private >*/
	MNMailIconWidgetPrivate *_priv;
};

/*
 * Class definition
 */
typedef struct _MNMailIconWidgetClass MNMailIconWidgetClass;
struct _MNMailIconWidgetClass {
	GtkDrawingAreaClass __parent__;
};


/*
 * Public methods
 */
GType	mn_mail_icon_widget_get_type	(void);
gboolean 	mn_mail_icon_widget_get_blinking	(MNMailIconWidget * self);
void 	mn_mail_icon_widget_set_blinking	(MNMailIconWidget * self,
					gboolean val);
gint 	mn_mail_icon_widget_get_count	(MNMailIconWidget * self);
void 	mn_mail_icon_widget_set_count	(MNMailIconWidget * self,
					gint val);
GtkWidget * 	mn_mail_icon_widget_new	(void);
void 	mn_mail_icon_widget_set_from_stock	(MNMailIconWidget * self,
					const char * stock_id,
					GtkIconSize icon_size);

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_MAIL_ICON_WIDGET_PROP_BLINKING(arg)    	"blinking", __extension__ ({gboolean z = (arg); z;})
#define MN_MAIL_ICON_WIDGET_GET_PROP_BLINKING(arg)	"blinking", __extension__ ({gboolean *z = (arg); z;})
#define MN_MAIL_ICON_WIDGET_PROP_COUNT(arg)    	"count", __extension__ ({gint z = (arg); z;})
#define MN_MAIL_ICON_WIDGET_GET_PROP_COUNT(arg)	"count", __extension__ ({gint *z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_MAIL_ICON_WIDGET_PROP_BLINKING(arg)    	"blinking",(gboolean )(arg)
#define MN_MAIL_ICON_WIDGET_GET_PROP_BLINKING(arg)	"blinking",(gboolean *)(arg)
#define MN_MAIL_ICON_WIDGET_PROP_COUNT(arg)    	"count",(gint )(arg)
#define MN_MAIL_ICON_WIDGET_GET_PROP_COUNT(arg)	"count",(gint *)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif