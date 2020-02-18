// LPCI7250.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Dask.h"

extern "C" __declspec(dllexport) I16 Init_Card7296()
{
I16 hCard;
int  nCardID=0; 
	// TODO: Add extra initialization here
	hCard=Register_Card(PCI_7296, nCardID) ;
	
return hCard;
}

extern "C" __declspec(dllexport) void Card7296P1AOUTPUT(I16 hcard)
{
//I16 hCard;
//int  nCardID=1; 
	// TODO: Add extra initialization here
		DIO_PortConfig(hcard, Channel_P1A, OUTPUT_PORT);
	

}

extern "C" __declspec(dllexport) void Card7296P1ARELAYOUTPUT(I16 hcard,U32 value)
{
//I16 hCard;
//int  nCardID=1; 
	// TODO: Add extra initialization here
		DO_WritePort( hcard, Channel_P1A, value );	
	

}

extern "C" __declspec(dllexport) void Card7296Realease(I16 hcard)
{
//I16 hCard;
//int  nCardID=1; 
	// TODO: Add extra initialization here
		Release_Card(hcard);
	

}


