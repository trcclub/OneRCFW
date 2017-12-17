/**
 *******************************************************************************
 *      ______  _   __  ______  ____     ______        ___    ______   ____
 *     / __  / / \ / / / ____/ / __ \   /  ___/       /  /   /_   _/  / __ \
 *    / /_/ / /   \ / / ____/ /  -- /  /  /__   __   /  /__  _/  /_  / __ <
 *   /_____/ /_/ \_/ /_____/ /__/ \_\ /_____/  /_/  /_____/ /_____/ /_____/
 *
 *       A amateur remote control software library. Use at your own risk.
 *
 * @file    crc_ccitt.h
 *
 * @brief   CRC-16-CCITT (based on Mavlink method):
 *
 * @author  Y.S.Kuo in Hsinchu
 *******************************************************************************
 */

#ifndef CRC_CCITT_H_
#define CRC_CCITT_H_


/*
 *******************************************************************************
 * Constant value definition
 *******************************************************************************
 */

#define CRC_INIT_VAL    0xFFFF


/*
 *******************************************************************************
 * Data type definition
 *******************************************************************************
 */


/*
 *******************************************************************************
 * Global variables
 *******************************************************************************
 */


/*
 *******************************************************************************
 * Public functions declaration
 *******************************************************************************
 */


/*
 *******************************************************************************
 * Private functions declaration
 *******************************************************************************
 */


/*
 *******************************************************************************
 * Public functions
 *******************************************************************************
 */

uint16_t CRC_Accumulate(uint8_t data, uint16_t accum_crc);
uint16_t CRC_AccumulateLoop(uint8_t *p_data, uint8_t data_size, uint16_t accum_crc);
uint16_t CRC_Calculate(uint8_t *p_data, uint8_t data_size);



/*
 *******************************************************************************
 * Private functions
 *******************************************************************************
 */


#endif // CRC_CCITT_H_