/* Generated by GOB (v2.0.11) on Thu Nov 25 01:42:10 2004
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 11

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-gmail-mailbox-properties.h"

#include "mn-gmail-mailbox-properties-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 24 "mn-gmail-mailbox-properties.gob"

#include "config.h"
#include <glib/gi18n.h>
#include "mn-mailbox-properties.h"
#include "mn-mailbox-properties-util.h"
#include "mn-util.h"

#line 35 "mn-gmail-mailbox-properties.c"
/* self casting macros */
#define SELF(x) MN_GMAIL_MAILBOX_PROPERTIES(x)
#define SELF_CONST(x) MN_GMAIL_MAILBOX_PROPERTIES_CONST(x)
#define IS_SELF(x) MN_IS_GMAIL_MAILBOX_PROPERTIES(x)
#define TYPE_SELF MN_TYPE_GMAIL_MAILBOX_PROPERTIES
#define SELF_CLASS(x) MN_GMAIL_MAILBOX_PROPERTIES_CLASS(x)

#define SELF_GET_CLASS(x) MN_GMAIL_MAILBOX_PROPERTIES_GET_CLASS(x)

/* self typedefs */
typedef MNGmailMailboxProperties Self;
typedef MNGmailMailboxPropertiesClass SelfClass;

/* here are local prototypes */
static void ___object_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
static void mn_gmail_mailbox_properties_init (MNGmailMailboxProperties * o) G_GNUC_UNUSED;
static void mn_gmail_mailbox_properties_class_init (MNGmailMailboxPropertiesClass * c) G_GNUC_UNUSED;
static GObject * ___1_mn_gmail_mailbox_properties_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_params) G_GNUC_UNUSED;
static void mn_gmail_mailbox_properties_entry_changed_h (GtkEditable * editable, gpointer user_data) G_GNUC_UNUSED;
static gboolean mn_gmail_mailbox_properties_set_uri (MNMailboxProperties * self, MNURI * uri) G_GNUC_UNUSED;
static MNURI * mn_gmail_mailbox_properties_get_uri (MNMailboxProperties * self) G_GNUC_UNUSED;

enum {
	PROP_0,
	PROP_LABEL,
	PROP_SIZE_GROUP,
	PROP_COMPLETE
};

/* pointer to the class of our parent */
static GtkVBoxClass *parent_class = NULL;

/* Short form macros */
#define self_entry_changed_h mn_gmail_mailbox_properties_entry_changed_h
#define self_set_uri mn_gmail_mailbox_properties_set_uri
#define self_get_uri mn_gmail_mailbox_properties_get_uri


static void
___MN_Mailbox_Properties_init (MNMailboxPropertiesIface *iface)
{
#line 98 "mn-gmail-mailbox-properties.gob"
	iface->set_uri = self_set_uri;
#line 113 "mn-gmail-mailbox-properties.gob"
	iface->get_uri = self_get_uri;
#line 82 "mn-gmail-mailbox-properties.c"
}

GType
mn_gmail_mailbox_properties_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNGmailMailboxPropertiesClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_gmail_mailbox_properties_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNGmailMailboxProperties),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_gmail_mailbox_properties_init,
			NULL
		};

		static const GInterfaceInfo MN_Mailbox_Properties_info = {
			(GInterfaceInitFunc) ___MN_Mailbox_Properties_init,
			NULL,
			NULL
		};

		type = g_type_register_static (GTK_TYPE_VBOX, "MNGmailMailboxProperties", &info, (GTypeFlags)0);
		g_type_add_interface_static (type,
			MN_TYPE_MAILBOX_PROPERTIES,
			&MN_Mailbox_Properties_info);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNGmailMailboxProperties *)g_object_new(mn_gmail_mailbox_properties_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNGmailMailboxProperties * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNGmailMailboxProperties *
GET_NEW_VARG (const char *first, ...)
{
	MNGmailMailboxProperties *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNGmailMailboxProperties *)g_object_new_valist (mn_gmail_mailbox_properties_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___dispose (GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:Gmail:Mailbox:Properties::dispose"
	MNGmailMailboxProperties *self G_GNUC_UNUSED = MN_GMAIL_MAILBOX_PROPERTIES (obj_self);
	if (G_OBJECT_CLASS (parent_class)->dispose) \
		(* G_OBJECT_CLASS (parent_class)->dispose) (obj_self);
#line 37 "mn-gmail-mailbox-properties.gob"
	if(self->_priv->size_group) { g_object_unref ((gpointer) self->_priv->size_group); self->_priv->size_group = NULL; }
#line 146 "mn-gmail-mailbox-properties.c"
#line 52 "mn-gmail-mailbox-properties.gob"
	if(self->_priv->tooltips) { g_object_unref ((gpointer) self->_priv->tooltips); self->_priv->tooltips = NULL; }
#line 149 "mn-gmail-mailbox-properties.c"
}
#undef __GOB_FUNCTION__


static void
___finalize(GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:Gmail:Mailbox:Properties::finalize"
	MNGmailMailboxProperties *self G_GNUC_UNUSED = MN_GMAIL_MAILBOX_PROPERTIES (obj_self);
	gpointer priv G_GNUC_UNUSED = self->_priv;
	if(G_OBJECT_CLASS(parent_class)->finalize) \
		(* G_OBJECT_CLASS(parent_class)->finalize)(obj_self);
}
#undef __GOB_FUNCTION__

static void 
mn_gmail_mailbox_properties_init (MNGmailMailboxProperties * o G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:Gmail:Mailbox:Properties::init"
	o->_priv = G_TYPE_INSTANCE_GET_PRIVATE(o,TYPE_SELF,MNGmailMailboxPropertiesPrivate);
#line 52 "mn-gmail-mailbox-properties.gob"
	o->_priv->tooltips = mn_gtk_tooltips_new();
#line 172 "mn-gmail-mailbox-properties.c"
}
#undef __GOB_FUNCTION__
static void 
mn_gmail_mailbox_properties_class_init (MNGmailMailboxPropertiesClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:Gmail:Mailbox:Properties::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;

	g_type_class_add_private(c,sizeof(MNGmailMailboxPropertiesPrivate));

	parent_class = g_type_class_ref (GTK_TYPE_VBOX);

#line 54 "mn-gmail-mailbox-properties.gob"
	g_object_class->constructor = ___1_mn_gmail_mailbox_properties_constructor;
#line 187 "mn-gmail-mailbox-properties.c"
	g_object_class->dispose = ___dispose;
	g_object_class->finalize = ___finalize;
	g_object_class->get_property = ___object_get_property;
	g_object_class->set_property = ___object_set_property;
    {
	g_object_class_override_property (g_object_class,
		PROP_LABEL,
		"label");
	g_object_class_override_property (g_object_class,
		PROP_SIZE_GROUP,
		"size_group");
	g_object_class_override_property (g_object_class,
		PROP_COMPLETE,
		"complete");
    }
}
#undef __GOB_FUNCTION__

static void
___object_set_property (GObject *object,
	guint property_id,
	const GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "MN:Gmail:Mailbox:Properties::set_property"
{
	MNGmailMailboxProperties *self G_GNUC_UNUSED;

	self = MN_GMAIL_MAILBOX_PROPERTIES (object);

	switch (property_id) {
	case PROP_SIZE_GROUP:
		{
#line 38 "mn-gmail-mailbox-properties.gob"
{ GObject *___old = (GObject *)self->_priv->size_group; self->_priv->size_group = (void *)g_value_dup_object (VAL); if (___old != NULL) { g_object_unref (G_OBJECT (___old)); } }
#line 222 "mn-gmail-mailbox-properties.c"
		}
		break;
	default:
/* Apparently in g++ this is needed, glib is b0rk */
#ifndef __PRETTY_FUNCTION__
#  undef G_STRLOC
#  define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#endif
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}
#undef __GOB_FUNCTION__

static void
___object_get_property (GObject *object,
	guint property_id,
	GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "MN:Gmail:Mailbox:Properties::get_property"
{
	MNGmailMailboxProperties *self G_GNUC_UNUSED;

	self = MN_GMAIL_MAILBOX_PROPERTIES (object);

	switch (property_id) {
	case PROP_LABEL:
		{
#line 35 "mn-gmail-mailbox-properties.gob"
 g_value_set_string(VAL, "Gmail"); 
#line 253 "mn-gmail-mailbox-properties.c"
		}
		break;
	case PROP_SIZE_GROUP:
		{
#line 38 "mn-gmail-mailbox-properties.gob"
g_value_set_object (VAL, (gpointer)self->_priv->size_group);
#line 260 "mn-gmail-mailbox-properties.c"
		}
		break;
	case PROP_COMPLETE:
		{
#line 42 "mn-gmail-mailbox-properties.gob"

      const char *username;

      username = gtk_entry_get_text(GTK_ENTRY(selfp->username_entry));
      
      g_value_set_boolean(VAL, *username != 0);
    
#line 273 "mn-gmail-mailbox-properties.c"
		}
		break;
	default:
/* Apparently in g++ this is needed, glib is b0rk */
#ifndef __PRETTY_FUNCTION__
#  undef G_STRLOC
#  define G_STRLOC	__FILE__ ":" G_STRINGIFY (__LINE__)
#endif
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}
#undef __GOB_FUNCTION__



#line 54 "mn-gmail-mailbox-properties.gob"
static GObject * 
___1_mn_gmail_mailbox_properties_constructor (GType type G_GNUC_UNUSED, guint n_construct_properties, GObjectConstructParam * construct_params)
#line 293 "mn-gmail-mailbox-properties.c"
#define PARENT_HANDLER(___type,___n_construct_properties,___construct_params) \
	((G_OBJECT_CLASS(parent_class)->constructor)? \
		(* G_OBJECT_CLASS(parent_class)->constructor)(___type,___n_construct_properties,___construct_params): \
		((GObject * )0))
{
#define __GOB_FUNCTION__ "MN:Gmail:Mailbox:Properties::constructor"
{
#line 56 "mn-gmail-mailbox-properties.gob"
	
    GObject *object;
    Self *self;
    GtkWidget *label1;
    GtkWidget *label2;

    object = PARENT_HANDLER(type, n_construct_properties, construct_params);
    self = SELF(object);

    gtk_box_set_spacing(GTK_BOX(self), 6);

    mn_mailbox_properties_credentials_new(GTK_VBOX(self),
					  &label1,
					  &selfp->username_entry,
					  &label2,
					  &selfp->password_entry);

    gtk_size_group_add_widget(selfp->size_group, label1);
    gtk_size_group_add_widget(selfp->size_group, label2);

    mn_gtk_tooltips_set_tips(selfp->tooltips,
			     selfp->username_entry, _("Your Gmail username"),
			     selfp->password_entry, _("Your Gmail password (if left blank, you will be prompted for the password when needed)"),
			     NULL);

    mn_mailbox_properties_link_entries(GTK_ENTRY(selfp->username_entry),
				       GTK_ENTRY(selfp->password_entry),
				       NULL);

    g_signal_connect(selfp->username_entry, "changed", G_CALLBACK(self_entry_changed_h), self);
    
    return object;
  }}
#line 335 "mn-gmail-mailbox-properties.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 90 "mn-gmail-mailbox-properties.gob"
static void 
mn_gmail_mailbox_properties_entry_changed_h (GtkEditable * editable, gpointer user_data)
#line 342 "mn-gmail-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Gmail:Mailbox:Properties::entry_changed_h"
#line 90 "mn-gmail-mailbox-properties.gob"
	g_return_if_fail (editable != NULL);
#line 90 "mn-gmail-mailbox-properties.gob"
	g_return_if_fail (GTK_IS_EDITABLE (editable));
#line 90 "mn-gmail-mailbox-properties.gob"
	g_return_if_fail (user_data != NULL);
#line 351 "mn-gmail-mailbox-properties.c"
{
#line 93 "mn-gmail-mailbox-properties.gob"
	
    Self *self = user_data;
    g_object_notify(G_OBJECT(self), "complete");
  }}
#line 358 "mn-gmail-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 98 "mn-gmail-mailbox-properties.gob"
static gboolean 
mn_gmail_mailbox_properties_set_uri (MNMailboxProperties * self, MNURI * uri)
#line 364 "mn-gmail-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Gmail:Mailbox:Properties::set_uri"
#line 98 "mn-gmail-mailbox-properties.gob"
	g_return_val_if_fail (self != NULL, (gboolean )0);
#line 98 "mn-gmail-mailbox-properties.gob"
	g_return_val_if_fail (MN_IS_MAILBOX_PROPERTIES (self), (gboolean )0);
#line 98 "mn-gmail-mailbox-properties.gob"
	g_return_val_if_fail (uri != NULL, (gboolean )0);
#line 98 "mn-gmail-mailbox-properties.gob"
	g_return_val_if_fail (MN_IS_URI (uri), (gboolean )0);
#line 375 "mn-gmail-mailbox-properties.c"
{
#line 101 "mn-gmail-mailbox-properties.gob"
	
    if (MN_URI_IS_GMAIL(uri))
      {
	gtk_entry_set_text(GTK_ENTRY(SELF(self)->_priv->username_entry), uri->username);
	gtk_entry_set_text(GTK_ENTRY(SELF(self)->_priv->password_entry), MN_POINTER_TO_STRING(uri->password));

	return TRUE;
      }
    else
      return FALSE;
  }}
#line 389 "mn-gmail-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 113 "mn-gmail-mailbox-properties.gob"
static MNURI * 
mn_gmail_mailbox_properties_get_uri (MNMailboxProperties * self)
#line 395 "mn-gmail-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:Gmail:Mailbox:Properties::get_uri"
#line 113 "mn-gmail-mailbox-properties.gob"
	g_return_val_if_fail (self != NULL, (MNURI * )0);
#line 113 "mn-gmail-mailbox-properties.gob"
	g_return_val_if_fail (MN_IS_MAILBOX_PROPERTIES (self), (MNURI * )0);
#line 402 "mn-gmail-mailbox-properties.c"
{
#line 115 "mn-gmail-mailbox-properties.gob"
	
    const char *username;
    const char *password;

    username = gtk_entry_get_text(GTK_ENTRY(SELF(self)->_priv->username_entry));
    password = gtk_entry_get_text(GTK_ENTRY(SELF(self)->_priv->password_entry));

    return mn_uri_new_gmail(username, MN_STRING_TO_POINTER(password));
  }}
#line 414 "mn-gmail-mailbox-properties.c"
#undef __GOB_FUNCTION__
