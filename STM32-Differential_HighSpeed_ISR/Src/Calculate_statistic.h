#include "arm_math.h"

float Calculate_max(float *data);
float Calculate_FreqMax(float *data,int freqSettingValue, int8_t freq_index);

typedef struct Statistic_value
{
	float Statistic_max;
	float Statistic_min;
	float Statistic_var;
	float Statistic_rms;
	float Statistic_mean;
	float Statistic_std;
	float Statistic_crestFactor;
	float Statistic_FreqOvall;
	float Statistic_FreqPeak[20];

	float Statistic_max_Temp;
	float Statistic_min_Temp;
	float Statistic_var_Temp;
	float Statistic_rms_Temp;
	float Statistic_mean_Temp;
	float Statistic_std_Temp;
	float Statistic_crestFactor_Temp;
	float Statistic_FreqOvall_Temp;

}Sv;

struct Freq_settingValue
{
	int freq1;
	int freq2;
	int freq3;
	int freq4;
	int freq5;
	int freq6;
	int freq7;
	int freq8;
	int freq9;
	int freq10;
	int freq11;
	int freq12;
	int freq13;
	int freq14;

}freq_settingValue;


Sv statistic_value;
