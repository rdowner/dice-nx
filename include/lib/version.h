
/*
 * $VER: lib/version.h 1.0 (17.4.93)
 *
 * (c)Copyright 1992 Obvious Implementations Corp, All Rights Reserved
 */

#ifndef _LIB_VERSION_H
#define _LIB_VERSION_H

#define DICE_VERSION "3"

#ifndef __COMMODORE_DATE__
#define __COMMODORE_DATE__ __DATE__
#endif

#define DCOPYRIGHT static char *DCopyright = "Copyright (c) 1992-2023 Obvious Implementations Corp., 2023- Open Source contributors. Redistribution & Use under BSD License."


#define IDENT(file,subv)   static char *Ident = "$VER: " file " " DICE_VERSION subv "Open Source  (" __COMMODORE_DATE__ ")\n\r"
#define VDISTRIBUTION " Open Source"

#define _STRING(label)          #label
#define _STRING_EVAL(label)     _STRING(label)
#define INSTDIR                 _STRING_EVAL(_INSTDIR)

#ifdef AMIGA
#define DCC             "dcc:"
#define DCC_CONFIG      "dcc_config:"
#else
#define DCC             INSTDIR
#define DCC_CONFIG      DCC "config/"
#endif

#ifdef INTELBYTEORDER
extern unsigned int FromMsbOrder(unsigned int);
extern unsigned int ToMsbOrder(unsigned int);
extern unsigned short FromMsbOrderShort(unsigned short);
extern unsigned short ToMsbOrderShort(unsigned short);
#else
#define FromMsbOrder(n)         (n)
#define ToMsbOrder(n)           (n)
#define FromMsbOrderShort(n)    (n)
#define ToMsbOrderShort(n)      (n)
#endif

#endif
