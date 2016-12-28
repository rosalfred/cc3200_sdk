################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include ti_rtos_config/src/sysbios/subdir.mk
-include ti_rtos_config/gcc/src/sysbios/subdir.mk
-include ti_rtos_config/gcc/configPkg/package/cfg/subdir.mk
-include ti_rtos_config/gcc/configPkg/package/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: ti_rtos

# Tool invocations
ti_rtos: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	gcc  -o "ti_rtos" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) ti_rtos
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
