/*
 * led_display.c
 *
 *  Created on: Dec 11, 2024
 *      Author: thinkie
 */

#include "led_display.h"

void display7SEG_Mode(int counter) {
    switch (counter) {
        case 0:
            HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
            HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
            HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
            HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
            HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, RESET);
            HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, RESET);
            HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, SET);
            break;
        case 1:
            HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, SET);
            HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
            HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
            HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, SET);
            HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, SET);
            HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, SET);
            HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, SET);
            break;
        case 2:
            HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
            HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
            HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, SET);
            HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
            HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, RESET);
            HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, SET);
            HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, RESET);
            break;
        case 3:
            HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
            HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
            HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
            HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
            HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, SET);
            HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, SET);
            HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, RESET);
            break;
        case 4:
            HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, SET);
            HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
            HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
            HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, SET);
            HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, SET);
            HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, RESET);
            HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, RESET);
            break;
        case 5:
            HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
            HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, SET);
            HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
            HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
            HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, SET);
            HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, RESET);
            HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, RESET);
            break;
        case 6:
            HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
            HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, SET);
            HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
            HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
            HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, RESET);
            HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, RESET);
            HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, RESET);
            break;
        case 7:
            HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
            HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
            HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
            HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, SET);
            HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, SET);
            HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, SET);
            HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, SET);
            break;
        case 8:
            HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
            HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
            HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
            HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
            HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, RESET);
            HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, RESET);
            HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, RESET);
            break;
        case 9:
            HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
            HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
            HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
            HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
            HAL_GPIO_WritePin(MODE_E_GPIO_Port, MODE_E_Pin, SET);
            HAL_GPIO_WritePin(MODE_F_GPIO_Port, MODE_F_Pin, RESET);
            HAL_GPIO_WritePin(MODE_G_GPIO_Port, MODE_G_Pin, RESET);
            break;
        default:
            break;
    }
}
void display7SEG_Value(int counter) {
    switch (counter) {
        case 0:
            HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, SET);
            break;
        case 1:
            HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, SET);
            HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, SET);
            HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, SET);
            HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, SET);
            HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, SET);
            break;
        case 2:
            HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, SET);
            HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, SET);
            HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, RESET);
            break;
        case 3:
            HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, SET);
            HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, SET);
            HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, RESET);
            break;
        case 4:
            HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, SET);
            HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, SET);
            HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, SET);
            HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, RESET);
            break;
        case 5:
            HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, SET);
            HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, SET);
            HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, RESET);
            break;
        case 6:
            HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, SET);
            HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, RESET);
            break;
        case 7:
            HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, SET);
            HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, SET);
            HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, SET);
            HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, SET);
            break;
        case 8:
            HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, RESET);
            break;
        case 9:
            HAL_GPIO_WritePin(VALUE_A_GPIO_Port, VALUE_A_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_B_GPIO_Port, VALUE_B_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_C_GPIO_Port, VALUE_C_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_D_GPIO_Port, VALUE_D_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_E_GPIO_Port, VALUE_E_Pin, SET);
            HAL_GPIO_WritePin(VALUE_F_GPIO_Port, VALUE_F_Pin, RESET);
            HAL_GPIO_WritePin(VALUE_G_GPIO_Port, VALUE_G_Pin, RESET);
            break;
        default:
            break;
    }
}

void update7SEG_Mode(int index, int data) {
	switch (index) {
	case MODE_0_7SEG:
		// Display the first 7 SEG led to display MODE
		HAL_GPIO_WritePin(EN_MODE_0_GPIO_Port, EN_MODE_0_Pin, RESET);
		HAL_GPIO_WritePin(EN_MODE_1_GPIO_Port, EN_MODE_1_Pin, SET);
		display7SEG_Mode(data / 10);
		break;
	case MODE_1_7SEG:
		// Display the second 7 SEG led to display MODE
		HAL_GPIO_WritePin(EN_MODE_0_GPIO_Port, EN_MODE_0_Pin, SET);
		HAL_GPIO_WritePin(EN_MODE_1_GPIO_Port, EN_MODE_1_Pin, RESET);
		display7SEG_Mode(data % 10);
		break;
	default:
		break;
	}
}

void update7SEG_Value(int index, int data) {
	switch (index) {
	case VALUE_0_7SEG:
		// Display the first 7 SEG led to display VALUE
		HAL_GPIO_WritePin(EN_VAL_0_GPIO_Port, EN_VAL_0_Pin, RESET);
		HAL_GPIO_WritePin(EN_VAL_1_GPIO_Port, EN_VAL_1_Pin, SET);
		display7SEG_Value(data / 10);
		break;
	case VALUE_1_7SEG:
		// Display the second 7 SEG led to display VALUE
		HAL_GPIO_WritePin(EN_VAL_0_GPIO_Port, EN_VAL_0_Pin, SET);
		HAL_GPIO_WritePin(EN_VAL_1_GPIO_Port, EN_VAL_1_Pin, RESET);
		display7SEG_Value(data % 10);
		break;
	default:
		break;
	}
}

void segRun1() {
	update7SEG_Mode(MODE_0_7SEG, segModeTime);
	update7SEG_Value(VALUE_0_7SEG, segValueTime);
}

void segRun2() {
	update7SEG_Mode(MODE_1_7SEG, segModeTime);
	update7SEG_Value(VALUE_1_7SEG, segValueTime);
}
