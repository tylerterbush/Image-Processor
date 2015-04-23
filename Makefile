TARGET  = Assignment1
SRCS	= 	Util/cmdLineParser \
		Image/bmp \
		Image/image \
		Image/image.todo \
		Image/jpeg \
		Image/lineSegments \
		Image/lineSegments.todo \
		main

CC   = g++
CFLAGS		+= -I.
LFLAGS		+= -LJPEG -lJPEG

OBJECTS		= ${addsuffix .o, ${SRCS}}
CLEAN		= *.o .depend ${TARGET} *.dsp *.dsw *.bak

#############################################################
all: debug

debug: CFLAGS += -DUSE_UNIX -DDEBUG -g3
debug: ${TARGET}

release: CFLAGS += -O2 -DUSE_UNIX -DRELEASE -pipe -fomit-frame-pointer
release: ${TARGET}

${TARGET}: depend JPEG/libJPEG.a ${OBJECTS}
	${CC} -o $@ ${OBJECTS} ${LFLAGS}

clean:	
	/bin/rm -f ${CLEAN}

.cpp.o:
	${CC} ${CFLAGS} -o $@ -c $<

JPEG/libJPEG.a:
	${MAKE} -C JPEG

depend: 
	makedepend -- ${CFLAGS} -- ${addsuffix .cpp, ${SRCS}}
# DO NOT DELETE

Util/cmdLineParser.o: /usr/include/stdio.h /usr/include/sys/cdefs.h
Util/cmdLineParser.o: /usr/include/sys/_symbol_aliasing.h
Util/cmdLineParser.o: /usr/include/sys/_posix_availability.h
Util/cmdLineParser.o: /usr/include/Availability.h
Util/cmdLineParser.o: /usr/include/AvailabilityInternal.h
Util/cmdLineParser.o: /usr/include/_types.h /usr/include/sys/_types.h
Util/cmdLineParser.o: /usr/include/machine/_types.h
Util/cmdLineParser.o: /usr/include/i386/_types.h
Util/cmdLineParser.o: /usr/include/sys/_types/_va_list.h
Util/cmdLineParser.o: /usr/include/sys/_types/_size_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_null.h
Util/cmdLineParser.o: /usr/include/sys/_types/_off_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_ssize_t.h
Util/cmdLineParser.o: /usr/include/secure/_stdio.h
Util/cmdLineParser.o: /usr/include/secure/_common.h /usr/include/stdlib.h
Util/cmdLineParser.o: /usr/include/sys/wait.h
Util/cmdLineParser.o: /usr/include/sys/_types/_pid_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_id_t.h
Util/cmdLineParser.o: /usr/include/sys/signal.h
Util/cmdLineParser.o: /usr/include/sys/appleapiopts.h
Util/cmdLineParser.o: /usr/include/machine/signal.h
Util/cmdLineParser.o: /usr/include/i386/signal.h
Util/cmdLineParser.o: /usr/include/machine/_mcontext.h
Util/cmdLineParser.o: /usr/include/i386/_mcontext.h
Util/cmdLineParser.o: /usr/include/mach/i386/_structs.h
Util/cmdLineParser.o: /usr/include/sys/_types/_sigaltstack.h
Util/cmdLineParser.o: /usr/include/sys/_types/_ucontext.h
Util/cmdLineParser.o: /usr/include/sys/_types/_pthread_attr_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_sigset_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_uid_t.h
Util/cmdLineParser.o: /usr/include/sys/resource.h /usr/include/stdint.h
Util/cmdLineParser.o: /usr/include/sys/_types/_int8_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_int16_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_int32_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_int64_t.h
Util/cmdLineParser.o: /usr/include/_types/_uint8_t.h
Util/cmdLineParser.o: /usr/include/_types/_uint16_t.h
Util/cmdLineParser.o: /usr/include/_types/_uint32_t.h
Util/cmdLineParser.o: /usr/include/_types/_uint64_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_intptr_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_uintptr_t.h
Util/cmdLineParser.o: /usr/include/_types/_intmax_t.h
Util/cmdLineParser.o: /usr/include/_types/_uintmax_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_timeval.h
Util/cmdLineParser.o: /usr/include/machine/endian.h
Util/cmdLineParser.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
Util/cmdLineParser.o: /usr/include/libkern/_OSByteOrder.h
Util/cmdLineParser.o: /usr/include/libkern/i386/_OSByteOrder.h
Util/cmdLineParser.o: /usr/include/alloca.h
Util/cmdLineParser.o: /usr/include/sys/_types/_ct_rune_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_rune_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_wchar_t.h
Util/cmdLineParser.o: /usr/include/machine/types.h /usr/include/i386/types.h
Util/cmdLineParser.o: /usr/include/sys/_types/___offsetof.h
Util/cmdLineParser.o: /usr/include/sys/_types/_dev_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_mode_t.h /usr/include/string.h
Util/cmdLineParser.o: /usr/include/sys/_types/_rsize_t.h
Util/cmdLineParser.o: /usr/include/sys/_types/_errno_t.h
Util/cmdLineParser.o: /usr/include/strings.h /usr/include/secure/_string.h
Util/cmdLineParser.o: /usr/include/assert.h Util/cmdLineParser.h
Util/cmdLineParser.o: /usr/include/stdarg.h
Image/bmp.o: Image/bmp.h Image/image.h /usr/include/stdio.h
Image/bmp.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
Image/bmp.o: /usr/include/sys/_posix_availability.h
Image/bmp.o: /usr/include/Availability.h /usr/include/AvailabilityInternal.h
Image/bmp.o: /usr/include/_types.h /usr/include/sys/_types.h
Image/bmp.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
Image/bmp.o: /usr/include/sys/_types/_va_list.h
Image/bmp.o: /usr/include/sys/_types/_size_t.h
Image/bmp.o: /usr/include/sys/_types/_null.h /usr/include/sys/_types/_off_t.h
Image/bmp.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
Image/bmp.o: /usr/include/secure/_common.h Image/lineSegments.h
Image/bmp.o: /usr/include/stdlib.h /usr/include/sys/wait.h
Image/bmp.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
Image/bmp.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
Image/bmp.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
Image/bmp.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
Image/bmp.o: /usr/include/mach/i386/_structs.h
Image/bmp.o: /usr/include/sys/_types/_sigaltstack.h
Image/bmp.o: /usr/include/sys/_types/_ucontext.h
Image/bmp.o: /usr/include/sys/_types/_pthread_attr_t.h
Image/bmp.o: /usr/include/sys/_types/_sigset_t.h
Image/bmp.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
Image/bmp.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
Image/bmp.o: /usr/include/sys/_types/_int16_t.h
Image/bmp.o: /usr/include/sys/_types/_int32_t.h
Image/bmp.o: /usr/include/sys/_types/_int64_t.h
Image/bmp.o: /usr/include/_types/_uint8_t.h /usr/include/_types/_uint16_t.h
Image/bmp.o: /usr/include/_types/_uint32_t.h /usr/include/_types/_uint64_t.h
Image/bmp.o: /usr/include/sys/_types/_intptr_t.h
Image/bmp.o: /usr/include/sys/_types/_uintptr_t.h
Image/bmp.o: /usr/include/_types/_intmax_t.h /usr/include/_types/_uintmax_t.h
Image/bmp.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
Image/bmp.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
Image/bmp.o: /usr/include/libkern/_OSByteOrder.h
Image/bmp.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
Image/bmp.o: /usr/include/sys/_types/_ct_rune_t.h
Image/bmp.o: /usr/include/sys/_types/_rune_t.h
Image/bmp.o: /usr/include/sys/_types/_wchar_t.h /usr/include/machine/types.h
Image/bmp.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
Image/bmp.o: /usr/include/sys/_types/_dev_t.h
Image/bmp.o: /usr/include/sys/_types/_mode_t.h
Image/image.o: /usr/include/string.h /usr/include/_types.h
Image/image.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
Image/image.o: /usr/include/sys/_symbol_aliasing.h
Image/image.o: /usr/include/sys/_posix_availability.h
Image/image.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
Image/image.o: /usr/include/Availability.h
Image/image.o: /usr/include/AvailabilityInternal.h
Image/image.o: /usr/include/sys/_types/_size_t.h
Image/image.o: /usr/include/sys/_types/_null.h
Image/image.o: /usr/include/sys/_types/_rsize_t.h
Image/image.o: /usr/include/sys/_types/_errno_t.h
Image/image.o: /usr/include/sys/_types/_ssize_t.h /usr/include/strings.h
Image/image.o: /usr/include/secure/_string.h /usr/include/secure/_common.h
Image/image.o: /usr/include/stdlib.h /usr/include/sys/wait.h
Image/image.o: /usr/include/sys/_types/_pid_t.h
Image/image.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
Image/image.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
Image/image.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
Image/image.o: /usr/include/i386/_mcontext.h
Image/image.o: /usr/include/mach/i386/_structs.h
Image/image.o: /usr/include/sys/_types/_sigaltstack.h
Image/image.o: /usr/include/sys/_types/_ucontext.h
Image/image.o: /usr/include/sys/_types/_pthread_attr_t.h
Image/image.o: /usr/include/sys/_types/_sigset_t.h
Image/image.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
Image/image.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
Image/image.o: /usr/include/sys/_types/_int16_t.h
Image/image.o: /usr/include/sys/_types/_int32_t.h
Image/image.o: /usr/include/sys/_types/_int64_t.h
Image/image.o: /usr/include/_types/_uint8_t.h /usr/include/_types/_uint16_t.h
Image/image.o: /usr/include/_types/_uint32_t.h
Image/image.o: /usr/include/_types/_uint64_t.h
Image/image.o: /usr/include/sys/_types/_intptr_t.h
Image/image.o: /usr/include/sys/_types/_uintptr_t.h
Image/image.o: /usr/include/_types/_intmax_t.h
Image/image.o: /usr/include/_types/_uintmax_t.h
Image/image.o: /usr/include/sys/_types/_timeval.h
Image/image.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
Image/image.o: /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h
Image/image.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
Image/image.o: /usr/include/sys/_types/_ct_rune_t.h
Image/image.o: /usr/include/sys/_types/_rune_t.h
Image/image.o: /usr/include/sys/_types/_wchar_t.h
Image/image.o: /usr/include/machine/types.h /usr/include/i386/types.h
Image/image.o: /usr/include/sys/_types/___offsetof.h
Image/image.o: /usr/include/sys/_types/_dev_t.h
Image/image.o: /usr/include/sys/_types/_mode_t.h Image/image.h
Image/image.o: /usr/include/stdio.h /usr/include/sys/_types/_va_list.h
Image/image.o: /usr/include/sys/_types/_off_t.h /usr/include/secure/_stdio.h
Image/image.o: Image/lineSegments.h ./Util/cmdLineParser.h
Image/image.o: /usr/include/stdarg.h ./Image/bmp.h ./Image/jpeg.h
Image/image.todo.o: Image/image.h /usr/include/stdio.h
Image/image.todo.o: /usr/include/sys/cdefs.h
Image/image.todo.o: /usr/include/sys/_symbol_aliasing.h
Image/image.todo.o: /usr/include/sys/_posix_availability.h
Image/image.todo.o: /usr/include/Availability.h
Image/image.todo.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
Image/image.todo.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
Image/image.todo.o: /usr/include/i386/_types.h
Image/image.todo.o: /usr/include/sys/_types/_va_list.h
Image/image.todo.o: /usr/include/sys/_types/_size_t.h
Image/image.todo.o: /usr/include/sys/_types/_null.h
Image/image.todo.o: /usr/include/sys/_types/_off_t.h
Image/image.todo.o: /usr/include/sys/_types/_ssize_t.h
Image/image.todo.o: /usr/include/secure/_stdio.h
Image/image.todo.o: /usr/include/secure/_common.h Image/lineSegments.h
Image/image.todo.o: /usr/include/stdlib.h /usr/include/sys/wait.h
Image/image.todo.o: /usr/include/sys/_types/_pid_t.h
Image/image.todo.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
Image/image.todo.o: /usr/include/sys/appleapiopts.h
Image/image.todo.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
Image/image.todo.o: /usr/include/machine/_mcontext.h
Image/image.todo.o: /usr/include/i386/_mcontext.h
Image/image.todo.o: /usr/include/mach/i386/_structs.h
Image/image.todo.o: /usr/include/sys/_types/_sigaltstack.h
Image/image.todo.o: /usr/include/sys/_types/_ucontext.h
Image/image.todo.o: /usr/include/sys/_types/_pthread_attr_t.h
Image/image.todo.o: /usr/include/sys/_types/_sigset_t.h
Image/image.todo.o: /usr/include/sys/_types/_uid_t.h
Image/image.todo.o: /usr/include/sys/resource.h /usr/include/stdint.h
Image/image.todo.o: /usr/include/sys/_types/_int8_t.h
Image/image.todo.o: /usr/include/sys/_types/_int16_t.h
Image/image.todo.o: /usr/include/sys/_types/_int32_t.h
Image/image.todo.o: /usr/include/sys/_types/_int64_t.h
Image/image.todo.o: /usr/include/_types/_uint8_t.h
Image/image.todo.o: /usr/include/_types/_uint16_t.h
Image/image.todo.o: /usr/include/_types/_uint32_t.h
Image/image.todo.o: /usr/include/_types/_uint64_t.h
Image/image.todo.o: /usr/include/sys/_types/_intptr_t.h
Image/image.todo.o: /usr/include/sys/_types/_uintptr_t.h
Image/image.todo.o: /usr/include/_types/_intmax_t.h
Image/image.todo.o: /usr/include/_types/_uintmax_t.h
Image/image.todo.o: /usr/include/sys/_types/_timeval.h
Image/image.todo.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
Image/image.todo.o: /usr/include/sys/_endian.h
Image/image.todo.o: /usr/include/libkern/_OSByteOrder.h
Image/image.todo.o: /usr/include/libkern/i386/_OSByteOrder.h
Image/image.todo.o: /usr/include/alloca.h
Image/image.todo.o: /usr/include/sys/_types/_ct_rune_t.h
Image/image.todo.o: /usr/include/sys/_types/_rune_t.h
Image/image.todo.o: /usr/include/sys/_types/_wchar_t.h
Image/image.todo.o: /usr/include/machine/types.h /usr/include/i386/types.h
Image/image.todo.o: /usr/include/sys/_types/___offsetof.h
Image/image.todo.o: /usr/include/sys/_types/_dev_t.h
Image/image.todo.o: /usr/include/sys/_types/_mode_t.h /usr/include/math.h
Image/jpeg.o: Image/jpeg.h Image/image.h /usr/include/stdio.h
Image/jpeg.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
Image/jpeg.o: /usr/include/sys/_posix_availability.h
Image/jpeg.o: /usr/include/Availability.h /usr/include/AvailabilityInternal.h
Image/jpeg.o: /usr/include/_types.h /usr/include/sys/_types.h
Image/jpeg.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
Image/jpeg.o: /usr/include/sys/_types/_va_list.h
Image/jpeg.o: /usr/include/sys/_types/_size_t.h
Image/jpeg.o: /usr/include/sys/_types/_null.h
Image/jpeg.o: /usr/include/sys/_types/_off_t.h
Image/jpeg.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
Image/jpeg.o: /usr/include/secure/_common.h Image/lineSegments.h
Image/jpeg.o: /usr/include/assert.h /usr/include/stdlib.h
Image/jpeg.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
Image/jpeg.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
Image/jpeg.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
Image/jpeg.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
Image/jpeg.o: /usr/include/i386/_mcontext.h /usr/include/mach/i386/_structs.h
Image/jpeg.o: /usr/include/sys/_types/_sigaltstack.h
Image/jpeg.o: /usr/include/sys/_types/_ucontext.h
Image/jpeg.o: /usr/include/sys/_types/_pthread_attr_t.h
Image/jpeg.o: /usr/include/sys/_types/_sigset_t.h
Image/jpeg.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
Image/jpeg.o: /usr/include/stdint.h /usr/include/sys/_types/_int8_t.h
Image/jpeg.o: /usr/include/sys/_types/_int16_t.h
Image/jpeg.o: /usr/include/sys/_types/_int32_t.h
Image/jpeg.o: /usr/include/sys/_types/_int64_t.h
Image/jpeg.o: /usr/include/_types/_uint8_t.h /usr/include/_types/_uint16_t.h
Image/jpeg.o: /usr/include/_types/_uint32_t.h /usr/include/_types/_uint64_t.h
Image/jpeg.o: /usr/include/sys/_types/_intptr_t.h
Image/jpeg.o: /usr/include/sys/_types/_uintptr_t.h
Image/jpeg.o: /usr/include/_types/_intmax_t.h
Image/jpeg.o: /usr/include/_types/_uintmax_t.h
Image/jpeg.o: /usr/include/sys/_types/_timeval.h
Image/jpeg.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
Image/jpeg.o: /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h
Image/jpeg.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
Image/jpeg.o: /usr/include/sys/_types/_ct_rune_t.h
Image/jpeg.o: /usr/include/sys/_types/_rune_t.h
Image/jpeg.o: /usr/include/sys/_types/_wchar_t.h /usr/include/machine/types.h
Image/jpeg.o: /usr/include/i386/types.h /usr/include/sys/_types/___offsetof.h
Image/jpeg.o: /usr/include/sys/_types/_dev_t.h
Image/jpeg.o: /usr/include/sys/_types/_mode_t.h ./JPEG/jpeglib.h
Image/jpeg.o: ./JPEG/jconfig.h ./JPEG/jmorecfg.h /usr/include/setjmp.h
Image/lineSegments.o: Image/lineSegments.h /usr/include/stdio.h
Image/lineSegments.o: /usr/include/sys/cdefs.h
Image/lineSegments.o: /usr/include/sys/_symbol_aliasing.h
Image/lineSegments.o: /usr/include/sys/_posix_availability.h
Image/lineSegments.o: /usr/include/Availability.h
Image/lineSegments.o: /usr/include/AvailabilityInternal.h
Image/lineSegments.o: /usr/include/_types.h /usr/include/sys/_types.h
Image/lineSegments.o: /usr/include/machine/_types.h
Image/lineSegments.o: /usr/include/i386/_types.h
Image/lineSegments.o: /usr/include/sys/_types/_va_list.h
Image/lineSegments.o: /usr/include/sys/_types/_size_t.h
Image/lineSegments.o: /usr/include/sys/_types/_null.h
Image/lineSegments.o: /usr/include/sys/_types/_off_t.h
Image/lineSegments.o: /usr/include/sys/_types/_ssize_t.h
Image/lineSegments.o: /usr/include/secure/_stdio.h
Image/lineSegments.o: /usr/include/secure/_common.h /usr/include/math.h
Image/lineSegments.todo.o: Image/lineSegments.h /usr/include/stdio.h
Image/lineSegments.todo.o: /usr/include/sys/cdefs.h
Image/lineSegments.todo.o: /usr/include/sys/_symbol_aliasing.h
Image/lineSegments.todo.o: /usr/include/sys/_posix_availability.h
Image/lineSegments.todo.o: /usr/include/Availability.h
Image/lineSegments.todo.o: /usr/include/AvailabilityInternal.h
Image/lineSegments.todo.o: /usr/include/_types.h /usr/include/sys/_types.h
Image/lineSegments.todo.o: /usr/include/machine/_types.h
Image/lineSegments.todo.o: /usr/include/i386/_types.h
Image/lineSegments.todo.o: /usr/include/sys/_types/_va_list.h
Image/lineSegments.todo.o: /usr/include/sys/_types/_size_t.h
Image/lineSegments.todo.o: /usr/include/sys/_types/_null.h
Image/lineSegments.todo.o: /usr/include/sys/_types/_off_t.h
Image/lineSegments.todo.o: /usr/include/sys/_types/_ssize_t.h
Image/lineSegments.todo.o: /usr/include/secure/_stdio.h
Image/lineSegments.todo.o: /usr/include/secure/_common.h /usr/include/math.h
main.o: /usr/include/stdio.h /usr/include/sys/cdefs.h
main.o: /usr/include/sys/_symbol_aliasing.h
main.o: /usr/include/sys/_posix_availability.h /usr/include/Availability.h
main.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
main.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
main.o: /usr/include/i386/_types.h /usr/include/sys/_types/_va_list.h
main.o: /usr/include/sys/_types/_size_t.h /usr/include/sys/_types/_null.h
main.o: /usr/include/sys/_types/_off_t.h /usr/include/sys/_types/_ssize_t.h
main.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
main.o: /usr/include/stdlib.h /usr/include/sys/wait.h
main.o: /usr/include/sys/_types/_pid_t.h /usr/include/sys/_types/_id_t.h
main.o: /usr/include/sys/signal.h /usr/include/sys/appleapiopts.h
main.o: /usr/include/machine/signal.h /usr/include/i386/signal.h
main.o: /usr/include/machine/_mcontext.h /usr/include/i386/_mcontext.h
main.o: /usr/include/mach/i386/_structs.h
main.o: /usr/include/sys/_types/_sigaltstack.h
main.o: /usr/include/sys/_types/_ucontext.h
main.o: /usr/include/sys/_types/_pthread_attr_t.h
main.o: /usr/include/sys/_types/_sigset_t.h /usr/include/sys/_types/_uid_t.h
main.o: /usr/include/sys/resource.h /usr/include/stdint.h
main.o: /usr/include/sys/_types/_int8_t.h /usr/include/sys/_types/_int16_t.h
main.o: /usr/include/sys/_types/_int32_t.h /usr/include/sys/_types/_int64_t.h
main.o: /usr/include/_types/_uint8_t.h /usr/include/_types/_uint16_t.h
main.o: /usr/include/_types/_uint32_t.h /usr/include/_types/_uint64_t.h
main.o: /usr/include/sys/_types/_intptr_t.h
main.o: /usr/include/sys/_types/_uintptr_t.h /usr/include/_types/_intmax_t.h
main.o: /usr/include/_types/_uintmax_t.h /usr/include/sys/_types/_timeval.h
main.o: /usr/include/machine/endian.h /usr/include/i386/endian.h
main.o: /usr/include/sys/_endian.h /usr/include/libkern/_OSByteOrder.h
main.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
main.o: /usr/include/sys/_types/_ct_rune_t.h
main.o: /usr/include/sys/_types/_rune_t.h /usr/include/sys/_types/_wchar_t.h
main.o: /usr/include/machine/types.h /usr/include/i386/types.h
main.o: /usr/include/sys/_types/___offsetof.h
main.o: /usr/include/sys/_types/_dev_t.h /usr/include/sys/_types/_mode_t.h
main.o: ./Image/bmp.h Image/image.h Image/lineSegments.h ./Image/jpeg.h
main.o: Image/image.h ./Util/cmdLineParser.h /usr/include/stdarg.h
main.o: /usr/include/string.h /usr/include/sys/_types/_rsize_t.h
main.o: /usr/include/sys/_types/_errno_t.h /usr/include/strings.h
main.o: /usr/include/secure/_string.h
