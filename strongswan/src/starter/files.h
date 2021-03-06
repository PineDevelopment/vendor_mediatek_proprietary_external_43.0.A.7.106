/* strongSwan file locations
 * Copyright (C) 2001-2002 Mathieu Lafon - Arkoon Network Security
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#ifndef _STARTER_FILES_H_
#define _STARTER_FILES_H_

#ifdef STRONGSWAN_UNIT_TEST
#define PROC_NETKEY "./tc_temp/pfkey"
#define PROC_KLIPS "./tc_temp/pf_key"
#define PROC_MODULES "./tc_temp/modules"
#define CHARON_CTL_FILE "charon.ctl"
#else
#define PROC_NETKEY             "/proc/net/pfkey"
#define PROC_KLIPS              "/proc/net/pf_key"
#define PROC_MODULES    "/proc/modules"
#define CHARON_CTL_FILE IPSEC_PIDDIR "/charon.ctl"
#endif

#define CONFIG_FILE     IPSEC_CONFDIR "/ipsec.conf"
#define SECRETS_FILE    IPSEC_CONFDIR "/ipsec.secrets"

extern char *daemon_name;
extern char *cmd;
extern char *pid_file;

#define DYNIP_DIR       IPSEC_PIDDIR "/dynip"

#endif /* _STARTER_FILES_H_ */

