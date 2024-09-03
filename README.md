# Smart Home Management System (SHMS)

This project is a C++ implementation of a Smart Home Management System (SHMS). The system allows users to add and control devices, manage user authentication, switch between manual and automatic modes, and send alerts.

## Project Structure

The project consists of the following files:

- `main.cpp` : Entry point of the application.
- `device.h` : Declaration of the `Device` class.
- `device.cpp` : Definition of the `Device` class.
- `sensor.h` : Declaration of the `Sensor` class, which inherits from `Device`.
- `sensor.cpp` : Definition of the `Sensor` class.
- `user.h` : Declaration of the `User` class.
- `user.cpp` : Definition of the `User` class.
- `shms.h` : Declaration of the `SHMS` class (the core system).
- `shms.cpp` : Definition of the `SHMS` class.
- `mode.h` : Declaration of the `Mode` class and its derivatives (`ManualMode` and `AutomaticMode`).
- `mode.cpp` : Definition of the `Mode` class and its derivatives.
- `alertsystem.h` : Declaration of the `AlertSystem` class.
- `alertsystem.cpp` : Definition of the `AlertSystem` class.
- `auth.h` : Declaration of the `Authentication` class.
- `auth.cpp` : Definition of the `Authentication` class.
- `Makefile` : Build script to compile the project.

## How to Build and Run the Project

### Prerequisites

- A C++ compiler (e.g., g++)
- Make utility (if using the provided Makefile)

### Building the Project

To build the project using the provided Makefile, follow these steps:

1. **Open a terminal** and navigate to the directory containing the source code and Makefile.
2. **Run the make command**:

    ```bash
    make
    ```

    This will compile all the source files and generate an executable named `shms`.

### Running the Program

After building the project, you can run the program with the following command:

```bash
./shms
