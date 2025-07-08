🤖 Pick and Place Robotic Arm using 8051 Microcontroller
A Bluetooth-controlled robotic arm powered by the classic 8051 microcontroller — featuring a fully handcrafted wooden arm structure and operated via a custom Android app. Equipped with four servo motors for base rotation, arm movement, and claw control, this robot performs smooth pick-and-place operations based on real-time commands.

📱 Real-Time App Control
We developed a custom Android app using MIT App Inventor that allows users to control the robot wirelessly over Bluetooth (HC-05). The app includes the following control buttons:

🔼 Forward

🔽 Backward

⬅️ Move Left / ➡️ Move Right

⬆️ Lift Arm / ⬇️ Lower Arm

✋ Open Grip / Close Grip

🛑 Stop

Each button sends a command to the 8051, which then processes and executes it through PWM signals to the respective servo.


🛠️ Highlights
✅ Bluetooth-controlled 4-DOF robotic arm

✅ Custom-built wooden frame (yes, we cut and assembled it ourselves!)

✅ Real-time command execution using 8051

✅ 4 SG90 servo motors for precise movement

✅ Android app interface with intuitive controls

⚙️ How It Works
User pairs the phone with the robot via HC-05 Bluetooth.

Tapping a button sends a command.

The 8051 microcontroller receives the command through UART.

Servo motors respond with smooth base, arm, or claw movement.

Voilà — the robot picks, places, and obeys instantly.

🧠 Skills Demonstrated
Embedded C Programming (Keil IDE – 8051)

PWM-based Servo Motor Control

Bluetooth UART Communication

Mobile App Development (MIT App Inventor)

Mechanical Design & Fabrication (Handmade Wooden Arm)

Real-Time Embedded System Integration

🚀 Future Improvements
Add object sensors for smarter grip

Upgrade to voice/gesture control

Smoother motion using better control logic

Port to a more powerful MCU (STM32 / Arduino)

👥 The Dream Team
🔧 Harini Kamatchi Velrajan – Builder of bots, breaker of things (sometimes on purpose).

🎨 Mridula Beshi – App queen and Bluetooth whisperer.

🧪 Kiran Pradha – Debugger, tester, and the calm in our code storm.

📜 License
Licensed under the MIT License
