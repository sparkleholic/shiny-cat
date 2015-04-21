################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/calc.cpp \
../src/main.cpp 

OBJS += \
./src/calc.o \
./src/main.o 

CPP_DEPS += \
./src/calc.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/opt/local/include -I"/Users/junilkim/workspace2/Halo/inc" -I/opt/local/lib/glib-2.0/include/ -I/opt/local/include/glib-2.0 -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -g -ggdb -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


