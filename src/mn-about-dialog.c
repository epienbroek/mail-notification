/* Generated by GOB (v2.0.11) on Thu Nov 25 01:42:10 2004
   (do not edit directly) */

/* End world hunger, donate to the World Food Programme, http://www.wfp.org */

#define GOB_VERSION_MAJOR 2
#define GOB_VERSION_MINOR 0
#define GOB_VERSION_PATCHLEVEL 11

#define selfp (self->_priv)

#include <string.h> /* memset() */

#include "mn-about-dialog.h"

#include "mn-about-dialog-private.h"

#ifdef G_LIKELY
#define ___GOB_LIKELY(expr) G_LIKELY(expr)
#define ___GOB_UNLIKELY(expr) G_UNLIKELY(expr)
#else /* ! G_LIKELY */
#define ___GOB_LIKELY(expr) (expr)
#define ___GOB_UNLIKELY(expr) (expr)
#endif /* G_LIKELY */

#line 25 "mn-about-dialog.gob"

#include "mn-util.h"

#line 31 "mn-about-dialog.c"
/* self casting macros */
#define SELF(x) MN_ABOUT_DIALOG(x)
#define SELF_CONST(x) MN_ABOUT_DIALOG_CONST(x)
#define IS_SELF(x) MN_IS_ABOUT_DIALOG(x)
#define TYPE_SELF MN_TYPE_ABOUT_DIALOG
#define SELF_CLASS(x) MN_ABOUT_DIALOG_CLASS(x)

#define SELF_GET_CLASS(x) MN_ABOUT_DIALOG_GET_CLASS(x)

/* self typedefs */
typedef MNAboutDialog Self;
typedef MNAboutDialogClass SelfClass;

/* here are local prototypes */
static void mn_about_dialog_class_init (MNAboutDialogClass * c) G_GNUC_UNUSED;
static void mn_about_dialog_init (MNAboutDialog * self) G_GNUC_UNUSED;

/* pointer to the class of our parent */
static GnomeAboutClass *parent_class = NULL;

/* Short form macros */
#define self_new mn_about_dialog_new
GType
mn_about_dialog_get_type (void)
{
	static GType type = 0;

	if ___GOB_UNLIKELY(type == 0) {
		static const GTypeInfo info = {
			sizeof (MNAboutDialogClass),
			(GBaseInitFunc) NULL,
			(GBaseFinalizeFunc) NULL,
			(GClassInitFunc) mn_about_dialog_class_init,
			(GClassFinalizeFunc) NULL,
			NULL /* class_data */,
			sizeof (MNAboutDialog),
			0 /* n_preallocs */,
			(GInstanceInitFunc) mn_about_dialog_init,
			NULL
		};

		type = g_type_register_static (GNOME_TYPE_ABOUT, "MNAboutDialog", &info, (GTypeFlags)0);
	}

	return type;
}

/* a macro for creating a new object of our type */
#define GET_NEW ((MNAboutDialog *)g_object_new(mn_about_dialog_get_type(), NULL))

/* a function for creating a new object of our type */
#include <stdarg.h>
static MNAboutDialog * GET_NEW_VARG (const char *first, ...) G_GNUC_UNUSED;
static MNAboutDialog *
GET_NEW_VARG (const char *first, ...)
{
	MNAboutDialog *ret;
	va_list ap;
	va_start (ap, first);
	ret = (MNAboutDialog *)g_object_new_valist (mn_about_dialog_get_type (), first, ap);
	va_end (ap);
	return ret;
}

static void 
mn_about_dialog_class_init (MNAboutDialogClass * c G_GNUC_UNUSED)
{
#define __GOB_FUNCTION__ "MN:About:Dialog::class_init"

	parent_class = g_type_class_ref (GNOME_TYPE_ABOUT);

}
#undef __GOB_FUNCTION__
#line 31 "mn-about-dialog.gob"
static void 
mn_about_dialog_init (MNAboutDialog * self G_GNUC_UNUSED)
#line 108 "mn-about-dialog.c"
{
#define __GOB_FUNCTION__ "MN:About:Dialog::init"
 {
#line 32 "mn-about-dialog.gob"

    const char *authors[] = { "Jean-Yves Lefort <jylefort@brutele.be>", NULL };
    const char *documenters[] = { "Jean-Yves Lefort <jylefort@brutele.be>", NULL };
    GdkPixbuf *logo;
    GdkPixbuf *icon;

    logo = mn_pixbuf_new("logo.png");
    gnome_about_construct(GNOME_ABOUT(self),
			  _("Mail Notification"),
			  VERSION,
			  "Copyright \302\251 2003, 2004 Jean-Yves Lefort",
			  _("A Mail Notification Icon"),
			  authors,
			  documenters,
			  /* translator: replace with your name and email */
			  _("Jean-Yves Lefort <jylefort@brutele.be>"),
			  logo);
    g_object_unref(logo);

    icon = mn_pixbuf_new("mail-notification.png");
    gtk_window_set_icon(GTK_WINDOW(self), icon);
    g_object_unref(icon);
  
#line 136 "mn-about-dialog.c"
 }
}
#undef __GOB_FUNCTION__



#line 56 "mn-about-dialog.gob"
GtkWidget * 
mn_about_dialog_new (void)
#line 146 "mn-about-dialog.c"
{
#define __GOB_FUNCTION__ "MN:About:Dialog::new"
{
#line 58 "mn-about-dialog.gob"
	
    return GTK_WIDGET(GET_NEW);
  }}
#line 154 "mn-about-dialog.c"
#undef __GOB_FUNCTION__
