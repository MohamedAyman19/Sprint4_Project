/*
 * BCM_Interference.c
 *
 * Created: 31-Aug-21 2:20:05 AM
 *  Author: ayman
 */ 
/******************************************************************************
*                              INCLUDES										  *
*******************************************************************************/
#include "BCM_Interference.h"
extern ptr_uint8_t gpu8i_data;
extern uint8_t gu8i_RxID;
extern uint16_t gu16i_size;


/*

*/
/*

*/

/******************************************************************************
*                         APIS IMPLEMENTATION								  *
*******************************************************************************/


E_STATUS BCM_SetData(ptr_uint8_t INT_data)
{
	gpu8i_data=INT_data;
	return E_OK;
}
E_STATUS BCM_SetReciever(uint8_t u8_INT_RxID)
{
	gu8i_RxID=u8_INT_RxID;
	return E_OK;
}
E_STATUS BCM_SetSize(uint16_t u16_INT_size)
{
	gu16i_size=u16_INT_size;
	return E_OK;
}