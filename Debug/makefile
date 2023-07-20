################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32G4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := stm32g431cbtx_board
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
stm32g431cbtx_board.elf \

MAP_FILES += \
stm32g431cbtx_board.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
stm32g431cbtx_board.list \

<<<<<<< HEAD
OBJCOPY_HEX += \
stm32g431cbtx_board.hex \

=======
>>>>>>> 0d6478ce6432d025df209c0aa6b5735b1b51b05b

# All Target
all: main-build

# Main-build Target
main-build: stm32g431cbtx_board.elf secondary-outputs

# Tool invocations
<<<<<<< HEAD
stm32g431cbtx_board.elf stm32g431cbtx_board.map: $(OBJS) $(USER_OBJS) E:\SELEX\SetPWM\SetPWM\STM32G431CBTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "stm32g431cbtx_board.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"E:\SELEX\SetPWM\SetPWM\STM32G431CBTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="stm32g431cbtx_board.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
=======
stm32g431cbtx_board.elf stm32g431cbtx_board.map: $(OBJS) $(USER_OBJS) D:\Users\STM32CubeIDE\stm32g431cbtx_board\STM32G431CBTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "stm32g431cbtx_board.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"D:\Users\STM32CubeIDE\stm32g431cbtx_board\STM32G431CBTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="stm32g431cbtx_board.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
>>>>>>> 0d6478ce6432d025df209c0aa6b5735b1b51b05b
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

stm32g431cbtx_board.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "stm32g431cbtx_board.list"
	@echo 'Finished building: $@'
	@echo ' '

<<<<<<< HEAD
stm32g431cbtx_board.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "stm32g431cbtx_board.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) default.size.stdout stm32g431cbtx_board.elf stm32g431cbtx_board.hex stm32g431cbtx_board.list stm32g431cbtx_board.map
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX)
=======
# Other Targets
clean:
	-$(RM) default.size.stdout stm32g431cbtx_board.elf stm32g431cbtx_board.list stm32g431cbtx_board.map
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)
>>>>>>> 0d6478ce6432d025df209c0aa6b5735b1b51b05b

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
