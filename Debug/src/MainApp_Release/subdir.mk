################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/MainApp_Release/MainApp_Release.c 

OBJS += \
./src/MainApp_Release/MainApp_Release.o 

C_DEPS += \
./src/MainApp_Release/MainApp_Release.d 


# Each subdirectory must supply rules for building sources it contributes
src/MainApp_Release/%.o: ../src/MainApp_Release/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DEK_TM4C123GXL -DPART_TM$C123GH6PM -DTARGET_IS_BLIZZARD_RB1 -DUART_BUFFERED -DPART_IS_BLIZZARD_RA1 -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DTEST -I"C:\ti\TivaWare_C_Series-2.1.4.178" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


