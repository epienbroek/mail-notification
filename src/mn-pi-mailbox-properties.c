/* Generated by GOB (v2.0.11) on Thu Nov  4 11:55:05 2004
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 11

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-pi-mailbox-properties.h"

#include "mn-pi-mailbox-properties-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 24 "mn-pi-mailbox-properties.gob"

#include "config.h"
#include <glib/gi18n.h>
#include "mn-mailbox-properties.h"
#include "mn-mailbox-properties-util.h"
#include "mn-auth-combo-box.h"
#include "mn-util.h"

#line 36 "mn-pi-mailbox-properties.c"
/* self casting macros */
#define SELF(x) MN_PI_MAILBOX_PROPERTIES(x)
#define SELF_CONST(x) MN_PI_MAILBOX_PROPERTIES_CONST(x)
#define IS_SELF(x) MN_IS_PI_MAILBOX_PROPERTIES(x)
#define TYPE_SELF MN_TYPE_PI_MAILBOX_PROPERTIES
#define SELF_CLASS(x) MN_PI_MAILBOX_PROPERTIES_CLASS(x)

#define SELF_GET_CLASS(x) MN_PI_MAILBOX_PROPERTIES_GET_CLASS(x)

/* self typedefs */
typedef MNPIMailboxProperties Self;
typedef MNPIMailboxPropertiesClass SelfClass;

/* here are local prototypes */
static void ___object_set_property (GObject *object, guint property_id, const GValue *value, GParamSpec *pspec);
static void ___object_get_property (GObject *object, guint property_id, GValue *value, GParamSpec *pspec);
static void mn_pi_mailbox_properties_init (MNPIMailboxProperties * o) G_GNUC_UNUSED;
static void mn_pi_mailbox_properties_class_init (MNPIMailboxPropertiesClass * c) G_GNUC_UNUSED;
static GObject * ___1_mn_pi_mailbox_properties_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_params) G_GNUC_UNUSED;
static void mn_pi_mailbox_properties_notify_expanded_h (GObject * object, GParamSpec * pspec, gpointer user_data) G_GNUC_UNUSED;
static void mn_pi_mailbox_properties_radio_toggled_h (GtkToggleButton * togglebutton, gpointer user_data) G_GNUC_UNUSED;

enum {
	PROP_0,
	PROP_COMPLETE,
	PROP_LABEL,
	PROP_SIZE_GROUP
};

/* pointer to the class of our parent */
static GtkVBoxClass *parent_class = NULL;

/* Short form macros */
#define self_notify_expanded_h mn_pi_mailbox_properties_notify_expanded_h
#define self_entry_changed_h mn_pi_mailbox_properties_entry_changed_h
#define self_radio_toggled_h mn_pi_mailbox_properties_radio_toggled_h
#define self_set_contents mn_pi_mailbox_properties_set_contents
#define self_get_contents mn_pi_mailbox_properties_get_contents


static void
___MN_Mailbox_Properties_init (MNMailboxPropertiesIface *iface)
{
}

GType
mn_pi_mailbox_properties_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNPIMailboxPropertiesClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_pi_mailbox_properties_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNPIMailboxProperties),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_pi_mailbox_properties_init,
			NULL
		};

		static const GInterfaceInfo MN_Mailbox_Properties_info = {
			(GInterfaceInitFunc) ___MN_Mailbox_Properties_init,
			NULL,
			NULL
		};

		type = g_type_register_static (GTK_TYPE_VBOX, "MNPIMailboxProperties", &info, (GTypeFlags)0);
		g_type_add_interface_static (type,
			MN_TYPE_MAILBOX_PROPERTIES,
			&MN_Mailbox_Properties_info);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNPIMailboxProperties *)g_object_new(mn_pi_mailbox_properties_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNPIMailboxProperties * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNPIMailboxProperties *
GET_NEW_VARG (const char *first, ...)
{
	MNPIMailboxProperties *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNPIMailboxProperties *)g_object_new_valist (mn_pi_mailbox_properties_get_type (), first, ap);
	va_end (ap);
	return ret;
}


static void
___dispose (GObject *obj_self)
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::dispose"
	MNPIMailboxProperties *self G_GNUC_UNUSED = MN_PI_MAILBOX_PROPERTIES (obj_self);
	if (G_OBJECT_CLASS (parent_class)->dispose) \
		(* G_OBJECT_CLASS (parent_class)->dispose) (obj_self);
#line 44 "mn-pi-mailbox-properties.gob"
	if(self->size_group) { g_object_unref ((gpointer) self->size_group); self->size_group = NULL; }
#line 143 "mn-pi-mailbox-properties.c"
#line 50 "mn-pi-mailbox-properties.gob"
	if(self->tooltips) { g_object_unref ((gpointer) self->tooltips); self->tooltips = NULL; }
#line 146 "mn-pi-mailbox-properties.c"
}
#undef __GOB_FUNCTION__

static void 
mn_pi_mailbox_properties_init (MNPIMailboxProperties * o G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::init"
#line 50 "mn-pi-mailbox-properties.gob"
	o->tooltips = mn_gtk_tooltips_new();
#line 156 "mn-pi-mailbox-properties.c"
}
#undef __GOB_FUNCTION__
static void 
mn_pi_mailbox_properties_class_init (MNPIMailboxPropertiesClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::class_init"
	GObjectClass *g_object_class G_GNUC_UNUSED = (GObjectClass*) c;

	parent_class = g_type_class_ref (GTK_TYPE_VBOX);

#line 57 "mn-pi-mailbox-properties.gob"
	g_object_class->constructor = ___1_mn_pi_mailbox_properties_constructor;
#line 169 "mn-pi-mailbox-properties.c"
	g_object_class->dispose = ___dispose;
	g_object_class->get_property = ___object_get_property;
	g_object_class->set_property = ___object_set_property;
    {
	g_object_class_override_property (g_object_class,
		PROP_COMPLETE,
		"complete");
	g_object_class_override_property (g_object_class,
		PROP_LABEL,
		"label");
	g_object_class_override_property (g_object_class,
		PROP_SIZE_GROUP,
		"size_group");
    }
}
#undef __GOB_FUNCTION__

static void
___object_set_property (GObject *object,
	guint property_id,
	const GValue *VAL G_GNUC_UNUSED,
	GParamSpec *pspec G_GNUC_UNUSED)
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::set_property"
{
	MNPIMailboxProperties *self G_GNUC_UNUSED;

	self = MN_PI_MAILBOX_PROPERTIES (object);

	switch (property_id) {
	case PROP_SIZE_GROUP:
		{
#line 45 "mn-pi-mailbox-properties.gob"
{ GObject *___old = (GObject *)self->size_group; self->size_group = (void *)g_value_dup_object (VAL); if (___old != NULL) { g_object_unref (G_OBJECT (___old)); } }
#line 203 "mn-pi-mailbox-properties.c"
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
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::get_property"
{
	MNPIMailboxProperties *self G_GNUC_UNUSED;

	self = MN_PI_MAILBOX_PROPERTIES (object);

	switch (property_id) {
	case PROP_COMPLETE:
		{
#line 39 "mn-pi-mailbox-properties.gob"

#line 234 "mn-pi-mailbox-properties.c"
		}
		break;
	case PROP_LABEL:
		{
#line 42 "mn-pi-mailbox-properties.gob"
 g_value_set_string(VAL, SELF_GET_CLASS(self)->label); 
#line 241 "mn-pi-mailbox-properties.c"
		}
		break;
	case PROP_SIZE_GROUP:
		{
#line 45 "mn-pi-mailbox-properties.gob"
g_value_set_object (VAL, (gpointer)self->size_group);
#line 248 "mn-pi-mailbox-properties.c"
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



#line 57 "mn-pi-mailbox-properties.gob"
static GObject * 
___1_mn_pi_mailbox_properties_constructor (GType type G_GNUC_UNUSED, guint n_construct_properties, GObjectConstructParam * construct_params)
#line 268 "mn-pi-mailbox-properties.c"
#define PARENT_HANDLER(___type,___n_construct_properties,___construct_params) \
	((G_OBJECT_CLASS(parent_class)->constructor)? \
		(* G_OBJECT_CLASS(parent_class)->constructor)(___type,___n_construct_properties,___construct_params): \
		((GObject * )0))
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::constructor"
{
#line 59 "mn-pi-mailbox-properties.gob"
	
    GObject *object;
    Self *self;
    GtkWidget *label1;
    GtkWidget *label2;
    GtkWidget *expander;
    GtkSizeGroup *radio_size_group;
    int i;

    object = PARENT_HANDLER(type, n_construct_properties, construct_params);
    self = SELF(object);

    gtk_box_set_spacing(GTK_BOX(self), 6);
    
    self->details_size_group = gtk_size_group_new(GTK_SIZE_GROUP_NONE);

    mn_mailbox_properties_field_new(GTK_VBOX(self),
				    _("_Hostname:"),
				    &label1,
				    &self->hostname_entry);

    gtk_size_group_add_widget(self->size_group, label1);
    gtk_size_group_add_widget(self->details_size_group, label1);

    mn_mailbox_properties_credentials_new(GTK_VBOX(self),
					  &label1,
					  &self->username_entry,
					  &label2,
					  &self->password_entry);

    gtk_size_group_add_widget(self->size_group, label1);
    gtk_size_group_add_widget(self->details_size_group, label1);
    gtk_size_group_add_widget(self->size_group, label2);
    gtk_size_group_add_widget(self->details_size_group, label2);

    expander = gtk_expander_new_with_mnemonic(_("_Details"));
    gtk_expander_set_spacing(GTK_EXPANDER(expander), 6);

    self->details_vbox = gtk_vbox_new(FALSE, 6);
    gtk_container_add(GTK_CONTAINER(expander), self->details_vbox);
    
    gtk_box_pack_start(GTK_BOX(self), expander, FALSE, FALSE, 0);
    gtk_widget_show_all(expander);
    
    radio_size_group = gtk_size_group_new(GTK_SIZE_GROUP_HORIZONTAL);

    mn_mailbox_properties_connection_type_new(GTK_VBOX(self->details_vbox),
					      _("sta_ndard"),
					      SELF_GET_CLASS(self)->default_port[0],
					      NULL,
					      &label1,
					      &self->conn_radio[0],
					      &self->port_spin[0]);
    gtk_size_group_add_widget(self->details_size_group, label1);
    gtk_size_group_add_widget(radio_size_group, self->conn_radio[0]);

    mn_mailbox_properties_connection_type_new(GTK_VBOX(self->details_vbox),
					      _("_in-band SSL/TLS"),
					      SELF_GET_CLASS(self)->default_port[0],
					      GTK_RADIO_BUTTON(self->conn_radio[0]),
					      &label1,
					      &self->conn_radio[1],
					      &self->port_spin[1]);
    gtk_size_group_add_widget(self->details_size_group, label1);
    gtk_size_group_add_widget(radio_size_group, self->conn_radio[1]);

    mn_mailbox_properties_connection_type_new(GTK_VBOX(self->details_vbox),
					      _("SSL/TLS on sepa_rate port"),
					      SELF_GET_CLASS(self)->default_port[1],
					      GTK_RADIO_BUTTON(self->conn_radio[0]),
					      &label1,
					      &self->conn_radio[2],
					      &self->port_spin[2]);
    gtk_size_group_add_widget(self->details_size_group, label1);
    gtk_size_group_add_widget(radio_size_group, self->conn_radio[2]);

    g_object_unref(radio_size_group);
    
#ifndef WITH_SSL
    gtk_widget_set_sensitive(self->conn_radio[1], FALSE);
    gtk_widget_set_sensitive(self->conn_radio[2], FALSE);
#endif

    /* by default, standard is enabled */
    gtk_widget_set_sensitive(self->port_spin[1], FALSE);
    gtk_widget_set_sensitive(self->port_spin[2], FALSE);

    mn_mailbox_properties_authentication_new(GTK_VBOX(self->details_vbox),
					     &label1,
					     &self->auth_combo);
    gtk_size_group_add_widget(self->details_size_group, label1);

    mn_mailbox_properties_link_entries(GTK_ENTRY(self->hostname_entry),
				       GTK_ENTRY(self->username_entry),
				       GTK_ENTRY(self->password_entry),
				       NULL);

    g_signal_connect(expander, "notify::expanded", G_CALLBACK(self_notify_expanded_h), self);

    for (i = 0; i < 3; i++)
      g_signal_connect(self->conn_radio[i], "toggled", G_CALLBACK(self_radio_toggled_h), self);
    
    g_signal_connect(self->hostname_entry, "changed", G_CALLBACK(self_entry_changed_h), self);
    g_signal_connect(self->username_entry, "changed", G_CALLBACK(self_entry_changed_h), self);

    return object;
  }}
#line 384 "mn-pi-mailbox-properties.c"
#undef __GOB_FUNCTION__
#undef PARENT_HANDLER

#line 167 "mn-pi-mailbox-properties.gob"
static void 
mn_pi_mailbox_properties_notify_expanded_h (GObject * object, GParamSpec * pspec, gpointer user_data)
#line 391 "mn-pi-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::notify_expanded_h"
#line 167 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (object != NULL);
#line 167 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (G_IS_OBJECT (object));
#line 167 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (pspec != NULL);
#line 167 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (user_data != NULL);
#line 402 "mn-pi-mailbox-properties.c"
{
#line 171 "mn-pi-mailbox-properties.gob"
	
    Self *self = user_data;

    gtk_size_group_set_mode(self->details_size_group,
			    gtk_expander_get_expanded(GTK_EXPANDER(object))
			    ? GTK_SIZE_GROUP_HORIZONTAL
			    : GTK_SIZE_GROUP_NONE);
  }}
#line 413 "mn-pi-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 180 "mn-pi-mailbox-properties.gob"
void 
mn_pi_mailbox_properties_entry_changed_h (GtkEditable * editable, gpointer user_data)
#line 419 "mn-pi-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::entry_changed_h"
#line 180 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (editable != NULL);
#line 180 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (GTK_IS_EDITABLE (editable));
#line 180 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (user_data != NULL);
#line 428 "mn-pi-mailbox-properties.c"
{
#line 183 "mn-pi-mailbox-properties.gob"
	
    Self *self = user_data;
    g_object_notify(G_OBJECT(self), "complete");
  }}
#line 435 "mn-pi-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 188 "mn-pi-mailbox-properties.gob"
static void 
mn_pi_mailbox_properties_radio_toggled_h (GtkToggleButton * togglebutton, gpointer user_data)
#line 441 "mn-pi-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::radio_toggled_h"
#line 188 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (togglebutton != NULL);
#line 188 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (GTK_IS_TOGGLE_BUTTON (togglebutton));
#line 188 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (user_data != NULL);
#line 450 "mn-pi-mailbox-properties.c"
{
#line 191 "mn-pi-mailbox-properties.gob"
	
    Self *self = user_data;
    int i;

    for (i = 0; i < 3; i++)
      gtk_widget_set_sensitive(self->port_spin[i], GTK_WIDGET_SENSITIVE(self->conn_radio[i]) && gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(self->conn_radio[i])));

    g_object_notify(G_OBJECT(self), "complete");
  }}
#line 462 "mn-pi-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 201 "mn-pi-mailbox-properties.gob"
void 
mn_pi_mailbox_properties_set_contents (MNPIMailboxProperties * self, gboolean ssl, gboolean inband_ssl, const char * username, const char * password, const char * authmech, const char * hostname, int port)
#line 468 "mn-pi-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::set_contents"
#line 201 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (self != NULL);
#line 201 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (MN_IS_PI_MAILBOX_PROPERTIES (self));
#line 201 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (username != NULL);
#line 201 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (hostname != NULL);
#line 201 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (port >= 0);
#line 201 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (port <= 0xFFFF);
#line 483 "mn-pi-mailbox-properties.c"
{
#line 210 "mn-pi-mailbox-properties.gob"
	
    gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON(self->conn_radio[ssl ? 2 : (inband_ssl ? 1 : 0)]), TRUE);
    gtk_entry_set_text(GTK_ENTRY(self->username_entry), username);
    gtk_entry_set_text(GTK_ENTRY(self->password_entry), MN_POINTER_TO_STRING(password));
    mn_auth_combo_box_set_active_mechanism(MN_AUTH_COMBO_BOX(self->auth_combo), (char *) authmech);
    gtk_entry_set_text(GTK_ENTRY(self->hostname_entry), hostname);
    gtk_spin_button_set_value(GTK_SPIN_BUTTON(self->port_spin[ssl ? 2 : (inband_ssl ? 1 : 0)]), port);
  }}
#line 494 "mn-pi-mailbox-properties.c"
#undef __GOB_FUNCTION__

#line 219 "mn-pi-mailbox-properties.gob"
void 
mn_pi_mailbox_properties_get_contents (MNPIMailboxProperties * self, gboolean * ssl, gboolean * inband_ssl, const char ** username, const char ** password, char ** authmech, const char ** hostname, int * port)
#line 500 "mn-pi-mailbox-properties.c"
{
#define __GOB_FUNCTION__ "MN:PI:Mailbox:Properties::get_contents"
#line 219 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (self != NULL);
#line 219 "mn-pi-mailbox-properties.gob"
	g_return_if_fail (MN_IS_PI_MAILBOX_PROPERTIES (self));
#line 507 "mn-pi-mailbox-properties.c"
{
#line 228 "mn-pi-mailbox-properties.gob"
	
    gboolean _ssl;
    gboolean _inband_ssl;

    _ssl = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(self->conn_radio[2]));
    _inband_ssl = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(self->conn_radio[1]));

    if (ssl)
      *ssl = _ssl;
    if (inband_ssl)
      *inband_ssl = _inband_ssl;
    if (username)
      *username = gtk_entry_get_text(GTK_ENTRY(self->username_entry));
    if (password)
      {
	const char *_password;

	_password = gtk_entry_get_text(GTK_ENTRY(self->password_entry));
	*password = MN_STRING_TO_POINTER(_password);
      }
    if (authmech)
      *authmech = mn_auth_combo_box_get_active_mechanism(MN_AUTH_COMBO_BOX(self->auth_combo));
    if (hostname)
      *hostname = gtk_entry_get_text(GTK_ENTRY(self->hostname_entry));
    if (port)
      *port = gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(self->port_spin[_ssl ? 2 : (_inband_ssl ? 1 : 0)]));
  }}
#line 537 "mn-pi-mailbox-properties.c"
#undef __GOB_FUNCTION__
