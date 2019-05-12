$NetBSD: patch-lib_isc_unix_socket.c,v 1.2.4.1 2019/05/12 20:44:15 spz Exp $

Apply fix from NetBSD revision 1.24.

--- lib/isc/unix/socket.c.orig	2019-02-27 23:28:15.000000000 +0000
+++ lib/isc/unix/socket.c
@@ -258,6 +258,7 @@ typedef enum { poll_idle, poll_active, p
 			 (e) == EWOULDBLOCK || \
 			 (e) == ENOBUFS || \
 			 (e) == EINTR || \
+			 (e) == ENOBUFS || \
 			 (e) == 0)
 
 #define DLVL(x) ISC_LOGCATEGORY_GENERAL, ISC_LOGMODULE_SOCKET, ISC_LOG_DEBUG(x)
