################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include generate/src/subdir.mk
-include board/subdir.mk
-include RTD/src/subdir.mk
-include Project_Settings/Startup_Code/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_SIZE += \
i2c_trial_1_M7_1.siz \


# All Target
all: i2c_trial_1_M7_1.elf secondary-outputs

# Tool invocations
i2c_trial_1_M7_1.elf: $(OBJS) C:/Users/eya12/workspaceS32DS.3.5/i2c_trial_1/i2c_trial_1_M7_1/Project_Settings/Linker_Files/linker_flash_c1_s32k322.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Standard S32DS C Linker'
	arm-none-eabi-gcc -o "i2c_trial_1_M7_1.elf" "@i2c_trial_1_M7_1.args"  $(USER_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

i2c_trial_1_M7_1.siz: i2c_trial_1_M7_1.elf
	@echo 'Invoking: Standard S32DS Print Size'
	arm-none-eabi-size --format=berkeley i2c_trial_1_M7_1.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
