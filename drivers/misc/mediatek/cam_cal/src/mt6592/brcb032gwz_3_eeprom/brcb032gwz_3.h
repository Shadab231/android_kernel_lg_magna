/*****************************************************************************
 *
 * Filename:
 * ---------
 *   S-24CS64A.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 *   Header file of CAM_CAL driver
 *
 *
 * Author:
 * -------
 *   Ronnie Lai (MTK01420)
 *
 *============================================================================*/
#ifndef __CAM_CAL_H
#define __CAM_CAL_H

#define CAM_CAL_DEV_MAJOR_NUMBER 226

/* CAM_CAL READ/WRITE ID */
#define BRCB032GWZ_3_DEVICE_ID							0xA0


/* extern int iReadRegI2C(u8 *a_pSendData , u16 a_sizeSendData, u8 * a_pRecvData, u16 a_sizeRecvData, u16 i2cId); */
extern int iBurstReadRegI2C(u8 *a_pSendData, u16 a_sizeSendData, u8 *a_pRecvData,
			    u16 a_sizeRecvData, u16 i2cId);
/* extern int iWriteRegI2C(u8 *a_pSendData , u16 a_sizeSendData, u16 i2cId); */
/* extern int iReadReg(u16 a_u2Addr , u8 * a_puBuff , u16 i2cId); */
#endif /* __CAM_CAL_H */

