/*
 * Ramon - A RMON2 Network Monitoring Agent
 * Copyright (C) 2003 Ricardo Nabinger Sanchez
 *
 * This file is part of Ramon, a network monitoring agent which implements
 * the MIB proposed in RFC-2021.
 *
 * Ramon is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * Ramon is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with program; see the file COPYING. If not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.iterate.conf,v 5.5 2002/12/16 22:50:18 hardaker Exp $
 */
#ifndef ADDRESSMAP_H
#define ADDRESSMAP_H

/*
 * function declarations
 */
void init_addressMap(void);
void initialize_table_addressMapControlTable(void);
Netsnmp_Node_Handler addressMapControlTable_handler;

Netsnmp_First_Data_Point addressMapControlTable_get_first_data_point;
Netsnmp_Next_Data_Point addressMapControlTable_get_next_data_point;
void initialize_table_addressMapTable(void);
Netsnmp_Node_Handler addressMapTable_handler;

Netsnmp_First_Data_Point addressMapTable_get_first_data_point;
Netsnmp_Next_Data_Point addressMapTable_get_next_data_point;

/*
 * column number definitions for table addressMapControlTable
 */
#define COLUMN_ADDRESSMAPCONTROLINDEX		1
#define COLUMN_ADDRESSMAPCONTROLDATASOURCE	2
#define COLUMN_ADDRESSMAPCONTROLDROPPEDFRAMES	3
#define COLUMN_ADDRESSMAPCONTROLOWNER		4
#define COLUMN_ADDRESSMAPCONTROLSTATUS		5

/*
 * column number definitions for table addressMapTable
 */
#define COLUMN_ADDRESSMAPTIMEMARK		1
#define COLUMN_ADDRESSMAPNETWORKADDRESS		2
#define COLUMN_ADDRESSMAPSOURCE			3
#define COLUMN_ADDRESSMAPPHYSICALADDRESS	4
#define COLUMN_ADDRESSMAPLASTCHANGE		5
#endif                          /* ADDRESSMAP_H */