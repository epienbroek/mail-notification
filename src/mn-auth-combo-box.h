/* Generated by GOB (v2.0.9)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <gtk/gtk.h>

#ifndef __MN_AUTH_COMBO_BOX_H__
#define __MN_AUTH_COMBO_BOX_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_AUTH_COMBO_BOX	(mn_auth_combo_box_get_type())
#define MN_AUTH_COMBO_BOX(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_auth_combo_box_get_type(), MNAuthComboBox)
#define MN_AUTH_COMBO_BOX_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_auth_combo_box_get_type(), MNAuthComboBox const)
#define MN_AUTH_COMBO_BOX_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_auth_combo_box_get_type(), MNAuthComboBoxClass)
#define MN_IS_AUTH_COMBO_BOX(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_auth_combo_box_get_type ())

#define MN_AUTH_COMBO_BOX_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_auth_combo_box_get_type(), MNAuthComboBoxClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_AUTH_COMBO_BOX__
#define __TYPEDEF_MN_AUTH_COMBO_BOX__
typedef struct _MNAuthComboBox MNAuthComboBox;
#endif
struct _MNAuthComboBox {
	GtkComboBox __parent__;
};

/*
 * Class definition
 */
typedef struct _MNAuthComboBoxClass MNAuthComboBoxClass;
struct _MNAuthComboBoxClass {
	GtkComboBoxClass __parent__;
};


/*
 * Public methods
 */
GType	mn_auth_combo_box_get_type	(void);
gchar * 	mn_auth_combo_box_get_active_mechanism	(MNAuthComboBox * self);
void 	mn_auth_combo_box_set_active_mechanism	(MNAuthComboBox * self,
					gchar * val);
void 	mn_auth_combo_box_append	(MNAuthComboBox * self,
					const char * mechanism,
					const char * label);
GtkWidget * 	mn_auth_combo_box_new	(void);

/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_AUTH_COMBO_BOX_PROP_ACTIVE_MECHANISM(arg)    	"active_mechanism", __extension__ ({gchar *z = (arg); z;})
#define MN_AUTH_COMBO_BOX_GET_PROP_ACTIVE_MECHANISM(arg)	"active_mechanism", __extension__ ({gchar **z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_AUTH_COMBO_BOX_PROP_ACTIVE_MECHANISM(arg)    	"active_mechanism",(gchar *)(arg)
#define MN_AUTH_COMBO_BOX_GET_PROP_ACTIVE_MECHANISM(arg)	"active_mechanism",(gchar **)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
