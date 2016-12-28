################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../soc/cc_io_park.c \
../soc/cc_pm_ops.c 

OBJS += \
./soc/cc_io_park.o \
./soc/cc_pm_ops.o 

C_DEPS += \
./soc/cc_io_park.d \
./soc/cc_pm_ops.d 


# Each subdirectory must supply rules for building sources it contributes
soc/%.o: ../soc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


