/* Generated by GOB (v2.0.15)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <stdarg.h>
#include <time.h>
#include <libxml/tree.h>
#include "mn-decls.h"

#ifndef __MN_MAILBOX_H__
#define __MN_MAILBOX_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */



#define MN_MAILBOX_MAX_TYPES	8
extern GType mn_mailbox_types[MN_MAILBOX_MAX_TYPES + 1];

typedef struct _MNMailboxConfiguration MNMailboxConfiguration;


/*
 * Type checking and casting macros
 */
#define MN_TYPE_MAILBOX	(mn_mailbox_get_type())
#define MN_MAILBOX(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_mailbox_get_type(), MNMailbox)
#define MN_MAILBOX_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_mailbox_get_type(), MNMailbox const)
#define MN_MAILBOX_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_mailbox_get_type(), MNMailboxClass)
#define MN_IS_MAILBOX(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_mailbox_get_type ())

#define MN_MAILBOX_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_mailbox_get_type(), MNMailboxClass)

/* Private structure type */
typedef struct _MNMailboxPrivate MNMailboxPrivate;

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_MAILBOX__
#define __TYPEDEF_MN_MAILBOX__
typedef struct _MNMailbox MNMailbox;
#endif
struct _MNMailbox {
	GObject __parent__;
	/*< public >*/
	char * runtime_name;
	char * name;
	char * open_command;
	char * mark_as_read_command;
	char * mark_as_spam_command;
	char * delete_command;
	char * stock_id;
	char * format;
	int runtime_check_delay;
	int check_delay;
	GHashTable * messages;
	time_t timestamp;
	char * error;
	/*< private >*/
	MNMailboxPrivate *_priv;
};

/*
 * Class definition
 */
typedef struct _MNMailboxClass MNMailboxClass;
struct _MNMailboxClass {
	GObjectClass __parent__;
	/*signal*/void (* added) (MNMailbox * self);
	/*signal*/void (* removed) (MNMailbox * self);
	/*signal*/void (* messages_changed) (MNMailbox * self, gboolean has_new);
	void (* seal) (MNMailbox * self);
	MNMailbox * (* parse_uri) (MNMailbox * self, const char * uri);
	void (* check) (MNMailbox * self);
	const char * type;
	int default_check_delay;
	gboolean enable_checking_when_added;
};


/*
 * Public methods
 */
GType	mn_mailbox_get_type	(void) G_GNUC_CONST;
#line 135 "src/mn-mailbox.gob"
gboolean 	mn_mailbox_get_active	(MNMailbox * self);
#line 93 "mn-mailbox.h"
#line 154 "src/mn-mailbox.gob"
void 	mn_mailbox_added	(MNMailbox * self);
#line 96 "mn-mailbox.h"
#line 170 "src/mn-mailbox.gob"
void 	mn_mailbox_removed	(MNMailbox * self);
#line 99 "mn-mailbox.h"
#line 210 "src/mn-mailbox.gob"
gchar * 	mn_mailbox_get_stock_id	(MNMailbox * self);
#line 102 "mn-mailbox.h"
#line 210 "src/mn-mailbox.gob"
void 	mn_mailbox_set_stock_id	(MNMailbox * self,
					gchar * val);
#line 106 "mn-mailbox.h"
#line 213 "src/mn-mailbox.gob"
gchar * 	mn_mailbox_get_format	(MNMailbox * self);
#line 109 "mn-mailbox.h"
#line 213 "src/mn-mailbox.gob"
void 	mn_mailbox_set_format	(MNMailbox * self,
					gchar * val);
#line 113 "mn-mailbox.h"
#line 244 "src/mn-mailbox.gob"
gboolean 	mn_mailbox_get_poll	(MNMailbox * self);
#line 116 "mn-mailbox.h"
#line 227 "src/mn-mailbox.gob"
void 	mn_mailbox_set_poll	(MNMailbox * self,
					gboolean val);
#line 120 "mn-mailbox.h"
#line 255 "src/mn-mailbox.gob"
gboolean 	mn_mailbox_get_manually_checkable	(MNMailbox * self);
#line 123 "mn-mailbox.h"
#line 522 "src/mn-mailbox.gob"
void 	mn_mailbox_init_types	(void);
#line 126 "mn-mailbox.h"
#line 558 "src/mn-mailbox.gob"
MNMailboxClass * 	mn_mailbox_get_class_from_name	(const char * type);
#line 129 "mn-mailbox.h"
#line 577 "src/mn-mailbox.gob"
GType 	mn_mailbox_get_type_from_name	(const char * type);
#line 132 "mn-mailbox.h"
#line 638 "src/mn-mailbox.gob"
MNMailbox * 	mn_mailbox_new	(const char * type,
					...) G_GNUC_NULL_TERMINATED;
#line 136 "mn-mailbox.h"
#line 658 "src/mn-mailbox.gob"
MNMailbox * 	mn_mailbox_new_from_xml_node	(xmlNode * node,
					GError ** err);
#line 140 "mn-mailbox.h"
#line 691 "src/mn-mailbox.gob"
xmlNode * 	mn_mailbox_xml_node_new	(MNMailbox * self);
#line 143 "mn-mailbox.h"
#line 703 "src/mn-mailbox.gob"
MNMailbox * 	mn_mailbox_new_from_uri	(const char * uri);
#line 146 "mn-mailbox.h"
#line 724 "src/mn-mailbox.gob"
MNMailbox * 	mn_mailbox_new_from_configuration	(MNMailboxConfiguration * config);
#line 149 "mn-mailbox.h"
#line 730 "src/mn-mailbox.gob"
MNMailboxConfiguration * 	mn_mailbox_get_configuration	(MNMailbox * self);
#line 152 "mn-mailbox.h"
#line 765 "src/mn-mailbox.gob"
void 	mn_mailbox_configuration_free	(MNMailboxConfiguration * config);
#line 155 "mn-mailbox.h"
#line 777 "src/mn-mailbox.gob"
MNMailbox * 	mn_mailbox_new_from_obsolete_uri	(const char * uri);
#line 158 "mn-mailbox.h"
#line 1094 "src/mn-mailbox.gob"
void 	mn_mailbox_seal	(MNMailbox * self);
#line 161 "mn-mailbox.h"
#line 1112 "src/mn-mailbox.gob"
void 	mn_mailbox_check	(MNMailbox * self);
#line 164 "mn-mailbox.h"
#line 1180 "src/mn-mailbox.gob"
char * 	mn_mailbox_get_command	(MNMailbox * self,
					const char * id);
#line 168 "mn-mailbox.h"
#line 1199 "src/mn-mailbox.gob"
gboolean 	mn_mailbox_has_command	(MNMailbox * self,
					const char * id);
#line 172 "mn-mailbox.h"

/*
 * Signal connection wrapper macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define mn_mailbox_connect__added(object,func,data)	g_signal_connect(MN_MAILBOX(__extension__ ({MNMailbox *___object = (object); ___object; })),"added",(GCallback) __extension__ ({void (* ___added) (MNMailbox * ___fake___self, gpointer ___data ) = (func); ___added; }), (data))
#define mn_mailbox_connect_after__added(object,func,data)	g_signal_connect_after(MN_MAILBOX(__extension__ ({MNMailbox *___object = (object); ___object; })),"added",(GCallback) __extension__ ({void (* ___added) (MNMailbox * ___fake___self, gpointer ___data ) = (func); ___added; }), (data))
#define mn_mailbox_connect_data__added(object,func,data,destroy_data,flags)	g_signal_connect_data(MN_MAILBOX(__extension__ ({MNMailbox *___object = (object); ___object; })),"added",(GCallback) __extension__ ({void (* ___added) (MNMailbox * ___fake___self, gpointer ___data ) = (func); ___added; }), (data), (destroy_data), (GConnectFlags)(flags))
#define mn_mailbox_connect__removed(object,func,data)	g_signal_connect(MN_MAILBOX(__extension__ ({MNMailbox *___object = (object); ___object; })),"removed",(GCallback) __extension__ ({void (* ___removed) (MNMailbox * ___fake___self, gpointer ___data ) = (func); ___removed; }), (data))
#define mn_mailbox_connect_after__removed(object,func,data)	g_signal_connect_after(MN_MAILBOX(__extension__ ({MNMailbox *___object = (object); ___object; })),"removed",(GCallback) __extension__ ({void (* ___removed) (MNMailbox * ___fake___self, gpointer ___data ) = (func); ___removed; }), (data))
#define mn_mailbox_connect_data__removed(object,func,data,destroy_data,flags)	g_signal_connect_data(MN_MAILBOX(__extension__ ({MNMailbox *___object = (object); ___object; })),"removed",(GCallback) __extension__ ({void (* ___removed) (MNMailbox * ___fake___self, gpointer ___data ) = (func); ___removed; }), (data), (destroy_data), (GConnectFlags)(flags))
#define mn_mailbox_connect__messages_changed(object,func,data)	g_signal_connect(MN_MAILBOX(__extension__ ({MNMailbox *___object = (object); ___object; })),"messages_changed",(GCallback) __extension__ ({void (* ___messages_changed) (MNMailbox * ___fake___self, gboolean ___fake___has_new, gpointer ___data ) = (func); ___messages_changed; }), (data))
#define mn_mailbox_connect_after__messages_changed(object,func,data)	g_signal_connect_after(MN_MAILBOX(__extension__ ({MNMailbox *___object = (object); ___object; })),"messages_changed",(GCallback) __extension__ ({void (* ___messages_changed) (MNMailbox * ___fake___self, gboolean ___fake___has_new, gpointer ___data ) = (func); ___messages_changed; }), (data))
#define mn_mailbox_connect_data__messages_changed(object,func,data,destroy_data,flags)	g_signal_connect_data(MN_MAILBOX(__extension__ ({MNMailbox *___object = (object); ___object; })),"messages_changed",(GCallback) __extension__ ({void (* ___messages_changed) (MNMailbox * ___fake___self, gboolean ___fake___has_new, gpointer ___data ) = (func); ___messages_changed; }), (data), (destroy_data), (GConnectFlags)(flags))
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define mn_mailbox_connect__added(object,func,data)	g_signal_connect(MN_MAILBOX(object),"added",(GCallback)(func),(data))
#define mn_mailbox_connect_after__added(object,func,data)	g_signal_connect_after(MN_MAILBOX(object),"added",(GCallback)(func),(data))
#define mn_mailbox_connect_data__added(object,func,data,destroy_data,flags)	g_signal_connect_data(MN_MAILBOX(object),"added",(GCallback)(func),(data),(destroy_data),(GConnectFlags)(flags))
#define mn_mailbox_connect__removed(object,func,data)	g_signal_connect(MN_MAILBOX(object),"removed",(GCallback)(func),(data))
#define mn_mailbox_connect_after__removed(object,func,data)	g_signal_connect_after(MN_MAILBOX(object),"removed",(GCallback)(func),(data))
#define mn_mailbox_connect_data__removed(object,func,data,destroy_data,flags)	g_signal_connect_data(MN_MAILBOX(object),"removed",(GCallback)(func),(data),(destroy_data),(GConnectFlags)(flags))
#define mn_mailbox_connect__messages_changed(object,func,data)	g_signal_connect(MN_MAILBOX(object),"messages_changed",(GCallback)(func),(data))
#define mn_mailbox_connect_after__messages_changed(object,func,data)	g_signal_connect_after(MN_MAILBOX(object),"messages_changed",(GCallback)(func),(data))
#define mn_mailbox_connect_data__messages_changed(object,func,data,destroy_data,flags)	g_signal_connect_data(MN_MAILBOX(object),"messages_changed",(GCallback)(func),(data),(destroy_data),(GConnectFlags)(flags))
#endif /* __GNUC__ && !__STRICT_ANSI__ */


/*
 * Argument wrapping macros
 */
#if defined(__GNUC__) && !defined(__STRICT_ANSI__)
#define MN_MAILBOX_PROP_NAME(arg)    	"name", __extension__ ({gchar *z = (arg); z;})
#define MN_MAILBOX_GET_PROP_NAME(arg)	"name", __extension__ ({gchar **z = (arg); z;})
#define MN_MAILBOX_PROP_OPEN_COMMAND(arg)    	"open_command", __extension__ ({gchar *z = (arg); z;})
#define MN_MAILBOX_GET_PROP_OPEN_COMMAND(arg)	"open_command", __extension__ ({gchar **z = (arg); z;})
#define MN_MAILBOX_PROP_MARK_AS_READ_COMMAND(arg)    	"mark_as_read_command", __extension__ ({gchar *z = (arg); z;})
#define MN_MAILBOX_GET_PROP_MARK_AS_READ_COMMAND(arg)	"mark_as_read_command", __extension__ ({gchar **z = (arg); z;})
#define MN_MAILBOX_PROP_MARK_AS_SPAM_COMMAND(arg)    	"mark_as_spam_command", __extension__ ({gchar *z = (arg); z;})
#define MN_MAILBOX_GET_PROP_MARK_AS_SPAM_COMMAND(arg)	"mark_as_spam_command", __extension__ ({gchar **z = (arg); z;})
#define MN_MAILBOX_PROP_DELETE_COMMAND(arg)    	"delete_command", __extension__ ({gchar *z = (arg); z;})
#define MN_MAILBOX_GET_PROP_DELETE_COMMAND(arg)	"delete_command", __extension__ ({gchar **z = (arg); z;})
#define MN_MAILBOX_PROP_STOCK_ID(arg)    	"stock_id", __extension__ ({gchar *z = (arg); z;})
#define MN_MAILBOX_GET_PROP_STOCK_ID(arg)	"stock_id", __extension__ ({gchar **z = (arg); z;})
#define MN_MAILBOX_PROP_FORMAT(arg)    	"format", __extension__ ({gchar *z = (arg); z;})
#define MN_MAILBOX_GET_PROP_FORMAT(arg)	"format", __extension__ ({gchar **z = (arg); z;})
#define MN_MAILBOX_PROP_CHECK_DELAY(arg)    	"check_delay", __extension__ ({gint z = (arg); z;})
#define MN_MAILBOX_GET_PROP_CHECK_DELAY(arg)	"check_delay", __extension__ ({gint *z = (arg); z;})
#define MN_MAILBOX_PROP_POLL(arg)    	"poll", __extension__ ({gboolean z = (arg); z;})
#define MN_MAILBOX_GET_PROP_POLL(arg)	"poll", __extension__ ({gboolean *z = (arg); z;})
#define MN_MAILBOX_GET_PROP_MANUALLY_CHECKABLE(arg)	"manually_checkable", __extension__ ({gboolean *z = (arg); z;})
#define MN_MAILBOX_GET_PROP_MESSAGES(arg)	"messages", __extension__ ({GHashTable * *z = (arg); z;})
#define MN_MAILBOX_PROP_ERROR(arg)    	"error", __extension__ ({gchar *z = (arg); z;})
#define MN_MAILBOX_GET_PROP_ERROR(arg)	"error", __extension__ ({gchar **z = (arg); z;})
#else /* __GNUC__ && !__STRICT_ANSI__ */
#define MN_MAILBOX_PROP_NAME(arg)    	"name",(gchar *)(arg)
#define MN_MAILBOX_GET_PROP_NAME(arg)	"name",(gchar **)(arg)
#define MN_MAILBOX_PROP_OPEN_COMMAND(arg)    	"open_command",(gchar *)(arg)
#define MN_MAILBOX_GET_PROP_OPEN_COMMAND(arg)	"open_command",(gchar **)(arg)
#define MN_MAILBOX_PROP_MARK_AS_READ_COMMAND(arg)    	"mark_as_read_command",(gchar *)(arg)
#define MN_MAILBOX_GET_PROP_MARK_AS_READ_COMMAND(arg)	"mark_as_read_command",(gchar **)(arg)
#define MN_MAILBOX_PROP_MARK_AS_SPAM_COMMAND(arg)    	"mark_as_spam_command",(gchar *)(arg)
#define MN_MAILBOX_GET_PROP_MARK_AS_SPAM_COMMAND(arg)	"mark_as_spam_command",(gchar **)(arg)
#define MN_MAILBOX_PROP_DELETE_COMMAND(arg)    	"delete_command",(gchar *)(arg)
#define MN_MAILBOX_GET_PROP_DELETE_COMMAND(arg)	"delete_command",(gchar **)(arg)
#define MN_MAILBOX_PROP_STOCK_ID(arg)    	"stock_id",(gchar *)(arg)
#define MN_MAILBOX_GET_PROP_STOCK_ID(arg)	"stock_id",(gchar **)(arg)
#define MN_MAILBOX_PROP_FORMAT(arg)    	"format",(gchar *)(arg)
#define MN_MAILBOX_GET_PROP_FORMAT(arg)	"format",(gchar **)(arg)
#define MN_MAILBOX_PROP_CHECK_DELAY(arg)    	"check_delay",(gint )(arg)
#define MN_MAILBOX_GET_PROP_CHECK_DELAY(arg)	"check_delay",(gint *)(arg)
#define MN_MAILBOX_PROP_POLL(arg)    	"poll",(gboolean )(arg)
#define MN_MAILBOX_GET_PROP_POLL(arg)	"poll",(gboolean *)(arg)
#define MN_MAILBOX_GET_PROP_MANUALLY_CHECKABLE(arg)	"manually_checkable",(gboolean *)(arg)
#define MN_MAILBOX_GET_PROP_MESSAGES(arg)	"messages",(GHashTable * *)(arg)
#define MN_MAILBOX_PROP_ERROR(arg)    	"error",(gchar *)(arg)
#define MN_MAILBOX_GET_PROP_ERROR(arg)	"error",(gchar **)(arg)
#endif /* __GNUC__ && !__STRICT_ANSI__ */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
