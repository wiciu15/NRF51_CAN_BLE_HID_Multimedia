################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/app_error.c \
../src/app_error_weak.c \
../src/app_fifo.c \
../src/app_scheduler.c \
../src/app_timer.c \
../src/app_timer_appsh.c \
../src/app_uart.c \
../src/app_uart_fifo.c \
../src/app_util_platform.c \
../src/ble_advdata.c \
../src/ble_advertising.c \
../src/ble_bas.c \
../src/ble_conn_params.c \
../src/ble_conn_state.c \
../src/ble_dis.c \
../src/ble_hids.c \
../src/ble_srv_common.c \
../src/crc16.c \
../src/fds.c \
../src/fstorage.c \
../src/gatt_cache_manager.c \
../src/gatts_cache_manager.c \
../src/id_manager.c \
../src/main.c \
../src/nrf_drv_clock.c \
../src/nrf_drv_common.c \
../src/nrf_drv_gpiote.c \
../src/nrf_drv_uart.c \
../src/nrf_log_backend_serial.c \
../src/nrf_log_frontend.c \
../src/peer_data.c \
../src/peer_data_storage.c \
../src/peer_database.c \
../src/peer_id.c \
../src/peer_manager.c \
../src/pm_buffer.c \
../src/pm_mutex.c \
../src/retarget.c \
../src/sdk_errors.c \
../src/sdk_mapped_flags.c \
../src/security_dispatcher.c \
../src/security_manager.c \
../src/softdevice_handler.c \
../src/softdevice_handler_appsh.c \
../src/system_nrf51.c 

S_UPPER_SRCS += \
../src/gcc_startup_nrf51.S 

OBJS += \
./src/app_error.o \
./src/app_error_weak.o \
./src/app_fifo.o \
./src/app_scheduler.o \
./src/app_timer.o \
./src/app_timer_appsh.o \
./src/app_uart.o \
./src/app_uart_fifo.o \
./src/app_util_platform.o \
./src/ble_advdata.o \
./src/ble_advertising.o \
./src/ble_bas.o \
./src/ble_conn_params.o \
./src/ble_conn_state.o \
./src/ble_dis.o \
./src/ble_hids.o \
./src/ble_srv_common.o \
./src/crc16.o \
./src/fds.o \
./src/fstorage.o \
./src/gatt_cache_manager.o \
./src/gatts_cache_manager.o \
./src/gcc_startup_nrf51.o \
./src/id_manager.o \
./src/main.o \
./src/nrf_drv_clock.o \
./src/nrf_drv_common.o \
./src/nrf_drv_gpiote.o \
./src/nrf_drv_uart.o \
./src/nrf_log_backend_serial.o \
./src/nrf_log_frontend.o \
./src/peer_data.o \
./src/peer_data_storage.o \
./src/peer_database.o \
./src/peer_id.o \
./src/peer_manager.o \
./src/pm_buffer.o \
./src/pm_mutex.o \
./src/retarget.o \
./src/sdk_errors.o \
./src/sdk_mapped_flags.o \
./src/security_dispatcher.o \
./src/security_manager.o \
./src/softdevice_handler.o \
./src/softdevice_handler_appsh.o \
./src/system_nrf51.o 

S_UPPER_DEPS += \
./src/gcc_startup_nrf51.d 

C_DEPS += \
./src/app_error.d \
./src/app_error_weak.d \
./src/app_fifo.d \
./src/app_scheduler.d \
./src/app_timer.d \
./src/app_timer_appsh.d \
./src/app_uart.d \
./src/app_uart_fifo.d \
./src/app_util_platform.d \
./src/ble_advdata.d \
./src/ble_advertising.d \
./src/ble_bas.d \
./src/ble_conn_params.d \
./src/ble_conn_state.d \
./src/ble_dis.d \
./src/ble_hids.d \
./src/ble_srv_common.d \
./src/crc16.d \
./src/fds.d \
./src/fstorage.d \
./src/gatt_cache_manager.d \
./src/gatts_cache_manager.d \
./src/id_manager.d \
./src/main.d \
./src/nrf_drv_clock.d \
./src/nrf_drv_common.d \
./src/nrf_drv_gpiote.d \
./src/nrf_drv_uart.d \
./src/nrf_log_backend_serial.d \
./src/nrf_log_frontend.d \
./src/peer_data.d \
./src/peer_data_storage.d \
./src/peer_database.d \
./src/peer_id.d \
./src/peer_manager.d \
./src/pm_buffer.d \
./src/pm_mutex.d \
./src/retarget.d \
./src/sdk_errors.d \
./src/sdk_mapped_flags.d \
./src/security_dispatcher.d \
./src/security_manager.d \
./src/softdevice_handler.d \
./src/softdevice_handler_appsh.d \
./src/system_nrf51.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -DNRF51 -DBOARD_PCA10028 -DSOFTDEVICE_PRESENT -DS130 -DBLE_STACK_SUPPORT_REQD -DNRF_SD_BLE_API_VERSION=2 -DNRF51822 -DSWI_DISABLE0 -I"C:\NRFdev\projekty\ble_mediaKB\inc" -isystem"C:\NRFdev\NRFSDK12\components\toolchain\gcc" -isystem"C:\NRFdev\NRFSDK12\components\libraries\crc16" -isystem"C:\NRFdev\NRFSDK12\components\drivers_nrf\clock" -isystem"C:\NRFdev\NRFSDK12\components\libraries\experimental_section_vars" -isystem"C:\NRFdev\NRFSDK12\components\libraries\uart" -isystem"C:\NRFdev\NRFSDK12\components\drivers_nrf\delay" -isystem"C:\NRFdev\NRFSDK12\components\libraries\log" -isystem"C:\NRFdev\NRFSDK12\components\ble\peer_manager" -isystem"C:\NRFdev\NRFSDK12\components\drivers_nrf\common" -isystem"C:\NRFdev\NRFSDK12\components\libraries\gpiote" -isystem"C:\NRFdev\NRFSDK12\components\libraries\fifo" -isystem"C:\NRFdev\NRFSDK12\components\drivers_nrf\gpiote" -isystem"C:\NRFdev\NRFSDK12\components\drivers_nrf\uart" -isystem"C:\NRFdev\NRFSDK12\components\ble\ble_services\ble_dis" -isystem"C:\NRFdev\NRFSDK12\components\ble\ble_services\ble_hids" -isystem"C:\NRFdev\NRFSDK12\components\ble\ble_services\ble_bas" -isystem"C:\NRFdev\NRFSDK12\components\libraries\util" -isystem"C:\NRFdev\NRFSDK12\components\softdevice\common\softdevice_handler" -isystem"C:\NRFdev\NRFSDK12\components\softdevice\s130\headers" -isystem"C:\NRFdev\NRFSDK12\components\ble\ble_advertising" -isystem"C:\NRFdev\NRFSDK12\components\libraries\scheduler" -isystem"C:\NRFdev\NRFSDK12\components\libraries\timer" -isystem"C:\NRFdev\NRFSDK12\components\ble\common" -isystem"C:\NRFdev\NRFSDK12\components\drivers_nrf\common" -isystem"C:\NRFdev\NRFSDK12\components\device" -isystem"C:\NRFdev\NRFSDK12\components\toolchain" -isystem"C:\NRFdev\NRFSDK12\components\toolchain\cmsis\include" -isystem"C:\NRFdev\NRFSDK12\components\drivers_nrf\hal" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross Assembler'
	arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


