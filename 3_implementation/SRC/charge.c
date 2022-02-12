#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



float charge(int train_num,int num_of_seats)
{
	float charges[10] = {5000.0, 5000.0, 4500.0, 4500.0, 4000.0, 4000.0, 3500.0, 3500.0, 6000.0, 6000.0};
	int idx = train_num -1000;
	if ((idx) < 10){
		return charges[idx] * num_of_seats;
	}
}