#include <reg51.h>

// Base motor
sbit B1 = P2^0;
sbit B2 = P2^1;

// Arm motor 1
sbit A1 = P2^2;
sbit A2 = P2^3;

// Arm motor 2
sbit A3 = P2^4;
sbit A4 = P2^5;

// Gripper motor
sbit G1 = P2^6;
sbit G2 = P2^7;

void delay(unsigned int t) {
    int i, j;
    for(i=0;i<t;i++)
        for(j=0;j<1275;j++);
}

void main() {
    unsigned char cmd;
    TMOD = 0x20;   // Timer1 Mode2 for Serial
    TH1 = 0xFD;    // 9600 baud
    SCON = 0x50;   // Mode 1, 8-bit, Enable Rx
    TR1 = 1;

    while(1) {
        while(RI == 0);
        cmd = SBUF;
        RI = 0;

        switch(cmd) {
            case 'R': B1=1; B2=0; break; // Base Rotate Right
            case 'L': B1=0; B2=1; break; // Base Rotate Left
            case 'S': B1=0; B2=0; break; // Base Stop

            case 'U': A1=1; A2=0; A3=1; A4=0; break; // Arm Up
            case 'D': A1=0; A2=1; A3=0; A4=1; break; // Arm Down
            case 'A': A1=0; A2=0; A3=0; A4=0; break; // Arm Stop

            case 'O': G1=1; G2=0; break; // Grip Open
            case 'C': G1=0; G2=1; break; // Grip Close
            case 'G': G1=0; G2=0; break; // Grip Stop
        }

        delay(100);
    }
}
