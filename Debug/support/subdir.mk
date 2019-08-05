################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../support/_exit.c \
../support/_sbrk.c \
../support/_startup.c \
../support/_syscalls.c \
../support/_write.c \
../support/assert.c \
../support/startup_gcc.c 

OBJS += \
./support/_exit.o \
./support/_sbrk.o \
./support/_startup.o \
./support/_syscalls.o \
./support/_write.o \
./support/assert.o \
./support/startup_gcc.o 

C_DEPS += \
./support/_exit.d \
./support/_sbrk.d \
./support/_startup.d \
./support/_syscalls.d \
./support/_write.d \
./support/assert.d \
./support/startup_gcc.d 


# Each subdirectory must supply rules for building sources it contributes
support/%.o: ../support/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DEK_TM4C123GXL -DPART_TM$C123GH6PM -DTARGET_IS_BLIZZARD_RB1 -DUART_BUFFERED -DPART_IS_BLIZZARD_RA1 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DTEST -I"C:\ti\TivaWare_C_Series-2.1.4.178" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


