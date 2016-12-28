################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../framework/timer/cc_timer.c 

OBJS += \
./framework/timer/cc_timer.o 

C_DEPS += \
./framework/timer/cc_timer.d 


# Each subdirectory must supply rules for building sources it contributes
framework/timer/%.o: ../framework/timer/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


