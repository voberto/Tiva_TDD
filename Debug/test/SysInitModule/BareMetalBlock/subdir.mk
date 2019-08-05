################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../test/SysInitModule/BareMetalBlock/test_SysInitModule_BareMetalBlock_Hardware.c \
../test/SysInitModule/BareMetalBlock/test_SysInitModule_BareMetalBlock_Hardware_runner.c 

OBJS += \
./test/SysInitModule/BareMetalBlock/test_SysInitModule_BareMetalBlock_Hardware.o \
./test/SysInitModule/BareMetalBlock/test_SysInitModule_BareMetalBlock_Hardware_runner.o 

C_DEPS += \
./test/SysInitModule/BareMetalBlock/test_SysInitModule_BareMetalBlock_Hardware.d \
./test/SysInitModule/BareMetalBlock/test_SysInitModule_BareMetalBlock_Hardware_runner.d 


# Each subdirectory must supply rules for building sources it contributes
test/SysInitModule/BareMetalBlock/%.o: ../test/SysInitModule/BareMetalBlock/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DEK_TM4C123GXL -DPART_TM$C123GH6PM -DTARGET_IS_BLIZZARD_RB1 -DUART_BUFFERED -DPART_IS_BLIZZARD_RA1 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DTEST -I"C:\ti\TivaWare_C_Series-2.1.4.178" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


