## Root Finding using Newton Raphson Method

This repository contains a C++ program that utilizes Newton's method as a root-finding algorithm to determine the earliest time at which the force acting on a robot becomes zero.

### Problem Statement

For the robot to perform its natural task, it needs to counteract a specific force. To achieve this, it is necessary to find the earliest time at which the force acting on the robot becomes null. The Newton's method, a root-finding algorithm, proves to be effective in predicting successive approximations of time for the given time-varying force. To improve the accuracy of these approximations, the convergence criteria can be adjusted.

### Features

- Implements Newton's method as a root-finding algorithm
- Utilizes a polymorphic function wrapper to enable the passing of different functions and their derivatives as parameters when creating objects of a class
- Provides a flexible approach to handle various force scenarios

### Getting Started

Follow the steps below to get started with this program:

1. Clone the repository:

```bash
git clone https://github.com/ShobhitManiar/Newton-RFA.git
```

2. Change into the project directory:

```bash
cd Newton-RFA
```

3. Compile and run the program:

```bash
g++ main.cpp -o main
./main
```

### Usage

To use this program, you can modify the code to provide your specific force scenario. By adjusting the convergence criteria and implementing the appropriate function and its derivative, you can accurately find the earliest time at which the force acting on the robot becomes zero.

### Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or create a pull request in this repository.

### License

This project is licensed under the [MIT License](LICENSE). You are free to use, modify, and distribute this code as per the terms of this license.

Thank you for your interest in this project. If you have any questions or need further assistance, please feel free to contact us.
