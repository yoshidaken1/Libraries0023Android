//*********************
//
//Kenichi Yoshida
//2012/01/31
//
//********************
#if defined(__AVR_ATmega1280__) || (__AVR_ATmega2560__)
	#include "demokit/Usb.cpp"
#endif

#if  defined(__AVR_ATmega168__) || defined(__AVR_ATmega328P__)
	#include "circuit/Usb.cpp"
#endif