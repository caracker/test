#ifndef __HEAD_H
#define __HEAD_H	

//*************************************************//
//�����Ķ��壬�޸ı�������ͬ���޸�head_extern.h
//***********************************************//

BYTE	Sys_Flag;
BIT		f_work		:	Sys_Flag.0;		//���ػ�
BIT		f_charging	:	Sys_Flag.1;		//���
bit     f_key_scan	:	Sys_Flag.2;		//����ɨ��
bit     f_charging_full:Sys_Flag.3;		//����
bit     f_heating   :   sys_flag.4;
byte motor_state;		//��﹤��ģʽ0~7
byte count;//T16����
byte S1_count,s2_count,s3_count,s4_count,s5_count;//��������
word motor_time;
byte pwm_num;
WORD sleep_time;
word  led_time; 
byte  led_cnt,led_time2;
bit   f_low;
byte  low_cnt,low_time;
dword min30;
byte led_mode;
byte power_mode;
word motor_pwmtime;

word work_time;
#endif