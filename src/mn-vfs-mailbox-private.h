/* Generated by GOB (v2.0.12)   (do not edit directly) */

#ifndef __MN_VFS_MAILBOX_PRIVATE_H__
#define __MN_VFS_MAILBOX_PRIVATE_H__

#include "mn-vfs-mailbox.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#line 31 "mn-vfs-mailbox.gob"

#include "mn-vfs-mailbox-backend.h"

#line 18 "mn-vfs-mailbox-private.h"
struct _MNVFSMailboxPrivate {
#line 64 "mn-vfs-mailbox.gob"
	GnomeVFSMonitorHandle * monitor_handle;
#line 66 "mn-vfs-mailbox.gob"
	GnomeVFSResult type_monitor_result;
#line 69 "mn-vfs-mailbox.gob"
	MNVFSMailboxBackend * backend;
#line 26 "mn-vfs-mailbox-private.h"
};
void 	mn_vfs_mailbox_monitor_error_dialog	(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif