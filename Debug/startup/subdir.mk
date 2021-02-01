################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../startup/startup.c 

OBJS += \
./startup/startup.o 

C_DEPS += \
./startup/startup.d 


# Each subdirectory must supply rules for building sources it contributes
startup/%.o: ../startup/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DNRF51 -I"C:\NRFdev\NRFSDK8\components\device" -I"C:\NRFdev\NRFSDK8\components\toolchain\gcc" -I"C:\NRFdev\NRFSDK8\components\toolchain" -I"C:\NRFdev\NRFSDK8\components\drivers_nrf\hal" -I"C:\NRFdev\NRFSDK8\examples\bsp" -std=gnu11 -v -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


