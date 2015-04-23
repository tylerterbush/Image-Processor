TARGET  = libJPEG.a
SRCS	= 	ckconfig  \
		jcapimin \
		jcapistd \
		jccoefct \
		jccolor \
		jcdctmgr \
		jchuff \
		jcinit \
		jcmainct \
		jcmarker \
		jcmaster \
		jcomapi \
		jcparam \
		jcphuff \
		jcprepct \
		jcsample \
		jctrans \
		jdapimin \
		jdapistd \
		jdatadst \
		jdatasrc \
		jdcoefct \
		jdcolor \
		jddctmgr \
		jdhuff \
		jdinput \
		jdmainct \
		jdmarker \
		jdmaster \
		jdmerge \
		jdphuff \
		jdpostct \
		jdsample \
		jdtrans \
		jerror \
		jfdctflt \
		jfdctfst \
		jfdctint \
		jidctflt \
		jidctfst \
		jidctint \
		jidctred \
		jmemmgr \
		jmemnobs \
		jquant1 \
		jquant2 \
		jutils 


CC   = g++
CFLAGS		+=
LFLAGS		+=

OBJECTS		= ${addsuffix .o, ${SRCS}}
CLEAN		= *.o ${TARGET}

#############################################################
all: debug

debug: CFLAGS += -DDEBUG -g3
debug: ${TARGET}

release: CFLAGS += -O2 -DRELEASE -pipe -fomit-frame-pointer
release: ${TARGET}

${TARGET}: depend ${OBJECTS} 
	ar r ${TARGET} ${OBJECTS}

clean:	
	/bin/rm -f ${CLEAN}

.cpp.o:
	${CC} ${CFLAGS} -c $<

depend: 
	makedepend -- ${CFLAGS} -- ${addsuffix .cpp, ${SRCS}}
# DO NOT DELETE

ckconfig.o: /usr/include/stddef.h /usr/include/_types.h
ckconfig.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
ckconfig.o: /usr/include/sys/_symbol_aliasing.h
ckconfig.o: /usr/include/sys/_posix_availability.h
ckconfig.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
ckconfig.o: /usr/include/sys/_types/_ptrdiff_t.h
ckconfig.o: /usr/include/sys/_types/_size_t.h
ckconfig.o: /usr/include/sys/_types/_rsize_t.h
ckconfig.o: /usr/include/sys/_types/_wchar_t.h
ckconfig.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
ckconfig.o: /usr/include/stdlib.h /usr/include/Availability.h
ckconfig.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
ckconfig.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
ckconfig.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
ckconfig.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
ckconfig.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
ckconfig.o: /usr/include/mach/i386/_structs.h
ckconfig.o: /usr/include/sys/_types/_sigaltstack.h
ckconfig.o: /usr/include/sys/_types/_ucontext.h
ckconfig.o: /usr/include/sys/_types/_pthread_attr_t.h
ckconfig.o: /usr/include/sys/_types/_sigset_t.h
ckconfig.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
ckconfig.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
ckconfig.o: /usr/include/sys/_types/_int16_t.h
ckconfig.o: /usr/include/sys/_types/_int32_t.h
ckconfig.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
ckconfig.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
ckconfig.o: /usr/include/_types/_uint64_t.h
ckconfig.o: /usr/include/sys/_types/_intptr_t.h
ckconfig.o: /usr/include/sys/_types/_uintptr_t.h
ckconfig.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
ckconfig.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
ckconfig.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
ckconfig.o: /usr/include/libkern/_OSByteOrder.h
ckconfig.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
ckconfig.o: /usr/include/sys/_types/_ct_rune_t.h
ckconfig.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
ckconfig.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
ckconfig.o: /usr/include/sys/_types/_dev_t.h
ckconfig.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
ckconfig.o: /usr/include/sys/_types/_va_list.h
ckconfig.o: /usr/include/sys/_types/_off_t.h
ckconfig.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
ckconfig.o: /usr/include/secure/_common.h /usr/include/string.h
ckconfig.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
ckconfig.o: /usr/include/secure/_string.h
jcapimin.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jcapimin.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jcapimin.o: /usr/include/sys/_symbol_aliasing.h
jcapimin.o: /usr/include/sys/_posix_availability.h
jcapimin.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jcapimin.o: /usr/include/sys/_types/_ptrdiff_t.h
jcapimin.o: /usr/include/sys/_types/_size_t.h
jcapimin.o: /usr/include/sys/_types/_rsize_t.h
jcapimin.o: /usr/include/sys/_types/_wchar_t.h
jcapimin.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jcapimin.o: /usr/include/stdlib.h /usr/include/Availability.h
jcapimin.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jcapimin.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jcapimin.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jcapimin.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jcapimin.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jcapimin.o: /usr/include/mach/i386/_structs.h
jcapimin.o: /usr/include/sys/_types/_sigaltstack.h
jcapimin.o: /usr/include/sys/_types/_ucontext.h
jcapimin.o: /usr/include/sys/_types/_pthread_attr_t.h
jcapimin.o: /usr/include/sys/_types/_sigset_t.h
jcapimin.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jcapimin.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jcapimin.o: /usr/include/sys/_types/_int16_t.h
jcapimin.o: /usr/include/sys/_types/_int32_t.h
jcapimin.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jcapimin.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jcapimin.o: /usr/include/_types/_uint64_t.h
jcapimin.o: /usr/include/sys/_types/_intptr_t.h
jcapimin.o: /usr/include/sys/_types/_uintptr_t.h
jcapimin.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jcapimin.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jcapimin.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jcapimin.o: /usr/include/libkern/_OSByteOrder.h
jcapimin.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jcapimin.o: /usr/include/sys/_types/_ct_rune_t.h
jcapimin.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jcapimin.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jcapimin.o: /usr/include/sys/_types/_dev_t.h
jcapimin.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jcapimin.o: /usr/include/sys/_types/_va_list.h
jcapimin.o: /usr/include/sys/_types/_off_t.h
jcapimin.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jcapimin.o: /usr/include/secure/_common.h /usr/include/string.h
jcapimin.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jcapimin.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jcapimin.o: jerror.h
jcapistd.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jcapistd.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jcapistd.o: /usr/include/sys/_symbol_aliasing.h
jcapistd.o: /usr/include/sys/_posix_availability.h
jcapistd.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jcapistd.o: /usr/include/sys/_types/_ptrdiff_t.h
jcapistd.o: /usr/include/sys/_types/_size_t.h
jcapistd.o: /usr/include/sys/_types/_rsize_t.h
jcapistd.o: /usr/include/sys/_types/_wchar_t.h
jcapistd.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jcapistd.o: /usr/include/stdlib.h /usr/include/Availability.h
jcapistd.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jcapistd.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jcapistd.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jcapistd.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jcapistd.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jcapistd.o: /usr/include/mach/i386/_structs.h
jcapistd.o: /usr/include/sys/_types/_sigaltstack.h
jcapistd.o: /usr/include/sys/_types/_ucontext.h
jcapistd.o: /usr/include/sys/_types/_pthread_attr_t.h
jcapistd.o: /usr/include/sys/_types/_sigset_t.h
jcapistd.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jcapistd.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jcapistd.o: /usr/include/sys/_types/_int16_t.h
jcapistd.o: /usr/include/sys/_types/_int32_t.h
jcapistd.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jcapistd.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jcapistd.o: /usr/include/_types/_uint64_t.h
jcapistd.o: /usr/include/sys/_types/_intptr_t.h
jcapistd.o: /usr/include/sys/_types/_uintptr_t.h
jcapistd.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jcapistd.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jcapistd.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jcapistd.o: /usr/include/libkern/_OSByteOrder.h
jcapistd.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jcapistd.o: /usr/include/sys/_types/_ct_rune_t.h
jcapistd.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jcapistd.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jcapistd.o: /usr/include/sys/_types/_dev_t.h
jcapistd.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jcapistd.o: /usr/include/sys/_types/_va_list.h
jcapistd.o: /usr/include/sys/_types/_off_t.h
jcapistd.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jcapistd.o: /usr/include/secure/_common.h /usr/include/string.h
jcapistd.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jcapistd.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jcapistd.o: jerror.h
jccoefct.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jccoefct.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jccoefct.o: /usr/include/sys/_symbol_aliasing.h
jccoefct.o: /usr/include/sys/_posix_availability.h
jccoefct.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jccoefct.o: /usr/include/sys/_types/_ptrdiff_t.h
jccoefct.o: /usr/include/sys/_types/_size_t.h
jccoefct.o: /usr/include/sys/_types/_rsize_t.h
jccoefct.o: /usr/include/sys/_types/_wchar_t.h
jccoefct.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jccoefct.o: /usr/include/stdlib.h /usr/include/Availability.h
jccoefct.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jccoefct.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jccoefct.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jccoefct.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jccoefct.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jccoefct.o: /usr/include/mach/i386/_structs.h
jccoefct.o: /usr/include/sys/_types/_sigaltstack.h
jccoefct.o: /usr/include/sys/_types/_ucontext.h
jccoefct.o: /usr/include/sys/_types/_pthread_attr_t.h
jccoefct.o: /usr/include/sys/_types/_sigset_t.h
jccoefct.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jccoefct.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jccoefct.o: /usr/include/sys/_types/_int16_t.h
jccoefct.o: /usr/include/sys/_types/_int32_t.h
jccoefct.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jccoefct.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jccoefct.o: /usr/include/_types/_uint64_t.h
jccoefct.o: /usr/include/sys/_types/_intptr_t.h
jccoefct.o: /usr/include/sys/_types/_uintptr_t.h
jccoefct.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jccoefct.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jccoefct.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jccoefct.o: /usr/include/libkern/_OSByteOrder.h
jccoefct.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jccoefct.o: /usr/include/sys/_types/_ct_rune_t.h
jccoefct.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jccoefct.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jccoefct.o: /usr/include/sys/_types/_dev_t.h
jccoefct.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jccoefct.o: /usr/include/sys/_types/_va_list.h
jccoefct.o: /usr/include/sys/_types/_off_t.h
jccoefct.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jccoefct.o: /usr/include/secure/_common.h /usr/include/string.h
jccoefct.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jccoefct.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jccoefct.o: jerror.h
jccolor.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jccolor.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jccolor.o: /usr/include/sys/_symbol_aliasing.h
jccolor.o: /usr/include/sys/_posix_availability.h
jccolor.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jccolor.o: /usr/include/sys/_types/_ptrdiff_t.h
jccolor.o: /usr/include/sys/_types/_size_t.h
jccolor.o: /usr/include/sys/_types/_rsize_t.h
jccolor.o: /usr/include/sys/_types/_wchar_t.h
jccolor.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jccolor.o: /usr/include/stdlib.h /usr/include/Availability.h
jccolor.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jccolor.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jccolor.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jccolor.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jccolor.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jccolor.o: /usr/include/mach/i386/_structs.h
jccolor.o: /usr/include/sys/_types/_sigaltstack.h
jccolor.o: /usr/include/sys/_types/_ucontext.h
jccolor.o: /usr/include/sys/_types/_pthread_attr_t.h
jccolor.o: /usr/include/sys/_types/_sigset_t.h
jccolor.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jccolor.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jccolor.o: /usr/include/sys/_types/_int16_t.h
jccolor.o: /usr/include/sys/_types/_int32_t.h
jccolor.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jccolor.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jccolor.o: /usr/include/_types/_uint64_t.h
jccolor.o: /usr/include/sys/_types/_intptr_t.h
jccolor.o: /usr/include/sys/_types/_uintptr_t.h
jccolor.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jccolor.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jccolor.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jccolor.o: /usr/include/libkern/_OSByteOrder.h
jccolor.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jccolor.o: /usr/include/sys/_types/_ct_rune_t.h
jccolor.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jccolor.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jccolor.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jccolor.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jccolor.o: /usr/include/sys/_types/_off_t.h
jccolor.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jccolor.o: /usr/include/secure/_common.h /usr/include/string.h
jccolor.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jccolor.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jccolor.o: jerror.h
jcdctmgr.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jcdctmgr.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jcdctmgr.o: /usr/include/sys/_symbol_aliasing.h
jcdctmgr.o: /usr/include/sys/_posix_availability.h
jcdctmgr.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jcdctmgr.o: /usr/include/sys/_types/_ptrdiff_t.h
jcdctmgr.o: /usr/include/sys/_types/_size_t.h
jcdctmgr.o: /usr/include/sys/_types/_rsize_t.h
jcdctmgr.o: /usr/include/sys/_types/_wchar_t.h
jcdctmgr.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jcdctmgr.o: /usr/include/stdlib.h /usr/include/Availability.h
jcdctmgr.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jcdctmgr.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jcdctmgr.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jcdctmgr.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jcdctmgr.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jcdctmgr.o: /usr/include/mach/i386/_structs.h
jcdctmgr.o: /usr/include/sys/_types/_sigaltstack.h
jcdctmgr.o: /usr/include/sys/_types/_ucontext.h
jcdctmgr.o: /usr/include/sys/_types/_pthread_attr_t.h
jcdctmgr.o: /usr/include/sys/_types/_sigset_t.h
jcdctmgr.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jcdctmgr.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jcdctmgr.o: /usr/include/sys/_types/_int16_t.h
jcdctmgr.o: /usr/include/sys/_types/_int32_t.h
jcdctmgr.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jcdctmgr.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jcdctmgr.o: /usr/include/_types/_uint64_t.h
jcdctmgr.o: /usr/include/sys/_types/_intptr_t.h
jcdctmgr.o: /usr/include/sys/_types/_uintptr_t.h
jcdctmgr.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jcdctmgr.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jcdctmgr.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jcdctmgr.o: /usr/include/libkern/_OSByteOrder.h
jcdctmgr.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jcdctmgr.o: /usr/include/sys/_types/_ct_rune_t.h
jcdctmgr.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jcdctmgr.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jcdctmgr.o: /usr/include/sys/_types/_dev_t.h
jcdctmgr.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jcdctmgr.o: /usr/include/sys/_types/_va_list.h
jcdctmgr.o: /usr/include/sys/_types/_off_t.h
jcdctmgr.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jcdctmgr.o: /usr/include/secure/_common.h /usr/include/string.h
jcdctmgr.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jcdctmgr.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jcdctmgr.o: jerror.h jdct.h
jchuff.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jchuff.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jchuff.o: /usr/include/sys/_symbol_aliasing.h
jchuff.o: /usr/include/sys/_posix_availability.h
jchuff.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jchuff.o: /usr/include/sys/_types/_ptrdiff_t.h
jchuff.o: /usr/include/sys/_types/_size_t.h
jchuff.o: /usr/include/sys/_types/_rsize_t.h
jchuff.o: /usr/include/sys/_types/_wchar_t.h
jchuff.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jchuff.o: /usr/include/stdlib.h /usr/include/Availability.h
jchuff.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jchuff.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jchuff.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jchuff.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jchuff.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jchuff.o: /usr/include/mach/i386/_structs.h
jchuff.o: /usr/include/sys/_types/_sigaltstack.h
jchuff.o: /usr/include/sys/_types/_ucontext.h
jchuff.o: /usr/include/sys/_types/_pthread_attr_t.h
jchuff.o: /usr/include/sys/_types/_sigset_t.h
jchuff.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jchuff.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jchuff.o: /usr/include/sys/_types/_int16_t.h
jchuff.o: /usr/include/sys/_types/_int32_t.h
jchuff.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jchuff.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jchuff.o: /usr/include/_types/_uint64_t.h /usr/include/sys/_types/_intptr_t.h
jchuff.o: /usr/include/sys/_types/_uintptr_t.h
jchuff.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jchuff.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jchuff.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jchuff.o: /usr/include/libkern/_OSByteOrder.h
jchuff.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jchuff.o: /usr/include/sys/_types/_ct_rune_t.h
jchuff.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jchuff.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jchuff.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jchuff.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jchuff.o: /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_ssize_t.h
jchuff.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
jchuff.o: /usr/include/string.h /usr/include/sys/_types/_errno_t.h
jchuff.o: /usr/include/strings.h /usr/include/secure/_string.h jpeglib.h
jchuff.o: jmorecfg.h jpegint.h jerror.h jchuff.h
jcinit.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jcinit.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jcinit.o: /usr/include/sys/_symbol_aliasing.h
jcinit.o: /usr/include/sys/_posix_availability.h
jcinit.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jcinit.o: /usr/include/sys/_types/_ptrdiff_t.h
jcinit.o: /usr/include/sys/_types/_size_t.h
jcinit.o: /usr/include/sys/_types/_rsize_t.h
jcinit.o: /usr/include/sys/_types/_wchar_t.h
jcinit.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jcinit.o: /usr/include/stdlib.h /usr/include/Availability.h
jcinit.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jcinit.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jcinit.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jcinit.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jcinit.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jcinit.o: /usr/include/mach/i386/_structs.h
jcinit.o: /usr/include/sys/_types/_sigaltstack.h
jcinit.o: /usr/include/sys/_types/_ucontext.h
jcinit.o: /usr/include/sys/_types/_pthread_attr_t.h
jcinit.o: /usr/include/sys/_types/_sigset_t.h
jcinit.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jcinit.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jcinit.o: /usr/include/sys/_types/_int16_t.h
jcinit.o: /usr/include/sys/_types/_int32_t.h
jcinit.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jcinit.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jcinit.o: /usr/include/_types/_uint64_t.h /usr/include/sys/_types/_intptr_t.h
jcinit.o: /usr/include/sys/_types/_uintptr_t.h
jcinit.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jcinit.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jcinit.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jcinit.o: /usr/include/libkern/_OSByteOrder.h
jcinit.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jcinit.o: /usr/include/sys/_types/_ct_rune_t.h
jcinit.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jcinit.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jcinit.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jcinit.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jcinit.o: /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_ssize_t.h
jcinit.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
jcinit.o: /usr/include/string.h /usr/include/sys/_types/_errno_t.h
jcinit.o: /usr/include/strings.h /usr/include/secure/_string.h jpeglib.h
jcinit.o: jmorecfg.h jpegint.h jerror.h
jcmainct.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jcmainct.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jcmainct.o: /usr/include/sys/_symbol_aliasing.h
jcmainct.o: /usr/include/sys/_posix_availability.h
jcmainct.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jcmainct.o: /usr/include/sys/_types/_ptrdiff_t.h
jcmainct.o: /usr/include/sys/_types/_size_t.h
jcmainct.o: /usr/include/sys/_types/_rsize_t.h
jcmainct.o: /usr/include/sys/_types/_wchar_t.h
jcmainct.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jcmainct.o: /usr/include/stdlib.h /usr/include/Availability.h
jcmainct.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jcmainct.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jcmainct.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jcmainct.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jcmainct.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jcmainct.o: /usr/include/mach/i386/_structs.h
jcmainct.o: /usr/include/sys/_types/_sigaltstack.h
jcmainct.o: /usr/include/sys/_types/_ucontext.h
jcmainct.o: /usr/include/sys/_types/_pthread_attr_t.h
jcmainct.o: /usr/include/sys/_types/_sigset_t.h
jcmainct.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jcmainct.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jcmainct.o: /usr/include/sys/_types/_int16_t.h
jcmainct.o: /usr/include/sys/_types/_int32_t.h
jcmainct.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jcmainct.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jcmainct.o: /usr/include/_types/_uint64_t.h
jcmainct.o: /usr/include/sys/_types/_intptr_t.h
jcmainct.o: /usr/include/sys/_types/_uintptr_t.h
jcmainct.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jcmainct.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jcmainct.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jcmainct.o: /usr/include/libkern/_OSByteOrder.h
jcmainct.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jcmainct.o: /usr/include/sys/_types/_ct_rune_t.h
jcmainct.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jcmainct.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jcmainct.o: /usr/include/sys/_types/_dev_t.h
jcmainct.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jcmainct.o: /usr/include/sys/_types/_va_list.h
jcmainct.o: /usr/include/sys/_types/_off_t.h
jcmainct.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jcmainct.o: /usr/include/secure/_common.h /usr/include/string.h
jcmainct.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jcmainct.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jcmainct.o: jerror.h
jcmarker.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jcmarker.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jcmarker.o: /usr/include/sys/_symbol_aliasing.h
jcmarker.o: /usr/include/sys/_posix_availability.h
jcmarker.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jcmarker.o: /usr/include/sys/_types/_ptrdiff_t.h
jcmarker.o: /usr/include/sys/_types/_size_t.h
jcmarker.o: /usr/include/sys/_types/_rsize_t.h
jcmarker.o: /usr/include/sys/_types/_wchar_t.h
jcmarker.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jcmarker.o: /usr/include/stdlib.h /usr/include/Availability.h
jcmarker.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jcmarker.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jcmarker.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jcmarker.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jcmarker.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jcmarker.o: /usr/include/mach/i386/_structs.h
jcmarker.o: /usr/include/sys/_types/_sigaltstack.h
jcmarker.o: /usr/include/sys/_types/_ucontext.h
jcmarker.o: /usr/include/sys/_types/_pthread_attr_t.h
jcmarker.o: /usr/include/sys/_types/_sigset_t.h
jcmarker.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jcmarker.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jcmarker.o: /usr/include/sys/_types/_int16_t.h
jcmarker.o: /usr/include/sys/_types/_int32_t.h
jcmarker.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jcmarker.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jcmarker.o: /usr/include/_types/_uint64_t.h
jcmarker.o: /usr/include/sys/_types/_intptr_t.h
jcmarker.o: /usr/include/sys/_types/_uintptr_t.h
jcmarker.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jcmarker.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jcmarker.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jcmarker.o: /usr/include/libkern/_OSByteOrder.h
jcmarker.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jcmarker.o: /usr/include/sys/_types/_ct_rune_t.h
jcmarker.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jcmarker.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jcmarker.o: /usr/include/sys/_types/_dev_t.h
jcmarker.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jcmarker.o: /usr/include/sys/_types/_va_list.h
jcmarker.o: /usr/include/sys/_types/_off_t.h
jcmarker.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jcmarker.o: /usr/include/secure/_common.h /usr/include/string.h
jcmarker.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jcmarker.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jcmarker.o: jerror.h
jcmaster.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jcmaster.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jcmaster.o: /usr/include/sys/_symbol_aliasing.h
jcmaster.o: /usr/include/sys/_posix_availability.h
jcmaster.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jcmaster.o: /usr/include/sys/_types/_ptrdiff_t.h
jcmaster.o: /usr/include/sys/_types/_size_t.h
jcmaster.o: /usr/include/sys/_types/_rsize_t.h
jcmaster.o: /usr/include/sys/_types/_wchar_t.h
jcmaster.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jcmaster.o: /usr/include/stdlib.h /usr/include/Availability.h
jcmaster.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jcmaster.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jcmaster.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jcmaster.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jcmaster.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jcmaster.o: /usr/include/mach/i386/_structs.h
jcmaster.o: /usr/include/sys/_types/_sigaltstack.h
jcmaster.o: /usr/include/sys/_types/_ucontext.h
jcmaster.o: /usr/include/sys/_types/_pthread_attr_t.h
jcmaster.o: /usr/include/sys/_types/_sigset_t.h
jcmaster.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jcmaster.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jcmaster.o: /usr/include/sys/_types/_int16_t.h
jcmaster.o: /usr/include/sys/_types/_int32_t.h
jcmaster.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jcmaster.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jcmaster.o: /usr/include/_types/_uint64_t.h
jcmaster.o: /usr/include/sys/_types/_intptr_t.h
jcmaster.o: /usr/include/sys/_types/_uintptr_t.h
jcmaster.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jcmaster.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jcmaster.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jcmaster.o: /usr/include/libkern/_OSByteOrder.h
jcmaster.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jcmaster.o: /usr/include/sys/_types/_ct_rune_t.h
jcmaster.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jcmaster.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jcmaster.o: /usr/include/sys/_types/_dev_t.h
jcmaster.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jcmaster.o: /usr/include/sys/_types/_va_list.h
jcmaster.o: /usr/include/sys/_types/_off_t.h
jcmaster.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jcmaster.o: /usr/include/secure/_common.h /usr/include/string.h
jcmaster.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jcmaster.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jcmaster.o: jerror.h
jcomapi.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jcomapi.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jcomapi.o: /usr/include/sys/_symbol_aliasing.h
jcomapi.o: /usr/include/sys/_posix_availability.h
jcomapi.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jcomapi.o: /usr/include/sys/_types/_ptrdiff_t.h
jcomapi.o: /usr/include/sys/_types/_size_t.h
jcomapi.o: /usr/include/sys/_types/_rsize_t.h
jcomapi.o: /usr/include/sys/_types/_wchar_t.h
jcomapi.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jcomapi.o: /usr/include/stdlib.h /usr/include/Availability.h
jcomapi.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jcomapi.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jcomapi.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jcomapi.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jcomapi.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jcomapi.o: /usr/include/mach/i386/_structs.h
jcomapi.o: /usr/include/sys/_types/_sigaltstack.h
jcomapi.o: /usr/include/sys/_types/_ucontext.h
jcomapi.o: /usr/include/sys/_types/_pthread_attr_t.h
jcomapi.o: /usr/include/sys/_types/_sigset_t.h
jcomapi.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jcomapi.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jcomapi.o: /usr/include/sys/_types/_int16_t.h
jcomapi.o: /usr/include/sys/_types/_int32_t.h
jcomapi.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jcomapi.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jcomapi.o: /usr/include/_types/_uint64_t.h
jcomapi.o: /usr/include/sys/_types/_intptr_t.h
jcomapi.o: /usr/include/sys/_types/_uintptr_t.h
jcomapi.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jcomapi.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jcomapi.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jcomapi.o: /usr/include/libkern/_OSByteOrder.h
jcomapi.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jcomapi.o: /usr/include/sys/_types/_ct_rune_t.h
jcomapi.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jcomapi.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jcomapi.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jcomapi.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jcomapi.o: /usr/include/sys/_types/_off_t.h
jcomapi.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jcomapi.o: /usr/include/secure/_common.h /usr/include/string.h
jcomapi.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jcomapi.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jcomapi.o: jerror.h
jcparam.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jcparam.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jcparam.o: /usr/include/sys/_symbol_aliasing.h
jcparam.o: /usr/include/sys/_posix_availability.h
jcparam.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jcparam.o: /usr/include/sys/_types/_ptrdiff_t.h
jcparam.o: /usr/include/sys/_types/_size_t.h
jcparam.o: /usr/include/sys/_types/_rsize_t.h
jcparam.o: /usr/include/sys/_types/_wchar_t.h
jcparam.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jcparam.o: /usr/include/stdlib.h /usr/include/Availability.h
jcparam.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jcparam.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jcparam.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jcparam.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jcparam.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jcparam.o: /usr/include/mach/i386/_structs.h
jcparam.o: /usr/include/sys/_types/_sigaltstack.h
jcparam.o: /usr/include/sys/_types/_ucontext.h
jcparam.o: /usr/include/sys/_types/_pthread_attr_t.h
jcparam.o: /usr/include/sys/_types/_sigset_t.h
jcparam.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jcparam.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jcparam.o: /usr/include/sys/_types/_int16_t.h
jcparam.o: /usr/include/sys/_types/_int32_t.h
jcparam.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jcparam.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jcparam.o: /usr/include/_types/_uint64_t.h
jcparam.o: /usr/include/sys/_types/_intptr_t.h
jcparam.o: /usr/include/sys/_types/_uintptr_t.h
jcparam.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jcparam.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jcparam.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jcparam.o: /usr/include/libkern/_OSByteOrder.h
jcparam.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jcparam.o: /usr/include/sys/_types/_ct_rune_t.h
jcparam.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jcparam.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jcparam.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jcparam.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jcparam.o: /usr/include/sys/_types/_off_t.h
jcparam.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jcparam.o: /usr/include/secure/_common.h /usr/include/string.h
jcparam.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jcparam.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jcparam.o: jerror.h
jcphuff.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jcphuff.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jcphuff.o: /usr/include/sys/_symbol_aliasing.h
jcphuff.o: /usr/include/sys/_posix_availability.h
jcphuff.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jcphuff.o: /usr/include/sys/_types/_ptrdiff_t.h
jcphuff.o: /usr/include/sys/_types/_size_t.h
jcphuff.o: /usr/include/sys/_types/_rsize_t.h
jcphuff.o: /usr/include/sys/_types/_wchar_t.h
jcphuff.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jcphuff.o: /usr/include/stdlib.h /usr/include/Availability.h
jcphuff.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jcphuff.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jcphuff.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jcphuff.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jcphuff.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jcphuff.o: /usr/include/mach/i386/_structs.h
jcphuff.o: /usr/include/sys/_types/_sigaltstack.h
jcphuff.o: /usr/include/sys/_types/_ucontext.h
jcphuff.o: /usr/include/sys/_types/_pthread_attr_t.h
jcphuff.o: /usr/include/sys/_types/_sigset_t.h
jcphuff.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jcphuff.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jcphuff.o: /usr/include/sys/_types/_int16_t.h
jcphuff.o: /usr/include/sys/_types/_int32_t.h
jcphuff.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jcphuff.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jcphuff.o: /usr/include/_types/_uint64_t.h
jcphuff.o: /usr/include/sys/_types/_intptr_t.h
jcphuff.o: /usr/include/sys/_types/_uintptr_t.h
jcphuff.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jcphuff.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jcphuff.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jcphuff.o: /usr/include/libkern/_OSByteOrder.h
jcphuff.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jcphuff.o: /usr/include/sys/_types/_ct_rune_t.h
jcphuff.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jcphuff.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jcphuff.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jcphuff.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jcphuff.o: /usr/include/sys/_types/_off_t.h
jcphuff.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jcphuff.o: /usr/include/secure/_common.h /usr/include/string.h
jcphuff.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jcphuff.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jcphuff.o: jerror.h jchuff.h
jcprepct.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jcprepct.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jcprepct.o: /usr/include/sys/_symbol_aliasing.h
jcprepct.o: /usr/include/sys/_posix_availability.h
jcprepct.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jcprepct.o: /usr/include/sys/_types/_ptrdiff_t.h
jcprepct.o: /usr/include/sys/_types/_size_t.h
jcprepct.o: /usr/include/sys/_types/_rsize_t.h
jcprepct.o: /usr/include/sys/_types/_wchar_t.h
jcprepct.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jcprepct.o: /usr/include/stdlib.h /usr/include/Availability.h
jcprepct.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jcprepct.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jcprepct.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jcprepct.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jcprepct.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jcprepct.o: /usr/include/mach/i386/_structs.h
jcprepct.o: /usr/include/sys/_types/_sigaltstack.h
jcprepct.o: /usr/include/sys/_types/_ucontext.h
jcprepct.o: /usr/include/sys/_types/_pthread_attr_t.h
jcprepct.o: /usr/include/sys/_types/_sigset_t.h
jcprepct.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jcprepct.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jcprepct.o: /usr/include/sys/_types/_int16_t.h
jcprepct.o: /usr/include/sys/_types/_int32_t.h
jcprepct.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jcprepct.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jcprepct.o: /usr/include/_types/_uint64_t.h
jcprepct.o: /usr/include/sys/_types/_intptr_t.h
jcprepct.o: /usr/include/sys/_types/_uintptr_t.h
jcprepct.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jcprepct.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jcprepct.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jcprepct.o: /usr/include/libkern/_OSByteOrder.h
jcprepct.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jcprepct.o: /usr/include/sys/_types/_ct_rune_t.h
jcprepct.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jcprepct.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jcprepct.o: /usr/include/sys/_types/_dev_t.h
jcprepct.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jcprepct.o: /usr/include/sys/_types/_va_list.h
jcprepct.o: /usr/include/sys/_types/_off_t.h
jcprepct.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jcprepct.o: /usr/include/secure/_common.h /usr/include/string.h
jcprepct.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jcprepct.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jcprepct.o: jerror.h
jcsample.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jcsample.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jcsample.o: /usr/include/sys/_symbol_aliasing.h
jcsample.o: /usr/include/sys/_posix_availability.h
jcsample.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jcsample.o: /usr/include/sys/_types/_ptrdiff_t.h
jcsample.o: /usr/include/sys/_types/_size_t.h
jcsample.o: /usr/include/sys/_types/_rsize_t.h
jcsample.o: /usr/include/sys/_types/_wchar_t.h
jcsample.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jcsample.o: /usr/include/stdlib.h /usr/include/Availability.h
jcsample.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jcsample.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jcsample.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jcsample.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jcsample.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jcsample.o: /usr/include/mach/i386/_structs.h
jcsample.o: /usr/include/sys/_types/_sigaltstack.h
jcsample.o: /usr/include/sys/_types/_ucontext.h
jcsample.o: /usr/include/sys/_types/_pthread_attr_t.h
jcsample.o: /usr/include/sys/_types/_sigset_t.h
jcsample.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jcsample.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jcsample.o: /usr/include/sys/_types/_int16_t.h
jcsample.o: /usr/include/sys/_types/_int32_t.h
jcsample.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jcsample.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jcsample.o: /usr/include/_types/_uint64_t.h
jcsample.o: /usr/include/sys/_types/_intptr_t.h
jcsample.o: /usr/include/sys/_types/_uintptr_t.h
jcsample.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jcsample.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jcsample.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jcsample.o: /usr/include/libkern/_OSByteOrder.h
jcsample.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jcsample.o: /usr/include/sys/_types/_ct_rune_t.h
jcsample.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jcsample.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jcsample.o: /usr/include/sys/_types/_dev_t.h
jcsample.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jcsample.o: /usr/include/sys/_types/_va_list.h
jcsample.o: /usr/include/sys/_types/_off_t.h
jcsample.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jcsample.o: /usr/include/secure/_common.h /usr/include/string.h
jcsample.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jcsample.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jcsample.o: jerror.h
jctrans.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jctrans.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jctrans.o: /usr/include/sys/_symbol_aliasing.h
jctrans.o: /usr/include/sys/_posix_availability.h
jctrans.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jctrans.o: /usr/include/sys/_types/_ptrdiff_t.h
jctrans.o: /usr/include/sys/_types/_size_t.h
jctrans.o: /usr/include/sys/_types/_rsize_t.h
jctrans.o: /usr/include/sys/_types/_wchar_t.h
jctrans.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jctrans.o: /usr/include/stdlib.h /usr/include/Availability.h
jctrans.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jctrans.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jctrans.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jctrans.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jctrans.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jctrans.o: /usr/include/mach/i386/_structs.h
jctrans.o: /usr/include/sys/_types/_sigaltstack.h
jctrans.o: /usr/include/sys/_types/_ucontext.h
jctrans.o: /usr/include/sys/_types/_pthread_attr_t.h
jctrans.o: /usr/include/sys/_types/_sigset_t.h
jctrans.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jctrans.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jctrans.o: /usr/include/sys/_types/_int16_t.h
jctrans.o: /usr/include/sys/_types/_int32_t.h
jctrans.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jctrans.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jctrans.o: /usr/include/_types/_uint64_t.h
jctrans.o: /usr/include/sys/_types/_intptr_t.h
jctrans.o: /usr/include/sys/_types/_uintptr_t.h
jctrans.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jctrans.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jctrans.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jctrans.o: /usr/include/libkern/_OSByteOrder.h
jctrans.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jctrans.o: /usr/include/sys/_types/_ct_rune_t.h
jctrans.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jctrans.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jctrans.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jctrans.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jctrans.o: /usr/include/sys/_types/_off_t.h
jctrans.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jctrans.o: /usr/include/secure/_common.h /usr/include/string.h
jctrans.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jctrans.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jctrans.o: jerror.h
jdapimin.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdapimin.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdapimin.o: /usr/include/sys/_symbol_aliasing.h
jdapimin.o: /usr/include/sys/_posix_availability.h
jdapimin.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdapimin.o: /usr/include/sys/_types/_ptrdiff_t.h
jdapimin.o: /usr/include/sys/_types/_size_t.h
jdapimin.o: /usr/include/sys/_types/_rsize_t.h
jdapimin.o: /usr/include/sys/_types/_wchar_t.h
jdapimin.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdapimin.o: /usr/include/stdlib.h /usr/include/Availability.h
jdapimin.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdapimin.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdapimin.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdapimin.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdapimin.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdapimin.o: /usr/include/mach/i386/_structs.h
jdapimin.o: /usr/include/sys/_types/_sigaltstack.h
jdapimin.o: /usr/include/sys/_types/_ucontext.h
jdapimin.o: /usr/include/sys/_types/_pthread_attr_t.h
jdapimin.o: /usr/include/sys/_types/_sigset_t.h
jdapimin.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdapimin.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdapimin.o: /usr/include/sys/_types/_int16_t.h
jdapimin.o: /usr/include/sys/_types/_int32_t.h
jdapimin.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdapimin.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdapimin.o: /usr/include/_types/_uint64_t.h
jdapimin.o: /usr/include/sys/_types/_intptr_t.h
jdapimin.o: /usr/include/sys/_types/_uintptr_t.h
jdapimin.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdapimin.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdapimin.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdapimin.o: /usr/include/libkern/_OSByteOrder.h
jdapimin.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdapimin.o: /usr/include/sys/_types/_ct_rune_t.h
jdapimin.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdapimin.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdapimin.o: /usr/include/sys/_types/_dev_t.h
jdapimin.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jdapimin.o: /usr/include/sys/_types/_va_list.h
jdapimin.o: /usr/include/sys/_types/_off_t.h
jdapimin.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdapimin.o: /usr/include/secure/_common.h /usr/include/string.h
jdapimin.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdapimin.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdapimin.o: jerror.h
jdapistd.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdapistd.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdapistd.o: /usr/include/sys/_symbol_aliasing.h
jdapistd.o: /usr/include/sys/_posix_availability.h
jdapistd.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdapistd.o: /usr/include/sys/_types/_ptrdiff_t.h
jdapistd.o: /usr/include/sys/_types/_size_t.h
jdapistd.o: /usr/include/sys/_types/_rsize_t.h
jdapistd.o: /usr/include/sys/_types/_wchar_t.h
jdapistd.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdapistd.o: /usr/include/stdlib.h /usr/include/Availability.h
jdapistd.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdapistd.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdapistd.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdapistd.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdapistd.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdapistd.o: /usr/include/mach/i386/_structs.h
jdapistd.o: /usr/include/sys/_types/_sigaltstack.h
jdapistd.o: /usr/include/sys/_types/_ucontext.h
jdapistd.o: /usr/include/sys/_types/_pthread_attr_t.h
jdapistd.o: /usr/include/sys/_types/_sigset_t.h
jdapistd.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdapistd.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdapistd.o: /usr/include/sys/_types/_int16_t.h
jdapistd.o: /usr/include/sys/_types/_int32_t.h
jdapistd.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdapistd.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdapistd.o: /usr/include/_types/_uint64_t.h
jdapistd.o: /usr/include/sys/_types/_intptr_t.h
jdapistd.o: /usr/include/sys/_types/_uintptr_t.h
jdapistd.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdapistd.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdapistd.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdapistd.o: /usr/include/libkern/_OSByteOrder.h
jdapistd.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdapistd.o: /usr/include/sys/_types/_ct_rune_t.h
jdapistd.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdapistd.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdapistd.o: /usr/include/sys/_types/_dev_t.h
jdapistd.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jdapistd.o: /usr/include/sys/_types/_va_list.h
jdapistd.o: /usr/include/sys/_types/_off_t.h
jdapistd.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdapistd.o: /usr/include/secure/_common.h /usr/include/string.h
jdapistd.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdapistd.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdapistd.o: jerror.h
jdatadst.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdatadst.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdatadst.o: /usr/include/sys/_symbol_aliasing.h
jdatadst.o: /usr/include/sys/_posix_availability.h
jdatadst.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdatadst.o: /usr/include/sys/_types/_ptrdiff_t.h
jdatadst.o: /usr/include/sys/_types/_size_t.h
jdatadst.o: /usr/include/sys/_types/_rsize_t.h
jdatadst.o: /usr/include/sys/_types/_wchar_t.h
jdatadst.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdatadst.o: /usr/include/stdlib.h /usr/include/Availability.h
jdatadst.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdatadst.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdatadst.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdatadst.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdatadst.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdatadst.o: /usr/include/mach/i386/_structs.h
jdatadst.o: /usr/include/sys/_types/_sigaltstack.h
jdatadst.o: /usr/include/sys/_types/_ucontext.h
jdatadst.o: /usr/include/sys/_types/_pthread_attr_t.h
jdatadst.o: /usr/include/sys/_types/_sigset_t.h
jdatadst.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdatadst.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdatadst.o: /usr/include/sys/_types/_int16_t.h
jdatadst.o: /usr/include/sys/_types/_int32_t.h
jdatadst.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdatadst.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdatadst.o: /usr/include/_types/_uint64_t.h
jdatadst.o: /usr/include/sys/_types/_intptr_t.h
jdatadst.o: /usr/include/sys/_types/_uintptr_t.h
jdatadst.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdatadst.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdatadst.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdatadst.o: /usr/include/libkern/_OSByteOrder.h
jdatadst.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdatadst.o: /usr/include/sys/_types/_ct_rune_t.h
jdatadst.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdatadst.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdatadst.o: /usr/include/sys/_types/_dev_t.h
jdatadst.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jdatadst.o: /usr/include/sys/_types/_va_list.h
jdatadst.o: /usr/include/sys/_types/_off_t.h
jdatadst.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdatadst.o: /usr/include/secure/_common.h /usr/include/string.h
jdatadst.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdatadst.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdatadst.o: jerror.h
jdatasrc.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdatasrc.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdatasrc.o: /usr/include/sys/_symbol_aliasing.h
jdatasrc.o: /usr/include/sys/_posix_availability.h
jdatasrc.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdatasrc.o: /usr/include/sys/_types/_ptrdiff_t.h
jdatasrc.o: /usr/include/sys/_types/_size_t.h
jdatasrc.o: /usr/include/sys/_types/_rsize_t.h
jdatasrc.o: /usr/include/sys/_types/_wchar_t.h
jdatasrc.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdatasrc.o: /usr/include/stdlib.h /usr/include/Availability.h
jdatasrc.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdatasrc.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdatasrc.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdatasrc.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdatasrc.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdatasrc.o: /usr/include/mach/i386/_structs.h
jdatasrc.o: /usr/include/sys/_types/_sigaltstack.h
jdatasrc.o: /usr/include/sys/_types/_ucontext.h
jdatasrc.o: /usr/include/sys/_types/_pthread_attr_t.h
jdatasrc.o: /usr/include/sys/_types/_sigset_t.h
jdatasrc.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdatasrc.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdatasrc.o: /usr/include/sys/_types/_int16_t.h
jdatasrc.o: /usr/include/sys/_types/_int32_t.h
jdatasrc.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdatasrc.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdatasrc.o: /usr/include/_types/_uint64_t.h
jdatasrc.o: /usr/include/sys/_types/_intptr_t.h
jdatasrc.o: /usr/include/sys/_types/_uintptr_t.h
jdatasrc.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdatasrc.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdatasrc.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdatasrc.o: /usr/include/libkern/_OSByteOrder.h
jdatasrc.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdatasrc.o: /usr/include/sys/_types/_ct_rune_t.h
jdatasrc.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdatasrc.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdatasrc.o: /usr/include/sys/_types/_dev_t.h
jdatasrc.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jdatasrc.o: /usr/include/sys/_types/_va_list.h
jdatasrc.o: /usr/include/sys/_types/_off_t.h
jdatasrc.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdatasrc.o: /usr/include/secure/_common.h /usr/include/string.h
jdatasrc.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdatasrc.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdatasrc.o: jerror.h
jdcoefct.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdcoefct.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdcoefct.o: /usr/include/sys/_symbol_aliasing.h
jdcoefct.o: /usr/include/sys/_posix_availability.h
jdcoefct.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdcoefct.o: /usr/include/sys/_types/_ptrdiff_t.h
jdcoefct.o: /usr/include/sys/_types/_size_t.h
jdcoefct.o: /usr/include/sys/_types/_rsize_t.h
jdcoefct.o: /usr/include/sys/_types/_wchar_t.h
jdcoefct.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdcoefct.o: /usr/include/stdlib.h /usr/include/Availability.h
jdcoefct.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdcoefct.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdcoefct.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdcoefct.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdcoefct.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdcoefct.o: /usr/include/mach/i386/_structs.h
jdcoefct.o: /usr/include/sys/_types/_sigaltstack.h
jdcoefct.o: /usr/include/sys/_types/_ucontext.h
jdcoefct.o: /usr/include/sys/_types/_pthread_attr_t.h
jdcoefct.o: /usr/include/sys/_types/_sigset_t.h
jdcoefct.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdcoefct.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdcoefct.o: /usr/include/sys/_types/_int16_t.h
jdcoefct.o: /usr/include/sys/_types/_int32_t.h
jdcoefct.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdcoefct.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdcoefct.o: /usr/include/_types/_uint64_t.h
jdcoefct.o: /usr/include/sys/_types/_intptr_t.h
jdcoefct.o: /usr/include/sys/_types/_uintptr_t.h
jdcoefct.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdcoefct.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdcoefct.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdcoefct.o: /usr/include/libkern/_OSByteOrder.h
jdcoefct.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdcoefct.o: /usr/include/sys/_types/_ct_rune_t.h
jdcoefct.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdcoefct.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdcoefct.o: /usr/include/sys/_types/_dev_t.h
jdcoefct.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jdcoefct.o: /usr/include/sys/_types/_va_list.h
jdcoefct.o: /usr/include/sys/_types/_off_t.h
jdcoefct.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdcoefct.o: /usr/include/secure/_common.h /usr/include/string.h
jdcoefct.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdcoefct.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdcoefct.o: jerror.h
jdcolor.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdcolor.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdcolor.o: /usr/include/sys/_symbol_aliasing.h
jdcolor.o: /usr/include/sys/_posix_availability.h
jdcolor.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdcolor.o: /usr/include/sys/_types/_ptrdiff_t.h
jdcolor.o: /usr/include/sys/_types/_size_t.h
jdcolor.o: /usr/include/sys/_types/_rsize_t.h
jdcolor.o: /usr/include/sys/_types/_wchar_t.h
jdcolor.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdcolor.o: /usr/include/stdlib.h /usr/include/Availability.h
jdcolor.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdcolor.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdcolor.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdcolor.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdcolor.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdcolor.o: /usr/include/mach/i386/_structs.h
jdcolor.o: /usr/include/sys/_types/_sigaltstack.h
jdcolor.o: /usr/include/sys/_types/_ucontext.h
jdcolor.o: /usr/include/sys/_types/_pthread_attr_t.h
jdcolor.o: /usr/include/sys/_types/_sigset_t.h
jdcolor.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdcolor.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdcolor.o: /usr/include/sys/_types/_int16_t.h
jdcolor.o: /usr/include/sys/_types/_int32_t.h
jdcolor.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdcolor.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdcolor.o: /usr/include/_types/_uint64_t.h
jdcolor.o: /usr/include/sys/_types/_intptr_t.h
jdcolor.o: /usr/include/sys/_types/_uintptr_t.h
jdcolor.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdcolor.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdcolor.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdcolor.o: /usr/include/libkern/_OSByteOrder.h
jdcolor.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdcolor.o: /usr/include/sys/_types/_ct_rune_t.h
jdcolor.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdcolor.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdcolor.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jdcolor.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jdcolor.o: /usr/include/sys/_types/_off_t.h
jdcolor.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdcolor.o: /usr/include/secure/_common.h /usr/include/string.h
jdcolor.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdcolor.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdcolor.o: jerror.h
jddctmgr.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jddctmgr.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jddctmgr.o: /usr/include/sys/_symbol_aliasing.h
jddctmgr.o: /usr/include/sys/_posix_availability.h
jddctmgr.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jddctmgr.o: /usr/include/sys/_types/_ptrdiff_t.h
jddctmgr.o: /usr/include/sys/_types/_size_t.h
jddctmgr.o: /usr/include/sys/_types/_rsize_t.h
jddctmgr.o: /usr/include/sys/_types/_wchar_t.h
jddctmgr.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jddctmgr.o: /usr/include/stdlib.h /usr/include/Availability.h
jddctmgr.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jddctmgr.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jddctmgr.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jddctmgr.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jddctmgr.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jddctmgr.o: /usr/include/mach/i386/_structs.h
jddctmgr.o: /usr/include/sys/_types/_sigaltstack.h
jddctmgr.o: /usr/include/sys/_types/_ucontext.h
jddctmgr.o: /usr/include/sys/_types/_pthread_attr_t.h
jddctmgr.o: /usr/include/sys/_types/_sigset_t.h
jddctmgr.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jddctmgr.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jddctmgr.o: /usr/include/sys/_types/_int16_t.h
jddctmgr.o: /usr/include/sys/_types/_int32_t.h
jddctmgr.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jddctmgr.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jddctmgr.o: /usr/include/_types/_uint64_t.h
jddctmgr.o: /usr/include/sys/_types/_intptr_t.h
jddctmgr.o: /usr/include/sys/_types/_uintptr_t.h
jddctmgr.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jddctmgr.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jddctmgr.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jddctmgr.o: /usr/include/libkern/_OSByteOrder.h
jddctmgr.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jddctmgr.o: /usr/include/sys/_types/_ct_rune_t.h
jddctmgr.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jddctmgr.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jddctmgr.o: /usr/include/sys/_types/_dev_t.h
jddctmgr.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jddctmgr.o: /usr/include/sys/_types/_va_list.h
jddctmgr.o: /usr/include/sys/_types/_off_t.h
jddctmgr.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jddctmgr.o: /usr/include/secure/_common.h /usr/include/string.h
jddctmgr.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jddctmgr.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jddctmgr.o: jerror.h jdct.h
jdhuff.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdhuff.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdhuff.o: /usr/include/sys/_symbol_aliasing.h
jdhuff.o: /usr/include/sys/_posix_availability.h
jdhuff.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdhuff.o: /usr/include/sys/_types/_ptrdiff_t.h
jdhuff.o: /usr/include/sys/_types/_size_t.h
jdhuff.o: /usr/include/sys/_types/_rsize_t.h
jdhuff.o: /usr/include/sys/_types/_wchar_t.h
jdhuff.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdhuff.o: /usr/include/stdlib.h /usr/include/Availability.h
jdhuff.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdhuff.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdhuff.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdhuff.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdhuff.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdhuff.o: /usr/include/mach/i386/_structs.h
jdhuff.o: /usr/include/sys/_types/_sigaltstack.h
jdhuff.o: /usr/include/sys/_types/_ucontext.h
jdhuff.o: /usr/include/sys/_types/_pthread_attr_t.h
jdhuff.o: /usr/include/sys/_types/_sigset_t.h
jdhuff.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdhuff.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdhuff.o: /usr/include/sys/_types/_int16_t.h
jdhuff.o: /usr/include/sys/_types/_int32_t.h
jdhuff.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdhuff.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdhuff.o: /usr/include/_types/_uint64_t.h /usr/include/sys/_types/_intptr_t.h
jdhuff.o: /usr/include/sys/_types/_uintptr_t.h
jdhuff.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdhuff.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdhuff.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdhuff.o: /usr/include/libkern/_OSByteOrder.h
jdhuff.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdhuff.o: /usr/include/sys/_types/_ct_rune_t.h
jdhuff.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdhuff.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdhuff.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jdhuff.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jdhuff.o: /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_ssize_t.h
jdhuff.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
jdhuff.o: /usr/include/string.h /usr/include/sys/_types/_errno_t.h
jdhuff.o: /usr/include/strings.h /usr/include/secure/_string.h jpeglib.h
jdhuff.o: jmorecfg.h jpegint.h jerror.h jdhuff.h
jdinput.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdinput.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdinput.o: /usr/include/sys/_symbol_aliasing.h
jdinput.o: /usr/include/sys/_posix_availability.h
jdinput.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdinput.o: /usr/include/sys/_types/_ptrdiff_t.h
jdinput.o: /usr/include/sys/_types/_size_t.h
jdinput.o: /usr/include/sys/_types/_rsize_t.h
jdinput.o: /usr/include/sys/_types/_wchar_t.h
jdinput.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdinput.o: /usr/include/stdlib.h /usr/include/Availability.h
jdinput.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdinput.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdinput.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdinput.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdinput.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdinput.o: /usr/include/mach/i386/_structs.h
jdinput.o: /usr/include/sys/_types/_sigaltstack.h
jdinput.o: /usr/include/sys/_types/_ucontext.h
jdinput.o: /usr/include/sys/_types/_pthread_attr_t.h
jdinput.o: /usr/include/sys/_types/_sigset_t.h
jdinput.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdinput.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdinput.o: /usr/include/sys/_types/_int16_t.h
jdinput.o: /usr/include/sys/_types/_int32_t.h
jdinput.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdinput.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdinput.o: /usr/include/_types/_uint64_t.h
jdinput.o: /usr/include/sys/_types/_intptr_t.h
jdinput.o: /usr/include/sys/_types/_uintptr_t.h
jdinput.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdinput.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdinput.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdinput.o: /usr/include/libkern/_OSByteOrder.h
jdinput.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdinput.o: /usr/include/sys/_types/_ct_rune_t.h
jdinput.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdinput.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdinput.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jdinput.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jdinput.o: /usr/include/sys/_types/_off_t.h
jdinput.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdinput.o: /usr/include/secure/_common.h /usr/include/string.h
jdinput.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdinput.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdinput.o: jerror.h
jdmainct.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdmainct.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdmainct.o: /usr/include/sys/_symbol_aliasing.h
jdmainct.o: /usr/include/sys/_posix_availability.h
jdmainct.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdmainct.o: /usr/include/sys/_types/_ptrdiff_t.h
jdmainct.o: /usr/include/sys/_types/_size_t.h
jdmainct.o: /usr/include/sys/_types/_rsize_t.h
jdmainct.o: /usr/include/sys/_types/_wchar_t.h
jdmainct.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdmainct.o: /usr/include/stdlib.h /usr/include/Availability.h
jdmainct.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdmainct.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdmainct.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdmainct.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdmainct.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdmainct.o: /usr/include/mach/i386/_structs.h
jdmainct.o: /usr/include/sys/_types/_sigaltstack.h
jdmainct.o: /usr/include/sys/_types/_ucontext.h
jdmainct.o: /usr/include/sys/_types/_pthread_attr_t.h
jdmainct.o: /usr/include/sys/_types/_sigset_t.h
jdmainct.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdmainct.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdmainct.o: /usr/include/sys/_types/_int16_t.h
jdmainct.o: /usr/include/sys/_types/_int32_t.h
jdmainct.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdmainct.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdmainct.o: /usr/include/_types/_uint64_t.h
jdmainct.o: /usr/include/sys/_types/_intptr_t.h
jdmainct.o: /usr/include/sys/_types/_uintptr_t.h
jdmainct.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdmainct.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdmainct.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdmainct.o: /usr/include/libkern/_OSByteOrder.h
jdmainct.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdmainct.o: /usr/include/sys/_types/_ct_rune_t.h
jdmainct.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdmainct.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdmainct.o: /usr/include/sys/_types/_dev_t.h
jdmainct.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jdmainct.o: /usr/include/sys/_types/_va_list.h
jdmainct.o: /usr/include/sys/_types/_off_t.h
jdmainct.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdmainct.o: /usr/include/secure/_common.h /usr/include/string.h
jdmainct.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdmainct.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdmainct.o: jerror.h
jdmarker.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdmarker.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdmarker.o: /usr/include/sys/_symbol_aliasing.h
jdmarker.o: /usr/include/sys/_posix_availability.h
jdmarker.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdmarker.o: /usr/include/sys/_types/_ptrdiff_t.h
jdmarker.o: /usr/include/sys/_types/_size_t.h
jdmarker.o: /usr/include/sys/_types/_rsize_t.h
jdmarker.o: /usr/include/sys/_types/_wchar_t.h
jdmarker.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdmarker.o: /usr/include/stdlib.h /usr/include/Availability.h
jdmarker.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdmarker.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdmarker.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdmarker.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdmarker.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdmarker.o: /usr/include/mach/i386/_structs.h
jdmarker.o: /usr/include/sys/_types/_sigaltstack.h
jdmarker.o: /usr/include/sys/_types/_ucontext.h
jdmarker.o: /usr/include/sys/_types/_pthread_attr_t.h
jdmarker.o: /usr/include/sys/_types/_sigset_t.h
jdmarker.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdmarker.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdmarker.o: /usr/include/sys/_types/_int16_t.h
jdmarker.o: /usr/include/sys/_types/_int32_t.h
jdmarker.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdmarker.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdmarker.o: /usr/include/_types/_uint64_t.h
jdmarker.o: /usr/include/sys/_types/_intptr_t.h
jdmarker.o: /usr/include/sys/_types/_uintptr_t.h
jdmarker.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdmarker.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdmarker.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdmarker.o: /usr/include/libkern/_OSByteOrder.h
jdmarker.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdmarker.o: /usr/include/sys/_types/_ct_rune_t.h
jdmarker.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdmarker.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdmarker.o: /usr/include/sys/_types/_dev_t.h
jdmarker.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jdmarker.o: /usr/include/sys/_types/_va_list.h
jdmarker.o: /usr/include/sys/_types/_off_t.h
jdmarker.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdmarker.o: /usr/include/secure/_common.h /usr/include/string.h
jdmarker.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdmarker.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdmarker.o: jerror.h
jdmaster.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdmaster.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdmaster.o: /usr/include/sys/_symbol_aliasing.h
jdmaster.o: /usr/include/sys/_posix_availability.h
jdmaster.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdmaster.o: /usr/include/sys/_types/_ptrdiff_t.h
jdmaster.o: /usr/include/sys/_types/_size_t.h
jdmaster.o: /usr/include/sys/_types/_rsize_t.h
jdmaster.o: /usr/include/sys/_types/_wchar_t.h
jdmaster.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdmaster.o: /usr/include/stdlib.h /usr/include/Availability.h
jdmaster.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdmaster.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdmaster.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdmaster.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdmaster.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdmaster.o: /usr/include/mach/i386/_structs.h
jdmaster.o: /usr/include/sys/_types/_sigaltstack.h
jdmaster.o: /usr/include/sys/_types/_ucontext.h
jdmaster.o: /usr/include/sys/_types/_pthread_attr_t.h
jdmaster.o: /usr/include/sys/_types/_sigset_t.h
jdmaster.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdmaster.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdmaster.o: /usr/include/sys/_types/_int16_t.h
jdmaster.o: /usr/include/sys/_types/_int32_t.h
jdmaster.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdmaster.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdmaster.o: /usr/include/_types/_uint64_t.h
jdmaster.o: /usr/include/sys/_types/_intptr_t.h
jdmaster.o: /usr/include/sys/_types/_uintptr_t.h
jdmaster.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdmaster.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdmaster.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdmaster.o: /usr/include/libkern/_OSByteOrder.h
jdmaster.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdmaster.o: /usr/include/sys/_types/_ct_rune_t.h
jdmaster.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdmaster.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdmaster.o: /usr/include/sys/_types/_dev_t.h
jdmaster.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jdmaster.o: /usr/include/sys/_types/_va_list.h
jdmaster.o: /usr/include/sys/_types/_off_t.h
jdmaster.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdmaster.o: /usr/include/secure/_common.h /usr/include/string.h
jdmaster.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdmaster.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdmaster.o: jerror.h
jdmerge.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdmerge.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdmerge.o: /usr/include/sys/_symbol_aliasing.h
jdmerge.o: /usr/include/sys/_posix_availability.h
jdmerge.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdmerge.o: /usr/include/sys/_types/_ptrdiff_t.h
jdmerge.o: /usr/include/sys/_types/_size_t.h
jdmerge.o: /usr/include/sys/_types/_rsize_t.h
jdmerge.o: /usr/include/sys/_types/_wchar_t.h
jdmerge.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdmerge.o: /usr/include/stdlib.h /usr/include/Availability.h
jdmerge.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdmerge.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdmerge.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdmerge.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdmerge.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdmerge.o: /usr/include/mach/i386/_structs.h
jdmerge.o: /usr/include/sys/_types/_sigaltstack.h
jdmerge.o: /usr/include/sys/_types/_ucontext.h
jdmerge.o: /usr/include/sys/_types/_pthread_attr_t.h
jdmerge.o: /usr/include/sys/_types/_sigset_t.h
jdmerge.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdmerge.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdmerge.o: /usr/include/sys/_types/_int16_t.h
jdmerge.o: /usr/include/sys/_types/_int32_t.h
jdmerge.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdmerge.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdmerge.o: /usr/include/_types/_uint64_t.h
jdmerge.o: /usr/include/sys/_types/_intptr_t.h
jdmerge.o: /usr/include/sys/_types/_uintptr_t.h
jdmerge.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdmerge.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdmerge.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdmerge.o: /usr/include/libkern/_OSByteOrder.h
jdmerge.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdmerge.o: /usr/include/sys/_types/_ct_rune_t.h
jdmerge.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdmerge.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdmerge.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jdmerge.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jdmerge.o: /usr/include/sys/_types/_off_t.h
jdmerge.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdmerge.o: /usr/include/secure/_common.h /usr/include/string.h
jdmerge.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdmerge.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdmerge.o: jerror.h
jdphuff.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdphuff.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdphuff.o: /usr/include/sys/_symbol_aliasing.h
jdphuff.o: /usr/include/sys/_posix_availability.h
jdphuff.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdphuff.o: /usr/include/sys/_types/_ptrdiff_t.h
jdphuff.o: /usr/include/sys/_types/_size_t.h
jdphuff.o: /usr/include/sys/_types/_rsize_t.h
jdphuff.o: /usr/include/sys/_types/_wchar_t.h
jdphuff.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdphuff.o: /usr/include/stdlib.h /usr/include/Availability.h
jdphuff.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdphuff.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdphuff.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdphuff.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdphuff.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdphuff.o: /usr/include/mach/i386/_structs.h
jdphuff.o: /usr/include/sys/_types/_sigaltstack.h
jdphuff.o: /usr/include/sys/_types/_ucontext.h
jdphuff.o: /usr/include/sys/_types/_pthread_attr_t.h
jdphuff.o: /usr/include/sys/_types/_sigset_t.h
jdphuff.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdphuff.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdphuff.o: /usr/include/sys/_types/_int16_t.h
jdphuff.o: /usr/include/sys/_types/_int32_t.h
jdphuff.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdphuff.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdphuff.o: /usr/include/_types/_uint64_t.h
jdphuff.o: /usr/include/sys/_types/_intptr_t.h
jdphuff.o: /usr/include/sys/_types/_uintptr_t.h
jdphuff.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdphuff.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdphuff.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdphuff.o: /usr/include/libkern/_OSByteOrder.h
jdphuff.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdphuff.o: /usr/include/sys/_types/_ct_rune_t.h
jdphuff.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdphuff.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdphuff.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jdphuff.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jdphuff.o: /usr/include/sys/_types/_off_t.h
jdphuff.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdphuff.o: /usr/include/secure/_common.h /usr/include/string.h
jdphuff.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdphuff.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdphuff.o: jerror.h jdhuff.h
jdpostct.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdpostct.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdpostct.o: /usr/include/sys/_symbol_aliasing.h
jdpostct.o: /usr/include/sys/_posix_availability.h
jdpostct.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdpostct.o: /usr/include/sys/_types/_ptrdiff_t.h
jdpostct.o: /usr/include/sys/_types/_size_t.h
jdpostct.o: /usr/include/sys/_types/_rsize_t.h
jdpostct.o: /usr/include/sys/_types/_wchar_t.h
jdpostct.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdpostct.o: /usr/include/stdlib.h /usr/include/Availability.h
jdpostct.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdpostct.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdpostct.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdpostct.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdpostct.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdpostct.o: /usr/include/mach/i386/_structs.h
jdpostct.o: /usr/include/sys/_types/_sigaltstack.h
jdpostct.o: /usr/include/sys/_types/_ucontext.h
jdpostct.o: /usr/include/sys/_types/_pthread_attr_t.h
jdpostct.o: /usr/include/sys/_types/_sigset_t.h
jdpostct.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdpostct.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdpostct.o: /usr/include/sys/_types/_int16_t.h
jdpostct.o: /usr/include/sys/_types/_int32_t.h
jdpostct.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdpostct.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdpostct.o: /usr/include/_types/_uint64_t.h
jdpostct.o: /usr/include/sys/_types/_intptr_t.h
jdpostct.o: /usr/include/sys/_types/_uintptr_t.h
jdpostct.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdpostct.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdpostct.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdpostct.o: /usr/include/libkern/_OSByteOrder.h
jdpostct.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdpostct.o: /usr/include/sys/_types/_ct_rune_t.h
jdpostct.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdpostct.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdpostct.o: /usr/include/sys/_types/_dev_t.h
jdpostct.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jdpostct.o: /usr/include/sys/_types/_va_list.h
jdpostct.o: /usr/include/sys/_types/_off_t.h
jdpostct.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdpostct.o: /usr/include/secure/_common.h /usr/include/string.h
jdpostct.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdpostct.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdpostct.o: jerror.h
jdsample.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdsample.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdsample.o: /usr/include/sys/_symbol_aliasing.h
jdsample.o: /usr/include/sys/_posix_availability.h
jdsample.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdsample.o: /usr/include/sys/_types/_ptrdiff_t.h
jdsample.o: /usr/include/sys/_types/_size_t.h
jdsample.o: /usr/include/sys/_types/_rsize_t.h
jdsample.o: /usr/include/sys/_types/_wchar_t.h
jdsample.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdsample.o: /usr/include/stdlib.h /usr/include/Availability.h
jdsample.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdsample.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdsample.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdsample.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdsample.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdsample.o: /usr/include/mach/i386/_structs.h
jdsample.o: /usr/include/sys/_types/_sigaltstack.h
jdsample.o: /usr/include/sys/_types/_ucontext.h
jdsample.o: /usr/include/sys/_types/_pthread_attr_t.h
jdsample.o: /usr/include/sys/_types/_sigset_t.h
jdsample.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdsample.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdsample.o: /usr/include/sys/_types/_int16_t.h
jdsample.o: /usr/include/sys/_types/_int32_t.h
jdsample.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdsample.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdsample.o: /usr/include/_types/_uint64_t.h
jdsample.o: /usr/include/sys/_types/_intptr_t.h
jdsample.o: /usr/include/sys/_types/_uintptr_t.h
jdsample.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdsample.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdsample.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdsample.o: /usr/include/libkern/_OSByteOrder.h
jdsample.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdsample.o: /usr/include/sys/_types/_ct_rune_t.h
jdsample.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdsample.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdsample.o: /usr/include/sys/_types/_dev_t.h
jdsample.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jdsample.o: /usr/include/sys/_types/_va_list.h
jdsample.o: /usr/include/sys/_types/_off_t.h
jdsample.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdsample.o: /usr/include/secure/_common.h /usr/include/string.h
jdsample.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdsample.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdsample.o: jerror.h
jdtrans.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jdtrans.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jdtrans.o: /usr/include/sys/_symbol_aliasing.h
jdtrans.o: /usr/include/sys/_posix_availability.h
jdtrans.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jdtrans.o: /usr/include/sys/_types/_ptrdiff_t.h
jdtrans.o: /usr/include/sys/_types/_size_t.h
jdtrans.o: /usr/include/sys/_types/_rsize_t.h
jdtrans.o: /usr/include/sys/_types/_wchar_t.h
jdtrans.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jdtrans.o: /usr/include/stdlib.h /usr/include/Availability.h
jdtrans.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jdtrans.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jdtrans.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jdtrans.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jdtrans.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jdtrans.o: /usr/include/mach/i386/_structs.h
jdtrans.o: /usr/include/sys/_types/_sigaltstack.h
jdtrans.o: /usr/include/sys/_types/_ucontext.h
jdtrans.o: /usr/include/sys/_types/_pthread_attr_t.h
jdtrans.o: /usr/include/sys/_types/_sigset_t.h
jdtrans.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jdtrans.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jdtrans.o: /usr/include/sys/_types/_int16_t.h
jdtrans.o: /usr/include/sys/_types/_int32_t.h
jdtrans.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jdtrans.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jdtrans.o: /usr/include/_types/_uint64_t.h
jdtrans.o: /usr/include/sys/_types/_intptr_t.h
jdtrans.o: /usr/include/sys/_types/_uintptr_t.h
jdtrans.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jdtrans.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jdtrans.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jdtrans.o: /usr/include/libkern/_OSByteOrder.h
jdtrans.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jdtrans.o: /usr/include/sys/_types/_ct_rune_t.h
jdtrans.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jdtrans.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jdtrans.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jdtrans.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jdtrans.o: /usr/include/sys/_types/_off_t.h
jdtrans.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jdtrans.o: /usr/include/secure/_common.h /usr/include/string.h
jdtrans.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jdtrans.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jdtrans.o: jerror.h
jerror.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jerror.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jerror.o: /usr/include/sys/_symbol_aliasing.h
jerror.o: /usr/include/sys/_posix_availability.h
jerror.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jerror.o: /usr/include/sys/_types/_ptrdiff_t.h
jerror.o: /usr/include/sys/_types/_size_t.h
jerror.o: /usr/include/sys/_types/_rsize_t.h
jerror.o: /usr/include/sys/_types/_wchar_t.h
jerror.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jerror.o: /usr/include/stdlib.h /usr/include/Availability.h
jerror.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jerror.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jerror.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jerror.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jerror.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jerror.o: /usr/include/mach/i386/_structs.h
jerror.o: /usr/include/sys/_types/_sigaltstack.h
jerror.o: /usr/include/sys/_types/_ucontext.h
jerror.o: /usr/include/sys/_types/_pthread_attr_t.h
jerror.o: /usr/include/sys/_types/_sigset_t.h
jerror.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jerror.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jerror.o: /usr/include/sys/_types/_int16_t.h
jerror.o: /usr/include/sys/_types/_int32_t.h
jerror.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jerror.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jerror.o: /usr/include/_types/_uint64_t.h /usr/include/sys/_types/_intptr_t.h
jerror.o: /usr/include/sys/_types/_uintptr_t.h
jerror.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jerror.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jerror.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jerror.o: /usr/include/libkern/_OSByteOrder.h
jerror.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jerror.o: /usr/include/sys/_types/_ct_rune_t.h
jerror.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jerror.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jerror.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jerror.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jerror.o: /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_ssize_t.h
jerror.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
jerror.o: /usr/include/string.h /usr/include/sys/_types/_errno_t.h
jerror.o: /usr/include/strings.h /usr/include/secure/_string.h jpeglib.h
jerror.o: jmorecfg.h jpegint.h jerror.h jversion.h
jfdctflt.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jfdctflt.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jfdctflt.o: /usr/include/sys/_symbol_aliasing.h
jfdctflt.o: /usr/include/sys/_posix_availability.h
jfdctflt.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jfdctflt.o: /usr/include/sys/_types/_ptrdiff_t.h
jfdctflt.o: /usr/include/sys/_types/_size_t.h
jfdctflt.o: /usr/include/sys/_types/_rsize_t.h
jfdctflt.o: /usr/include/sys/_types/_wchar_t.h
jfdctflt.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jfdctflt.o: /usr/include/stdlib.h /usr/include/Availability.h
jfdctflt.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jfdctflt.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jfdctflt.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jfdctflt.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jfdctflt.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jfdctflt.o: /usr/include/mach/i386/_structs.h
jfdctflt.o: /usr/include/sys/_types/_sigaltstack.h
jfdctflt.o: /usr/include/sys/_types/_ucontext.h
jfdctflt.o: /usr/include/sys/_types/_pthread_attr_t.h
jfdctflt.o: /usr/include/sys/_types/_sigset_t.h
jfdctflt.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jfdctflt.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jfdctflt.o: /usr/include/sys/_types/_int16_t.h
jfdctflt.o: /usr/include/sys/_types/_int32_t.h
jfdctflt.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jfdctflt.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jfdctflt.o: /usr/include/_types/_uint64_t.h
jfdctflt.o: /usr/include/sys/_types/_intptr_t.h
jfdctflt.o: /usr/include/sys/_types/_uintptr_t.h
jfdctflt.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jfdctflt.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jfdctflt.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jfdctflt.o: /usr/include/libkern/_OSByteOrder.h
jfdctflt.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jfdctflt.o: /usr/include/sys/_types/_ct_rune_t.h
jfdctflt.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jfdctflt.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jfdctflt.o: /usr/include/sys/_types/_dev_t.h
jfdctflt.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jfdctflt.o: /usr/include/sys/_types/_va_list.h
jfdctflt.o: /usr/include/sys/_types/_off_t.h
jfdctflt.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jfdctflt.o: /usr/include/secure/_common.h /usr/include/string.h
jfdctflt.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jfdctflt.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jfdctflt.o: jerror.h jdct.h
jfdctfst.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jfdctfst.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jfdctfst.o: /usr/include/sys/_symbol_aliasing.h
jfdctfst.o: /usr/include/sys/_posix_availability.h
jfdctfst.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jfdctfst.o: /usr/include/sys/_types/_ptrdiff_t.h
jfdctfst.o: /usr/include/sys/_types/_size_t.h
jfdctfst.o: /usr/include/sys/_types/_rsize_t.h
jfdctfst.o: /usr/include/sys/_types/_wchar_t.h
jfdctfst.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jfdctfst.o: /usr/include/stdlib.h /usr/include/Availability.h
jfdctfst.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jfdctfst.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jfdctfst.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jfdctfst.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jfdctfst.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jfdctfst.o: /usr/include/mach/i386/_structs.h
jfdctfst.o: /usr/include/sys/_types/_sigaltstack.h
jfdctfst.o: /usr/include/sys/_types/_ucontext.h
jfdctfst.o: /usr/include/sys/_types/_pthread_attr_t.h
jfdctfst.o: /usr/include/sys/_types/_sigset_t.h
jfdctfst.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jfdctfst.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jfdctfst.o: /usr/include/sys/_types/_int16_t.h
jfdctfst.o: /usr/include/sys/_types/_int32_t.h
jfdctfst.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jfdctfst.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jfdctfst.o: /usr/include/_types/_uint64_t.h
jfdctfst.o: /usr/include/sys/_types/_intptr_t.h
jfdctfst.o: /usr/include/sys/_types/_uintptr_t.h
jfdctfst.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jfdctfst.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jfdctfst.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jfdctfst.o: /usr/include/libkern/_OSByteOrder.h
jfdctfst.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jfdctfst.o: /usr/include/sys/_types/_ct_rune_t.h
jfdctfst.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jfdctfst.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jfdctfst.o: /usr/include/sys/_types/_dev_t.h
jfdctfst.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jfdctfst.o: /usr/include/sys/_types/_va_list.h
jfdctfst.o: /usr/include/sys/_types/_off_t.h
jfdctfst.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jfdctfst.o: /usr/include/secure/_common.h /usr/include/string.h
jfdctfst.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jfdctfst.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jfdctfst.o: jerror.h jdct.h
jfdctint.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jfdctint.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jfdctint.o: /usr/include/sys/_symbol_aliasing.h
jfdctint.o: /usr/include/sys/_posix_availability.h
jfdctint.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jfdctint.o: /usr/include/sys/_types/_ptrdiff_t.h
jfdctint.o: /usr/include/sys/_types/_size_t.h
jfdctint.o: /usr/include/sys/_types/_rsize_t.h
jfdctint.o: /usr/include/sys/_types/_wchar_t.h
jfdctint.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jfdctint.o: /usr/include/stdlib.h /usr/include/Availability.h
jfdctint.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jfdctint.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jfdctint.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jfdctint.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jfdctint.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jfdctint.o: /usr/include/mach/i386/_structs.h
jfdctint.o: /usr/include/sys/_types/_sigaltstack.h
jfdctint.o: /usr/include/sys/_types/_ucontext.h
jfdctint.o: /usr/include/sys/_types/_pthread_attr_t.h
jfdctint.o: /usr/include/sys/_types/_sigset_t.h
jfdctint.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jfdctint.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jfdctint.o: /usr/include/sys/_types/_int16_t.h
jfdctint.o: /usr/include/sys/_types/_int32_t.h
jfdctint.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jfdctint.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jfdctint.o: /usr/include/_types/_uint64_t.h
jfdctint.o: /usr/include/sys/_types/_intptr_t.h
jfdctint.o: /usr/include/sys/_types/_uintptr_t.h
jfdctint.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jfdctint.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jfdctint.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jfdctint.o: /usr/include/libkern/_OSByteOrder.h
jfdctint.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jfdctint.o: /usr/include/sys/_types/_ct_rune_t.h
jfdctint.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jfdctint.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jfdctint.o: /usr/include/sys/_types/_dev_t.h
jfdctint.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jfdctint.o: /usr/include/sys/_types/_va_list.h
jfdctint.o: /usr/include/sys/_types/_off_t.h
jfdctint.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jfdctint.o: /usr/include/secure/_common.h /usr/include/string.h
jfdctint.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jfdctint.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jfdctint.o: jerror.h jdct.h
jidctflt.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jidctflt.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jidctflt.o: /usr/include/sys/_symbol_aliasing.h
jidctflt.o: /usr/include/sys/_posix_availability.h
jidctflt.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jidctflt.o: /usr/include/sys/_types/_ptrdiff_t.h
jidctflt.o: /usr/include/sys/_types/_size_t.h
jidctflt.o: /usr/include/sys/_types/_rsize_t.h
jidctflt.o: /usr/include/sys/_types/_wchar_t.h
jidctflt.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jidctflt.o: /usr/include/stdlib.h /usr/include/Availability.h
jidctflt.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jidctflt.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jidctflt.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jidctflt.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jidctflt.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jidctflt.o: /usr/include/mach/i386/_structs.h
jidctflt.o: /usr/include/sys/_types/_sigaltstack.h
jidctflt.o: /usr/include/sys/_types/_ucontext.h
jidctflt.o: /usr/include/sys/_types/_pthread_attr_t.h
jidctflt.o: /usr/include/sys/_types/_sigset_t.h
jidctflt.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jidctflt.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jidctflt.o: /usr/include/sys/_types/_int16_t.h
jidctflt.o: /usr/include/sys/_types/_int32_t.h
jidctflt.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jidctflt.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jidctflt.o: /usr/include/_types/_uint64_t.h
jidctflt.o: /usr/include/sys/_types/_intptr_t.h
jidctflt.o: /usr/include/sys/_types/_uintptr_t.h
jidctflt.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jidctflt.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jidctflt.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jidctflt.o: /usr/include/libkern/_OSByteOrder.h
jidctflt.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jidctflt.o: /usr/include/sys/_types/_ct_rune_t.h
jidctflt.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jidctflt.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jidctflt.o: /usr/include/sys/_types/_dev_t.h
jidctflt.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jidctflt.o: /usr/include/sys/_types/_va_list.h
jidctflt.o: /usr/include/sys/_types/_off_t.h
jidctflt.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jidctflt.o: /usr/include/secure/_common.h /usr/include/string.h
jidctflt.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jidctflt.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jidctflt.o: jerror.h jdct.h
jidctfst.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jidctfst.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jidctfst.o: /usr/include/sys/_symbol_aliasing.h
jidctfst.o: /usr/include/sys/_posix_availability.h
jidctfst.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jidctfst.o: /usr/include/sys/_types/_ptrdiff_t.h
jidctfst.o: /usr/include/sys/_types/_size_t.h
jidctfst.o: /usr/include/sys/_types/_rsize_t.h
jidctfst.o: /usr/include/sys/_types/_wchar_t.h
jidctfst.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jidctfst.o: /usr/include/stdlib.h /usr/include/Availability.h
jidctfst.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jidctfst.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jidctfst.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jidctfst.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jidctfst.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jidctfst.o: /usr/include/mach/i386/_structs.h
jidctfst.o: /usr/include/sys/_types/_sigaltstack.h
jidctfst.o: /usr/include/sys/_types/_ucontext.h
jidctfst.o: /usr/include/sys/_types/_pthread_attr_t.h
jidctfst.o: /usr/include/sys/_types/_sigset_t.h
jidctfst.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jidctfst.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jidctfst.o: /usr/include/sys/_types/_int16_t.h
jidctfst.o: /usr/include/sys/_types/_int32_t.h
jidctfst.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jidctfst.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jidctfst.o: /usr/include/_types/_uint64_t.h
jidctfst.o: /usr/include/sys/_types/_intptr_t.h
jidctfst.o: /usr/include/sys/_types/_uintptr_t.h
jidctfst.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jidctfst.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jidctfst.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jidctfst.o: /usr/include/libkern/_OSByteOrder.h
jidctfst.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jidctfst.o: /usr/include/sys/_types/_ct_rune_t.h
jidctfst.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jidctfst.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jidctfst.o: /usr/include/sys/_types/_dev_t.h
jidctfst.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jidctfst.o: /usr/include/sys/_types/_va_list.h
jidctfst.o: /usr/include/sys/_types/_off_t.h
jidctfst.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jidctfst.o: /usr/include/secure/_common.h /usr/include/string.h
jidctfst.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jidctfst.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jidctfst.o: jerror.h jdct.h
jidctint.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jidctint.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jidctint.o: /usr/include/sys/_symbol_aliasing.h
jidctint.o: /usr/include/sys/_posix_availability.h
jidctint.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jidctint.o: /usr/include/sys/_types/_ptrdiff_t.h
jidctint.o: /usr/include/sys/_types/_size_t.h
jidctint.o: /usr/include/sys/_types/_rsize_t.h
jidctint.o: /usr/include/sys/_types/_wchar_t.h
jidctint.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jidctint.o: /usr/include/stdlib.h /usr/include/Availability.h
jidctint.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jidctint.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jidctint.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jidctint.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jidctint.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jidctint.o: /usr/include/mach/i386/_structs.h
jidctint.o: /usr/include/sys/_types/_sigaltstack.h
jidctint.o: /usr/include/sys/_types/_ucontext.h
jidctint.o: /usr/include/sys/_types/_pthread_attr_t.h
jidctint.o: /usr/include/sys/_types/_sigset_t.h
jidctint.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jidctint.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jidctint.o: /usr/include/sys/_types/_int16_t.h
jidctint.o: /usr/include/sys/_types/_int32_t.h
jidctint.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jidctint.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jidctint.o: /usr/include/_types/_uint64_t.h
jidctint.o: /usr/include/sys/_types/_intptr_t.h
jidctint.o: /usr/include/sys/_types/_uintptr_t.h
jidctint.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jidctint.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jidctint.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jidctint.o: /usr/include/libkern/_OSByteOrder.h
jidctint.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jidctint.o: /usr/include/sys/_types/_ct_rune_t.h
jidctint.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jidctint.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jidctint.o: /usr/include/sys/_types/_dev_t.h
jidctint.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jidctint.o: /usr/include/sys/_types/_va_list.h
jidctint.o: /usr/include/sys/_types/_off_t.h
jidctint.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jidctint.o: /usr/include/secure/_common.h /usr/include/string.h
jidctint.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jidctint.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jidctint.o: jerror.h jdct.h
jidctred.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jidctred.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jidctred.o: /usr/include/sys/_symbol_aliasing.h
jidctred.o: /usr/include/sys/_posix_availability.h
jidctred.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jidctred.o: /usr/include/sys/_types/_ptrdiff_t.h
jidctred.o: /usr/include/sys/_types/_size_t.h
jidctred.o: /usr/include/sys/_types/_rsize_t.h
jidctred.o: /usr/include/sys/_types/_wchar_t.h
jidctred.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jidctred.o: /usr/include/stdlib.h /usr/include/Availability.h
jidctred.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jidctred.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jidctred.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jidctred.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jidctred.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jidctred.o: /usr/include/mach/i386/_structs.h
jidctred.o: /usr/include/sys/_types/_sigaltstack.h
jidctred.o: /usr/include/sys/_types/_ucontext.h
jidctred.o: /usr/include/sys/_types/_pthread_attr_t.h
jidctred.o: /usr/include/sys/_types/_sigset_t.h
jidctred.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jidctred.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jidctred.o: /usr/include/sys/_types/_int16_t.h
jidctred.o: /usr/include/sys/_types/_int32_t.h
jidctred.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jidctred.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jidctred.o: /usr/include/_types/_uint64_t.h
jidctred.o: /usr/include/sys/_types/_intptr_t.h
jidctred.o: /usr/include/sys/_types/_uintptr_t.h
jidctred.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jidctred.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jidctred.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jidctred.o: /usr/include/libkern/_OSByteOrder.h
jidctred.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jidctred.o: /usr/include/sys/_types/_ct_rune_t.h
jidctred.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jidctred.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jidctred.o: /usr/include/sys/_types/_dev_t.h
jidctred.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jidctred.o: /usr/include/sys/_types/_va_list.h
jidctred.o: /usr/include/sys/_types/_off_t.h
jidctred.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jidctred.o: /usr/include/secure/_common.h /usr/include/string.h
jidctred.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jidctred.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jidctred.o: jerror.h jdct.h
jmemmgr.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jmemmgr.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jmemmgr.o: /usr/include/sys/_symbol_aliasing.h
jmemmgr.o: /usr/include/sys/_posix_availability.h
jmemmgr.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jmemmgr.o: /usr/include/sys/_types/_ptrdiff_t.h
jmemmgr.o: /usr/include/sys/_types/_size_t.h
jmemmgr.o: /usr/include/sys/_types/_rsize_t.h
jmemmgr.o: /usr/include/sys/_types/_wchar_t.h
jmemmgr.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jmemmgr.o: /usr/include/stdlib.h /usr/include/Availability.h
jmemmgr.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jmemmgr.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jmemmgr.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jmemmgr.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jmemmgr.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jmemmgr.o: /usr/include/mach/i386/_structs.h
jmemmgr.o: /usr/include/sys/_types/_sigaltstack.h
jmemmgr.o: /usr/include/sys/_types/_ucontext.h
jmemmgr.o: /usr/include/sys/_types/_pthread_attr_t.h
jmemmgr.o: /usr/include/sys/_types/_sigset_t.h
jmemmgr.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jmemmgr.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jmemmgr.o: /usr/include/sys/_types/_int16_t.h
jmemmgr.o: /usr/include/sys/_types/_int32_t.h
jmemmgr.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jmemmgr.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jmemmgr.o: /usr/include/_types/_uint64_t.h
jmemmgr.o: /usr/include/sys/_types/_intptr_t.h
jmemmgr.o: /usr/include/sys/_types/_uintptr_t.h
jmemmgr.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jmemmgr.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jmemmgr.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jmemmgr.o: /usr/include/libkern/_OSByteOrder.h
jmemmgr.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jmemmgr.o: /usr/include/sys/_types/_ct_rune_t.h
jmemmgr.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jmemmgr.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jmemmgr.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jmemmgr.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jmemmgr.o: /usr/include/sys/_types/_off_t.h
jmemmgr.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jmemmgr.o: /usr/include/secure/_common.h /usr/include/string.h
jmemmgr.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jmemmgr.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jmemmgr.o: jerror.h jmemsys.h
jmemnobs.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jmemnobs.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jmemnobs.o: /usr/include/sys/_symbol_aliasing.h
jmemnobs.o: /usr/include/sys/_posix_availability.h
jmemnobs.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jmemnobs.o: /usr/include/sys/_types/_ptrdiff_t.h
jmemnobs.o: /usr/include/sys/_types/_size_t.h
jmemnobs.o: /usr/include/sys/_types/_rsize_t.h
jmemnobs.o: /usr/include/sys/_types/_wchar_t.h
jmemnobs.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jmemnobs.o: /usr/include/stdlib.h /usr/include/Availability.h
jmemnobs.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jmemnobs.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jmemnobs.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jmemnobs.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jmemnobs.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jmemnobs.o: /usr/include/mach/i386/_structs.h
jmemnobs.o: /usr/include/sys/_types/_sigaltstack.h
jmemnobs.o: /usr/include/sys/_types/_ucontext.h
jmemnobs.o: /usr/include/sys/_types/_pthread_attr_t.h
jmemnobs.o: /usr/include/sys/_types/_sigset_t.h
jmemnobs.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jmemnobs.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jmemnobs.o: /usr/include/sys/_types/_int16_t.h
jmemnobs.o: /usr/include/sys/_types/_int32_t.h
jmemnobs.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jmemnobs.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jmemnobs.o: /usr/include/_types/_uint64_t.h
jmemnobs.o: /usr/include/sys/_types/_intptr_t.h
jmemnobs.o: /usr/include/sys/_types/_uintptr_t.h
jmemnobs.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jmemnobs.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jmemnobs.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jmemnobs.o: /usr/include/libkern/_OSByteOrder.h
jmemnobs.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jmemnobs.o: /usr/include/sys/_types/_ct_rune_t.h
jmemnobs.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jmemnobs.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jmemnobs.o: /usr/include/sys/_types/_dev_t.h
jmemnobs.o: /usr/include/sys/_types/_mode_t.h /usr/include/stdio.h
jmemnobs.o: /usr/include/sys/_types/_va_list.h
jmemnobs.o: /usr/include/sys/_types/_off_t.h
jmemnobs.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jmemnobs.o: /usr/include/secure/_common.h /usr/include/string.h
jmemnobs.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jmemnobs.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jmemnobs.o: jerror.h jmemsys.h
jquant1.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jquant1.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jquant1.o: /usr/include/sys/_symbol_aliasing.h
jquant1.o: /usr/include/sys/_posix_availability.h
jquant1.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jquant1.o: /usr/include/sys/_types/_ptrdiff_t.h
jquant1.o: /usr/include/sys/_types/_size_t.h
jquant1.o: /usr/include/sys/_types/_rsize_t.h
jquant1.o: /usr/include/sys/_types/_wchar_t.h
jquant1.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jquant1.o: /usr/include/stdlib.h /usr/include/Availability.h
jquant1.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jquant1.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jquant1.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jquant1.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jquant1.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jquant1.o: /usr/include/mach/i386/_structs.h
jquant1.o: /usr/include/sys/_types/_sigaltstack.h
jquant1.o: /usr/include/sys/_types/_ucontext.h
jquant1.o: /usr/include/sys/_types/_pthread_attr_t.h
jquant1.o: /usr/include/sys/_types/_sigset_t.h
jquant1.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jquant1.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jquant1.o: /usr/include/sys/_types/_int16_t.h
jquant1.o: /usr/include/sys/_types/_int32_t.h
jquant1.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jquant1.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jquant1.o: /usr/include/_types/_uint64_t.h
jquant1.o: /usr/include/sys/_types/_intptr_t.h
jquant1.o: /usr/include/sys/_types/_uintptr_t.h
jquant1.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jquant1.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jquant1.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jquant1.o: /usr/include/libkern/_OSByteOrder.h
jquant1.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jquant1.o: /usr/include/sys/_types/_ct_rune_t.h
jquant1.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jquant1.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jquant1.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jquant1.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jquant1.o: /usr/include/sys/_types/_off_t.h
jquant1.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jquant1.o: /usr/include/secure/_common.h /usr/include/string.h
jquant1.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jquant1.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jquant1.o: jerror.h
jquant2.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jquant2.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jquant2.o: /usr/include/sys/_symbol_aliasing.h
jquant2.o: /usr/include/sys/_posix_availability.h
jquant2.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jquant2.o: /usr/include/sys/_types/_ptrdiff_t.h
jquant2.o: /usr/include/sys/_types/_size_t.h
jquant2.o: /usr/include/sys/_types/_rsize_t.h
jquant2.o: /usr/include/sys/_types/_wchar_t.h
jquant2.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jquant2.o: /usr/include/stdlib.h /usr/include/Availability.h
jquant2.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jquant2.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jquant2.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jquant2.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jquant2.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jquant2.o: /usr/include/mach/i386/_structs.h
jquant2.o: /usr/include/sys/_types/_sigaltstack.h
jquant2.o: /usr/include/sys/_types/_ucontext.h
jquant2.o: /usr/include/sys/_types/_pthread_attr_t.h
jquant2.o: /usr/include/sys/_types/_sigset_t.h
jquant2.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jquant2.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jquant2.o: /usr/include/sys/_types/_int16_t.h
jquant2.o: /usr/include/sys/_types/_int32_t.h
jquant2.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jquant2.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jquant2.o: /usr/include/_types/_uint64_t.h
jquant2.o: /usr/include/sys/_types/_intptr_t.h
jquant2.o: /usr/include/sys/_types/_uintptr_t.h
jquant2.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jquant2.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jquant2.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jquant2.o: /usr/include/libkern/_OSByteOrder.h
jquant2.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jquant2.o: /usr/include/sys/_types/_ct_rune_t.h
jquant2.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jquant2.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jquant2.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jquant2.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jquant2.o: /usr/include/sys/_types/_off_t.h
jquant2.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
jquant2.o: /usr/include/secure/_common.h /usr/include/string.h
jquant2.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
jquant2.o: /usr/include/secure/_string.h jpeglib.h jmorecfg.h jpegint.h
jquant2.o: jerror.h
jutils.o: jinclude.h jconfig.h /usr/include/stddef.h /usr/include/_types.h
jutils.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
jutils.o: /usr/include/sys/_symbol_aliasing.h
jutils.o: /usr/include/sys/_posix_availability.h
jutils.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
jutils.o: /usr/include/sys/_types/_ptrdiff_t.h
jutils.o: /usr/include/sys/_types/_size_t.h
jutils.o: /usr/include/sys/_types/_rsize_t.h
jutils.o: /usr/include/sys/_types/_wchar_t.h
jutils.o: /usr/include/sys/_types/_wint_t.h /usr/include/sys/_types/_null.h
jutils.o: /usr/include/stdlib.h /usr/include/Availability.h
jutils.o: /usr/include/AvailabilityInternal.h /usr/include/sys/wait.h
jutils.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
jutils.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
jutils.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
jutils.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
jutils.o: /usr/include/mach/i386/_structs.h
jutils.o: /usr/include/sys/_types/_sigaltstack.h
jutils.o: /usr/include/sys/_types/_ucontext.h
jutils.o: /usr/include/sys/_types/_pthread_attr_t.h
jutils.o: /usr/include/sys/_types/_sigset_t.h
jutils.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
jutils.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
jutils.o: /usr/include/sys/_types/_int16_t.h
jutils.o: /usr/include/sys/_types/_int32_t.h
jutils.o: /usr/include/sys/_types/_int64_t.h /usr/include/_types/_uint8_t.h
jutils.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
jutils.o: /usr/include/_types/_uint64_t.h /usr/include/sys/_types/_intptr_t.h
jutils.o: /usr/include/sys/_types/_uintptr_t.h
jutils.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
jutils.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
jutils.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
jutils.o: /usr/include/libkern/_OSByteOrder.h
jutils.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
jutils.o: /usr/include/sys/_types/_ct_rune_t.h
jutils.o: /usr/include/sys/_types/_rune_t.h /usr/include/machine/types.h
jutils.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
jutils.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
jutils.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
jutils.o: /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_ssize_t.h
jutils.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
jutils.o: /usr/include/string.h /usr/include/sys/_types/_errno_t.h
jutils.o: /usr/include/strings.h /usr/include/secure/_string.h jpeglib.h
jutils.o: jmorecfg.h jpegint.h jerror.h
