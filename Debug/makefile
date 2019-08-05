################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include unity/subdir.mk
-include test/SysInitModule/BareMetalBlock/subdir.mk
-include support/subdir.mk
-include src/SysInitModule/BareMetalBlock/subdir.mk
-include src/MainApp_Test/subdir.mk
-include src/MainApp_Release/subdir.mk
-include diag/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
Tiva_TDD.bin \

SECONDARY_SIZE += \
Tiva_TDD.siz \


# All Target
all: Tiva_TDD.elf secondary-outputs

# Tool invocations
Tiva_TDD.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM Cross C Linker'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -T "C:\Users\IK\Documents\Projetos\eclipse_win_test\Tiva_TDD\ldscripts\TM4C123GH6PM.ld" -nostartfiles -Xlinker --gc-sections -L"C:\Users\IK\Documents\Projetos\eclipse_win_test\Tiva_TDD\ldscripts" -L"C:\ti\TivaWare_C_Series-2.1.4.178\driverlib\gcc" -Wl,-Map,"Tiva_TDD.map" --specs=nano.specs --specs=rdimon.specs -o "Tiva_TDD.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Tiva_TDD.bin: Tiva_TDD.elf
	@echo 'Invoking: GNU ARM Cross Create Flash Image'
	arm-none-eabi-objcopy -O binary "Tiva_TDD.elf"  "Tiva_TDD.bin"
	@echo 'Finished building: $@'
	@echo ' '

Tiva_TDD.siz: Tiva_TDD.elf
	@echo 'Invoking: GNU ARM Cross Print Size'
	arm-none-eabi-size --format=berkeley "Tiva_TDD.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(SECONDARY_FLASH)$(SECONDARY_SIZE)$(ASM_DEPS)$(S_UPPER_DEPS)$(C_DEPS) Tiva_TDD.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
