################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Clock_Ip_Cfg.c \
../generate/src/FlexCAN_Ip_Sa_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Igf_Port_Ip_Cfg.c \
../generate/src/Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Lpspi_Ip_Sa_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Mcu_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Mcu_Cfg.c \
../generate/src/OsIf_Cfg.c \
../generate/src/Power_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Power_Ip_Cfg.c \
../generate/src/Ram_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Ram_Ip_Cfg.c 

OBJS += \
./generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Clock_Ip_Cfg.o \
./generate/src/FlexCAN_Ip_Sa_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Igf_Port_Ip_Cfg.o \
./generate/src/Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Lpspi_Ip_Sa_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Mcu_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Mcu_Cfg.o \
./generate/src/OsIf_Cfg.o \
./generate/src/Power_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Power_Ip_Cfg.o \
./generate/src/Ram_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Ram_Ip_Cfg.o 

C_DEPS += \
./generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Clock_Ip_Cfg.d \
./generate/src/FlexCAN_Ip_Sa_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Igf_Port_Ip_Cfg.d \
./generate/src/Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Lpspi_Ip_Sa_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Mcu_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Mcu_Cfg.d \
./generate/src/OsIf_Cfg.d \
./generate/src/Power_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Power_Ip_Cfg.d \
./generate/src/Ram_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Ram_Ip_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
generate/src/%.o: ../generate/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@generate/src/Clock_Ip_BOARD_InitPeripherals_PBcfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


