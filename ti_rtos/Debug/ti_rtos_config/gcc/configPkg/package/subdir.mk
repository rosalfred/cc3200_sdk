################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ti_rtos_config/gcc/configPkg/package/package_configPkg.c 

OBJS += \
./ti_rtos_config/gcc/configPkg/package/package_configPkg.o 

C_DEPS += \
./ti_rtos_config/gcc/configPkg/package/package_configPkg.d 


# Each subdirectory must supply rules for building sources it contributes
ti_rtos_config/gcc/configPkg/package/%.o: ../ti_rtos_config/gcc/configPkg/package/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


