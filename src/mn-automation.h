/* Generated by GOB (v2.0.9)   (do not edit directly) */

#include <glib.h>
#include <glib-object.h>


#include <libbonobo.h>
#include "MNAutomation.h"

#ifndef __MN_AUTOMATION_H__
#define __MN_AUTOMATION_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/*
 * Type checking and casting macros
 */
#define MN_TYPE_AUTOMATION	(mn_automation_get_type())
#define MN_AUTOMATION(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_automation_get_type(), MNAutomation)
#define MN_AUTOMATION_CONST(obj)	G_TYPE_CHECK_INSTANCE_CAST((obj), mn_automation_get_type(), MNAutomation const)
#define MN_AUTOMATION_CLASS(klass)	G_TYPE_CHECK_CLASS_CAST((klass), mn_automation_get_type(), MNAutomationClass)
#define MN_IS_AUTOMATION(obj)	G_TYPE_CHECK_INSTANCE_TYPE((obj), mn_automation_get_type ())

#define MN_AUTOMATION_GET_CLASS(obj)	G_TYPE_INSTANCE_GET_CLASS((obj), mn_automation_get_type(), MNAutomationClass)

/*
 * Main object structure
 */
#ifndef __TYPEDEF_MN_AUTOMATION__
#define __TYPEDEF_MN_AUTOMATION__
typedef struct _MNAutomation MNAutomation;
#endif
struct _MNAutomation {
	BonoboObject __parent__;
};

/*
 * Class definition
 */
typedef struct _MNAutomationClass MNAutomationClass;
struct _MNAutomationClass {
	BonoboObjectClass __parent__;
	/* Bonobo object epv */
	POA_GNOME_MNAutomation__epv _epv;
};


/*
 * Public methods
 */
GType	mn_automation_get_type	(void);
MNAutomation * 	mn_automation_new	(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
