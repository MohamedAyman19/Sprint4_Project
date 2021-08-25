/*
 * Sensor_Int.c
 *
 * Created: 16-Aug-21 7:22:31 PM
 *  Author: Ayman
 */ 

/******************************************************************************
*                              INCLUDES										  *
*******************************************************************************/
#include "Sensing_Int.h"

/******************************************************************************
*                              LOCAL MACROS									  *
*******************************************************************************/
#define MIN_DISTANCE		2
#define MAX_DISTANCE		400

/******************************************************************************
*						GLOBAL EXTERN VARIABLES								  *
*******************************************************************************/
extern float32_t gf32o_SensorDistance;

/******************************************************************************
*                         APIS IMPLEMENTATION								  *
*******************************************************************************/
E_STATUS SensingGetDistance(ptr_float32_t Sensor_distance)
{
	
	if (Sensor_distance == NULL_PTR)
	{
		return E_NOK;
	}
	(*Sensor_distance)=gf32o_SensorDistance;
	return E_OK;
}
