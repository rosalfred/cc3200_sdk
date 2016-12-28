################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ti_rtos_config/gcc/configPkg/package/cfg/app_pem4.c \
../ti_rtos_config/gcc/configPkg/package/cfg/app_pm4g.c \
../ti_rtos_config/gcc/configPkg/package/cfg/ti_rtos_config_pm4g.c 

OBJS += \
./ti_rtos_config/gcc/configPkg/package/cfg/app_pem4.o \
./ti_rtos_config/gcc/configPkg/package/cfg/app_pm4g.o \
./ti_rtos_config/gcc/configPkg/package/cfg/ti_rtos_config_pm4g.o 

C_DEPS += \
./ti_rtos_config/gcc/configPkg/package/cfg/app_pem4.d \
./ti_rtos_config/gcc/configPkg/package/cfg/app_pm4g.d \
./ti_rtos_config/gcc/configPkg/package/cfg/ti_rtos_config_pm4g.d 


# Each subdirectory must supply rules for building sources it contributes
ti_rtos_config/gcc/configPkg/package/cfg/%.o: ../ti_rtos_config/gcc/configPkg/package/cfg/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


