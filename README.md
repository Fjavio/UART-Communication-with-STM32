# UART-Communication-with-STM32
## Turn-Based Synchronous UART Communication with STM32
The goal of this project is to create a turn-based communication system between two transmitting devices and a receiver using UART serial communication. 
Its operation is inspired by a collaborative logic: each device can send one or two messages to contribute to a common goal. The goal is to score exactly ten points, represented by the transmitted values.
If the total exceeds this threshold, the game is considered lost.

Communication occurs alternately, and devices can transmit only when authorized by the receiver via an unlock message. This control ensures turn-taking and prevents transmission conflicts. 
The chosen scenario demonstrates a synchronous and coordinated interaction between multiple nodes, emphasizing the importance of cooperation and rule-based compliance for the system's success. The project explores fundamental concepts of embedded programming, such as UART peripheral management, device synchronization, and data flow control in distributed environments.
