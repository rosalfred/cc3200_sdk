################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../driver/hal/dma_hal.c \
../driver/hal/gpio_hal.c \
../driver/hal/hw_timer32.c \
../driver/hal/interrupt_hal.c \
../driver/hal/rtc_hal.c \
../driver/hal/spi_hal.c \
../driver/hal/uart_hal.c 

OBJS += \
./driver/hal/dma_hal.o \
./driver/hal/gpio_hal.o \
./driver/hal/hw_timer32.o \
./driver/hal/interrupt_hal.o \
./driver/hal/rtc_hal.o \
./driver/hal/spi_hal.o \
./driver/hal/uart_hal.o 

C_DEPS += \
./driver/hal/dma_hal.d \
./driver/hal/gpio_hal.d \
./driver/hal/hw_timer32.d \
./driver/hal/interrupt_hal.d \
./driver/hal/rtc_hal.d \
./driver/hal/spi_hal.d \
./driver/hal/uart_hal.d 


# Each subdirectory must supply rules for building sources it contributes
driver/hal/%.o: ../driver/hal/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


