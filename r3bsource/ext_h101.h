/********************************************************
 *
 * Structure for ext_data_fetch_event() filling.
 *
 * Do not edit - automatically generated.
 */

#ifndef __GUARD_H101_EXT_H101_H__
#define __GUARD_H101_EXT_H101_H__

#ifndef __CINT__
# include <stdint.h>
#else
/* For CINT (old version trouble with stdint.h): */
# ifndef uint32_t
typedef unsigned int uint32_t;
typedef          int  int32_t;
# endif
#endif
#ifndef EXT_STRUCT_CTRL
# define EXT_STRUCT_CTRL(x)
#endif

/********************************************************
 *
 * Plain structure (layout as ntuple/root file):
 */

typedef struct EXT_STR_h101_t
{
  /* UNPACK */
  uint32_t TRIGGER /* [0,15] */;
  uint32_t EVENTNO /* [-1,-1] */;
  /* RAW */
  uint32_t LOS1TFM /* [1,4] */;
  uint32_t LOS1TFMI[4 EXT_STRUCT_CTRL(LOS1TFM)] /* [1,4] */;
  uint32_t LOS1TFME[4 EXT_STRUCT_CTRL(LOS1TFM)] /* [1,40] */;
  uint32_t LOS1TF /* [0,40] */;
  uint32_t LOS1TFv[40 EXT_STRUCT_CTRL(LOS1TF)] /* [0,65535] */;
  uint32_t LOS1TCM /* [1,4] */;
  uint32_t LOS1TCMI[4 EXT_STRUCT_CTRL(LOS1TCM)] /* [1,4] */;
  uint32_t LOS1TCME[4 EXT_STRUCT_CTRL(LOS1TCM)] /* [1,40] */;
  uint32_t LOS1TC /* [0,40] */;
  uint32_t LOS1TCv[40 EXT_STRUCT_CTRL(LOS1TC)] /* [0,65535] */;
  uint32_t TOFD_P1T1TFLM /* [1,6] */;
  uint32_t TOFD_P1T1TFLMI[6 EXT_STRUCT_CTRL(TOFD_P1T1TFLM)] /* [1,6] */;
  uint32_t TOFD_P1T1TFLME[6 EXT_STRUCT_CTRL(TOFD_P1T1TFLM)] /* [1,60] */;
  uint32_t TOFD_P1T1TFL /* [0,60] */;
  uint32_t TOFD_P1T1TFLv[60 EXT_STRUCT_CTRL(TOFD_P1T1TFL)] /* [0,65535] */;
  uint32_t TOFD_P1T1TFTM /* [1,6] */;
  uint32_t TOFD_P1T1TFTMI[6 EXT_STRUCT_CTRL(TOFD_P1T1TFTM)] /* [1,6] */;
  uint32_t TOFD_P1T1TFTME[6 EXT_STRUCT_CTRL(TOFD_P1T1TFTM)] /* [1,60] */;
  uint32_t TOFD_P1T1TFT /* [0,60] */;
  uint32_t TOFD_P1T1TFTv[60 EXT_STRUCT_CTRL(TOFD_P1T1TFT)] /* [0,65535] */;
  uint32_t TOFD_P1T1TCLM /* [1,6] */;
  uint32_t TOFD_P1T1TCLMI[6 EXT_STRUCT_CTRL(TOFD_P1T1TCLM)] /* [1,6] */;
  uint32_t TOFD_P1T1TCLME[6 EXT_STRUCT_CTRL(TOFD_P1T1TCLM)] /* [1,60] */;
  uint32_t TOFD_P1T1TCL /* [0,60] */;
  uint32_t TOFD_P1T1TCLv[60 EXT_STRUCT_CTRL(TOFD_P1T1TCL)] /* [0,65535] */;
  uint32_t TOFD_P1T1TCTM /* [1,6] */;
  uint32_t TOFD_P1T1TCTMI[6 EXT_STRUCT_CTRL(TOFD_P1T1TCTM)] /* [1,6] */;
  uint32_t TOFD_P1T1TCTME[6 EXT_STRUCT_CTRL(TOFD_P1T1TCTM)] /* [1,60] */;
  uint32_t TOFD_P1T1TCT /* [0,60] */;
  uint32_t TOFD_P1T1TCTv[60 EXT_STRUCT_CTRL(TOFD_P1T1TCT)] /* [0,65535] */;
  uint32_t TOFD_P1T2TFLM /* [1,6] */;
  uint32_t TOFD_P1T2TFLMI[6 EXT_STRUCT_CTRL(TOFD_P1T2TFLM)] /* [1,6] */;
  uint32_t TOFD_P1T2TFLME[6 EXT_STRUCT_CTRL(TOFD_P1T2TFLM)] /* [1,60] */;
  uint32_t TOFD_P1T2TFL /* [0,60] */;
  uint32_t TOFD_P1T2TFLv[60 EXT_STRUCT_CTRL(TOFD_P1T2TFL)] /* [0,65535] */;
  uint32_t TOFD_P1T2TFTM /* [1,6] */;
  uint32_t TOFD_P1T2TFTMI[6 EXT_STRUCT_CTRL(TOFD_P1T2TFTM)] /* [1,6] */;
  uint32_t TOFD_P1T2TFTME[6 EXT_STRUCT_CTRL(TOFD_P1T2TFTM)] /* [1,60] */;
  uint32_t TOFD_P1T2TFT /* [0,60] */;
  uint32_t TOFD_P1T2TFTv[60 EXT_STRUCT_CTRL(TOFD_P1T2TFT)] /* [0,65535] */;
  uint32_t TOFD_P1T2TCLM /* [1,6] */;
  uint32_t TOFD_P1T2TCLMI[6 EXT_STRUCT_CTRL(TOFD_P1T2TCLM)] /* [1,6] */;
  uint32_t TOFD_P1T2TCLME[6 EXT_STRUCT_CTRL(TOFD_P1T2TCLM)] /* [1,60] */;
  uint32_t TOFD_P1T2TCL /* [0,60] */;
  uint32_t TOFD_P1T2TCLv[60 EXT_STRUCT_CTRL(TOFD_P1T2TCL)] /* [0,65535] */;
  uint32_t TOFD_P1T2TCTM /* [1,6] */;
  uint32_t TOFD_P1T2TCTMI[6 EXT_STRUCT_CTRL(TOFD_P1T2TCTM)] /* [1,6] */;
  uint32_t TOFD_P1T2TCTME[6 EXT_STRUCT_CTRL(TOFD_P1T2TCTM)] /* [1,60] */;
  uint32_t TOFD_P1T2TCT /* [0,60] */;
  uint32_t TOFD_P1T2TCTv[60 EXT_STRUCT_CTRL(TOFD_P1T2TCT)] /* [0,65535] */;
  uint32_t TOFD_P2T1TFLM /* [1,6] */;
  uint32_t TOFD_P2T1TFLMI[6 EXT_STRUCT_CTRL(TOFD_P2T1TFLM)] /* [1,6] */;
  uint32_t TOFD_P2T1TFLME[6 EXT_STRUCT_CTRL(TOFD_P2T1TFLM)] /* [1,60] */;
  uint32_t TOFD_P2T1TFL /* [0,60] */;
  uint32_t TOFD_P2T1TFLv[60 EXT_STRUCT_CTRL(TOFD_P2T1TFL)] /* [0,65535] */;
  uint32_t TOFD_P2T1TFTM /* [1,6] */;
  uint32_t TOFD_P2T1TFTMI[6 EXT_STRUCT_CTRL(TOFD_P2T1TFTM)] /* [1,6] */;
  uint32_t TOFD_P2T1TFTME[6 EXT_STRUCT_CTRL(TOFD_P2T1TFTM)] /* [1,60] */;
  uint32_t TOFD_P2T1TFT /* [0,60] */;
  uint32_t TOFD_P2T1TFTv[60 EXT_STRUCT_CTRL(TOFD_P2T1TFT)] /* [0,65535] */;
  uint32_t TOFD_P2T1TCLM /* [1,6] */;
  uint32_t TOFD_P2T1TCLMI[6 EXT_STRUCT_CTRL(TOFD_P2T1TCLM)] /* [1,6] */;
  uint32_t TOFD_P2T1TCLME[6 EXT_STRUCT_CTRL(TOFD_P2T1TCLM)] /* [1,60] */;
  uint32_t TOFD_P2T1TCL /* [0,60] */;
  uint32_t TOFD_P2T1TCLv[60 EXT_STRUCT_CTRL(TOFD_P2T1TCL)] /* [0,65535] */;
  uint32_t TOFD_P2T1TCTM /* [1,6] */;
  uint32_t TOFD_P2T1TCTMI[6 EXT_STRUCT_CTRL(TOFD_P2T1TCTM)] /* [1,6] */;
  uint32_t TOFD_P2T1TCTME[6 EXT_STRUCT_CTRL(TOFD_P2T1TCTM)] /* [1,60] */;
  uint32_t TOFD_P2T1TCT /* [0,60] */;
  uint32_t TOFD_P2T1TCTv[60 EXT_STRUCT_CTRL(TOFD_P2T1TCT)] /* [0,65535] */;
  uint32_t TOFD_P2T2TFLM /* [1,6] */;
  uint32_t TOFD_P2T2TFLMI[6 EXT_STRUCT_CTRL(TOFD_P2T2TFLM)] /* [1,6] */;
  uint32_t TOFD_P2T2TFLME[6 EXT_STRUCT_CTRL(TOFD_P2T2TFLM)] /* [1,60] */;
  uint32_t TOFD_P2T2TFL /* [0,60] */;
  uint32_t TOFD_P2T2TFLv[60 EXT_STRUCT_CTRL(TOFD_P2T2TFL)] /* [0,65535] */;
  uint32_t TOFD_P2T2TFTM /* [1,6] */;
  uint32_t TOFD_P2T2TFTMI[6 EXT_STRUCT_CTRL(TOFD_P2T2TFTM)] /* [1,6] */;
  uint32_t TOFD_P2T2TFTME[6 EXT_STRUCT_CTRL(TOFD_P2T2TFTM)] /* [1,60] */;
  uint32_t TOFD_P2T2TFT /* [0,60] */;
  uint32_t TOFD_P2T2TFTv[60 EXT_STRUCT_CTRL(TOFD_P2T2TFT)] /* [0,65535] */;
  uint32_t TOFD_P2T2TCLM /* [1,6] */;
  uint32_t TOFD_P2T2TCLMI[6 EXT_STRUCT_CTRL(TOFD_P2T2TCLM)] /* [1,6] */;
  uint32_t TOFD_P2T2TCLME[6 EXT_STRUCT_CTRL(TOFD_P2T2TCLM)] /* [1,60] */;
  uint32_t TOFD_P2T2TCL /* [0,60] */;
  uint32_t TOFD_P2T2TCLv[60 EXT_STRUCT_CTRL(TOFD_P2T2TCL)] /* [0,65535] */;
  uint32_t TOFD_P2T2TCTM /* [1,6] */;
  uint32_t TOFD_P2T2TCTMI[6 EXT_STRUCT_CTRL(TOFD_P2T2TCTM)] /* [1,6] */;
  uint32_t TOFD_P2T2TCTME[6 EXT_STRUCT_CTRL(TOFD_P2T2TCTM)] /* [1,60] */;
  uint32_t TOFD_P2T2TCT /* [0,60] */;
  uint32_t TOFD_P2T2TCTv[60 EXT_STRUCT_CTRL(TOFD_P2T2TCT)] /* [0,65535] */;
  uint32_t TOFD_P3T1TFLM /* [1,6] */;
  uint32_t TOFD_P3T1TFLMI[6 EXT_STRUCT_CTRL(TOFD_P3T1TFLM)] /* [1,6] */;
  uint32_t TOFD_P3T1TFLME[6 EXT_STRUCT_CTRL(TOFD_P3T1TFLM)] /* [1,60] */;
  uint32_t TOFD_P3T1TFL /* [0,60] */;
  uint32_t TOFD_P3T1TFLv[60 EXT_STRUCT_CTRL(TOFD_P3T1TFL)] /* [0,65535] */;
  uint32_t TOFD_P3T1TFTM /* [1,6] */;
  uint32_t TOFD_P3T1TFTMI[6 EXT_STRUCT_CTRL(TOFD_P3T1TFTM)] /* [1,6] */;
  uint32_t TOFD_P3T1TFTME[6 EXT_STRUCT_CTRL(TOFD_P3T1TFTM)] /* [1,60] */;
  uint32_t TOFD_P3T1TFT /* [0,60] */;
  uint32_t TOFD_P3T1TFTv[60 EXT_STRUCT_CTRL(TOFD_P3T1TFT)] /* [0,65535] */;
  uint32_t TOFD_P3T1TCLM /* [1,6] */;
  uint32_t TOFD_P3T1TCLMI[6 EXT_STRUCT_CTRL(TOFD_P3T1TCLM)] /* [1,6] */;
  uint32_t TOFD_P3T1TCLME[6 EXT_STRUCT_CTRL(TOFD_P3T1TCLM)] /* [1,60] */;
  uint32_t TOFD_P3T1TCL /* [0,60] */;
  uint32_t TOFD_P3T1TCLv[60 EXT_STRUCT_CTRL(TOFD_P3T1TCL)] /* [0,65535] */;
  uint32_t TOFD_P3T1TCTM /* [1,6] */;
  uint32_t TOFD_P3T1TCTMI[6 EXT_STRUCT_CTRL(TOFD_P3T1TCTM)] /* [1,6] */;
  uint32_t TOFD_P3T1TCTME[6 EXT_STRUCT_CTRL(TOFD_P3T1TCTM)] /* [1,60] */;
  uint32_t TOFD_P3T1TCT /* [0,60] */;
  uint32_t TOFD_P3T1TCTv[60 EXT_STRUCT_CTRL(TOFD_P3T1TCT)] /* [0,65535] */;
  uint32_t TOFD_P3T2TFLM /* [1,6] */;
  uint32_t TOFD_P3T2TFLMI[6 EXT_STRUCT_CTRL(TOFD_P3T2TFLM)] /* [1,6] */;
  uint32_t TOFD_P3T2TFLME[6 EXT_STRUCT_CTRL(TOFD_P3T2TFLM)] /* [1,60] */;
  uint32_t TOFD_P3T2TFL /* [0,60] */;
  uint32_t TOFD_P3T2TFLv[60 EXT_STRUCT_CTRL(TOFD_P3T2TFL)] /* [0,65535] */;
  uint32_t TOFD_P3T2TFTM /* [1,6] */;
  uint32_t TOFD_P3T2TFTMI[6 EXT_STRUCT_CTRL(TOFD_P3T2TFTM)] /* [1,6] */;
  uint32_t TOFD_P3T2TFTME[6 EXT_STRUCT_CTRL(TOFD_P3T2TFTM)] /* [1,60] */;
  uint32_t TOFD_P3T2TFT /* [0,60] */;
  uint32_t TOFD_P3T2TFTv[60 EXT_STRUCT_CTRL(TOFD_P3T2TFT)] /* [0,65535] */;
  uint32_t TOFD_P3T2TCLM /* [1,6] */;
  uint32_t TOFD_P3T2TCLMI[6 EXT_STRUCT_CTRL(TOFD_P3T2TCLM)] /* [1,6] */;
  uint32_t TOFD_P3T2TCLME[6 EXT_STRUCT_CTRL(TOFD_P3T2TCLM)] /* [1,60] */;
  uint32_t TOFD_P3T2TCL /* [0,60] */;
  uint32_t TOFD_P3T2TCLv[60 EXT_STRUCT_CTRL(TOFD_P3T2TCL)] /* [0,65535] */;
  uint32_t TOFD_P3T2TCTM /* [1,6] */;
  uint32_t TOFD_P3T2TCTMI[6 EXT_STRUCT_CTRL(TOFD_P3T2TCTM)] /* [1,6] */;
  uint32_t TOFD_P3T2TCTME[6 EXT_STRUCT_CTRL(TOFD_P3T2TCTM)] /* [1,60] */;
  uint32_t TOFD_P3T2TCT /* [0,60] */;
  uint32_t TOFD_P3T2TCTv[60 EXT_STRUCT_CTRL(TOFD_P3T2TCT)] /* [0,65535] */;
  uint32_t TOFD_P4T1TFLM /* [1,6] */;
  uint32_t TOFD_P4T1TFLMI[6 EXT_STRUCT_CTRL(TOFD_P4T1TFLM)] /* [1,6] */;
  uint32_t TOFD_P4T1TFLME[6 EXT_STRUCT_CTRL(TOFD_P4T1TFLM)] /* [1,60] */;
  uint32_t TOFD_P4T1TFL /* [0,60] */;
  uint32_t TOFD_P4T1TFLv[60 EXT_STRUCT_CTRL(TOFD_P4T1TFL)] /* [0,65535] */;
  uint32_t TOFD_P4T1TFTM /* [1,6] */;
  uint32_t TOFD_P4T1TFTMI[6 EXT_STRUCT_CTRL(TOFD_P4T1TFTM)] /* [1,6] */;
  uint32_t TOFD_P4T1TFTME[6 EXT_STRUCT_CTRL(TOFD_P4T1TFTM)] /* [1,60] */;
  uint32_t TOFD_P4T1TFT /* [0,60] */;
  uint32_t TOFD_P4T1TFTv[60 EXT_STRUCT_CTRL(TOFD_P4T1TFT)] /* [0,65535] */;
  uint32_t TOFD_P4T1TCLM /* [1,6] */;
  uint32_t TOFD_P4T1TCLMI[6 EXT_STRUCT_CTRL(TOFD_P4T1TCLM)] /* [1,6] */;
  uint32_t TOFD_P4T1TCLME[6 EXT_STRUCT_CTRL(TOFD_P4T1TCLM)] /* [1,60] */;
  uint32_t TOFD_P4T1TCL /* [0,60] */;
  uint32_t TOFD_P4T1TCLv[60 EXT_STRUCT_CTRL(TOFD_P4T1TCL)] /* [0,65535] */;
  uint32_t TOFD_P4T1TCTM /* [1,6] */;
  uint32_t TOFD_P4T1TCTMI[6 EXT_STRUCT_CTRL(TOFD_P4T1TCTM)] /* [1,6] */;
  uint32_t TOFD_P4T1TCTME[6 EXT_STRUCT_CTRL(TOFD_P4T1TCTM)] /* [1,60] */;
  uint32_t TOFD_P4T1TCT /* [0,60] */;
  uint32_t TOFD_P4T1TCTv[60 EXT_STRUCT_CTRL(TOFD_P4T1TCT)] /* [0,65535] */;
  uint32_t TOFD_P4T2TFLM /* [1,6] */;
  uint32_t TOFD_P4T2TFLMI[6 EXT_STRUCT_CTRL(TOFD_P4T2TFLM)] /* [1,6] */;
  uint32_t TOFD_P4T2TFLME[6 EXT_STRUCT_CTRL(TOFD_P4T2TFLM)] /* [1,60] */;
  uint32_t TOFD_P4T2TFL /* [0,60] */;
  uint32_t TOFD_P4T2TFLv[60 EXT_STRUCT_CTRL(TOFD_P4T2TFL)] /* [0,65535] */;
  uint32_t TOFD_P4T2TFTM /* [1,6] */;
  uint32_t TOFD_P4T2TFTMI[6 EXT_STRUCT_CTRL(TOFD_P4T2TFTM)] /* [1,6] */;
  uint32_t TOFD_P4T2TFTME[6 EXT_STRUCT_CTRL(TOFD_P4T2TFTM)] /* [1,60] */;
  uint32_t TOFD_P4T2TFT /* [0,60] */;
  uint32_t TOFD_P4T2TFTv[60 EXT_STRUCT_CTRL(TOFD_P4T2TFT)] /* [0,65535] */;
  uint32_t TOFD_P4T2TCLM /* [1,6] */;
  uint32_t TOFD_P4T2TCLMI[6 EXT_STRUCT_CTRL(TOFD_P4T2TCLM)] /* [1,6] */;
  uint32_t TOFD_P4T2TCLME[6 EXT_STRUCT_CTRL(TOFD_P4T2TCLM)] /* [1,60] */;
  uint32_t TOFD_P4T2TCL /* [0,60] */;
  uint32_t TOFD_P4T2TCLv[60 EXT_STRUCT_CTRL(TOFD_P4T2TCL)] /* [0,65535] */;
  uint32_t TOFD_P4T2TCTM /* [1,6] */;
  uint32_t TOFD_P4T2TCTMI[6 EXT_STRUCT_CTRL(TOFD_P4T2TCTM)] /* [1,6] */;
  uint32_t TOFD_P4T2TCTME[6 EXT_STRUCT_CTRL(TOFD_P4T2TCTM)] /* [1,60] */;
  uint32_t TOFD_P4T2TCT /* [0,60] */;
  uint32_t TOFD_P4T2TCTv[60 EXT_STRUCT_CTRL(TOFD_P4T2TCT)] /* [0,65535] */;
  uint32_t PSPX1M /* [1,65] */;
  uint32_t PSPX1MI[65 EXT_STRUCT_CTRL(PSPX1M)] /* [1,65] */;
  uint32_t PSPX1ME[65 EXT_STRUCT_CTRL(PSPX1M)] /* [1,650] */;
  uint32_t PSPX1 /* [0,650] */;
  uint32_t PSPX1v[650 EXT_STRUCT_CTRL(PSPX1)] /* [-1,-1] */;
  uint32_t PSPX2M /* [1,65] */;
  uint32_t PSPX2MI[65 EXT_STRUCT_CTRL(PSPX2M)] /* [1,65] */;
  uint32_t PSPX2ME[65 EXT_STRUCT_CTRL(PSPX2M)] /* [1,650] */;
  uint32_t PSPX2 /* [0,650] */;
  uint32_t PSPX2v[650 EXT_STRUCT_CTRL(PSPX2)] /* [-1,-1] */;
  uint32_t PSPX3M /* [1,65] */;
  uint32_t PSPX3MI[65 EXT_STRUCT_CTRL(PSPX3M)] /* [1,65] */;
  uint32_t PSPX3ME[65 EXT_STRUCT_CTRL(PSPX3M)] /* [1,650] */;
  uint32_t PSPX3 /* [0,650] */;
  uint32_t PSPX3v[650 EXT_STRUCT_CTRL(PSPX3)] /* [-1,-1] */;
  uint32_t PSPX4M /* [1,65] */;
  uint32_t PSPX4MI[65 EXT_STRUCT_CTRL(PSPX4M)] /* [1,65] */;
  uint32_t PSPX4ME[65 EXT_STRUCT_CTRL(PSPX4M)] /* [1,650] */;
  uint32_t PSPX4 /* [0,650] */;
  uint32_t PSPX4v[650 EXT_STRUCT_CTRL(PSPX4)] /* [-1,-1] */;
  uint32_t PSPX5M /* [1,65] */;
  uint32_t PSPX5MI[65 EXT_STRUCT_CTRL(PSPX5M)] /* [1,65] */;
  uint32_t PSPX5ME[65 EXT_STRUCT_CTRL(PSPX5M)] /* [1,650] */;
  uint32_t PSPX5 /* [0,650] */;
  uint32_t PSPX5v[650 EXT_STRUCT_CTRL(PSPX5)] /* [-1,-1] */;
  uint32_t fiberfour1tM /* [1,16] */;
  uint32_t fiberfour1tMI[16 EXT_STRUCT_CTRL(fiberfour1tM)] /* [1,16] */;
  uint32_t fiberfour1tME[16 EXT_STRUCT_CTRL(fiberfour1tM)] /* [1,160] */;
  uint32_t fiberfour1t /* [0,160] */;
  uint32_t fiberfour1tv[160 EXT_STRUCT_CTRL(fiberfour1t)] /* [0,65535] */;
  uint32_t fiberfour1EM /* [1,16] */;
  uint32_t fiberfour1EMI[16 EXT_STRUCT_CTRL(fiberfour1EM)] /* [1,16] */;
  uint32_t fiberfour1EME[16 EXT_STRUCT_CTRL(fiberfour1EM)] /* [1,160] */;
  uint32_t fiberfour1E /* [0,160] */;
  uint32_t fiberfour1Ev[160 EXT_STRUCT_CTRL(fiberfour1E)] /* [-1,-1] */;
  uint32_t fiberfour2tM /* [1,16] */;
  uint32_t fiberfour2tMI[16 EXT_STRUCT_CTRL(fiberfour2tM)] /* [1,16] */;
  uint32_t fiberfour2tME[16 EXT_STRUCT_CTRL(fiberfour2tM)] /* [1,160] */;
  uint32_t fiberfour2t /* [0,160] */;
  uint32_t fiberfour2tv[160 EXT_STRUCT_CTRL(fiberfour2t)] /* [0,65535] */;
  uint32_t fiberfour2EM /* [1,16] */;
  uint32_t fiberfour2EMI[16 EXT_STRUCT_CTRL(fiberfour2EM)] /* [1,16] */;
  uint32_t fiberfour2EME[16 EXT_STRUCT_CTRL(fiberfour2EM)] /* [1,160] */;
  uint32_t fiberfour2E /* [0,160] */;
  uint32_t fiberfour2Ev[160 EXT_STRUCT_CTRL(fiberfour2E)] /* [-1,-1] */;
  uint32_t fiberfour3tM /* [1,16] */;
  uint32_t fiberfour3tMI[16 EXT_STRUCT_CTRL(fiberfour3tM)] /* [1,16] */;
  uint32_t fiberfour3tME[16 EXT_STRUCT_CTRL(fiberfour3tM)] /* [1,160] */;
  uint32_t fiberfour3t /* [0,160] */;
  uint32_t fiberfour3tv[160 EXT_STRUCT_CTRL(fiberfour3t)] /* [0,65535] */;
  uint32_t fiberfour3EM /* [1,16] */;
  uint32_t fiberfour3EMI[16 EXT_STRUCT_CTRL(fiberfour3EM)] /* [1,16] */;
  uint32_t fiberfour3EME[16 EXT_STRUCT_CTRL(fiberfour3EM)] /* [1,160] */;
  uint32_t fiberfour3E /* [0,160] */;
  uint32_t fiberfour3Ev[160 EXT_STRUCT_CTRL(fiberfour3E)] /* [-1,-1] */;
  uint32_t fiberfour4tM /* [1,16] */;
  uint32_t fiberfour4tMI[16 EXT_STRUCT_CTRL(fiberfour4tM)] /* [1,16] */;
  uint32_t fiberfour4tME[16 EXT_STRUCT_CTRL(fiberfour4tM)] /* [1,160] */;
  uint32_t fiberfour4t /* [0,160] */;
  uint32_t fiberfour4tv[160 EXT_STRUCT_CTRL(fiberfour4t)] /* [0,65535] */;
  uint32_t fiberfour4EM /* [1,16] */;
  uint32_t fiberfour4EMI[16 EXT_STRUCT_CTRL(fiberfour4EM)] /* [1,16] */;
  uint32_t fiberfour4EME[16 EXT_STRUCT_CTRL(fiberfour4EM)] /* [1,160] */;
  uint32_t fiberfour4E /* [0,160] */;
  uint32_t fiberfour4Ev[160 EXT_STRUCT_CTRL(fiberfour4E)] /* [-1,-1] */;
  uint32_t fiberfour5tM /* [1,16] */;
  uint32_t fiberfour5tMI[16 EXT_STRUCT_CTRL(fiberfour5tM)] /* [1,16] */;
  uint32_t fiberfour5tME[16 EXT_STRUCT_CTRL(fiberfour5tM)] /* [1,160] */;
  uint32_t fiberfour5t /* [0,160] */;
  uint32_t fiberfour5tv[160 EXT_STRUCT_CTRL(fiberfour5t)] /* [0,65535] */;
  uint32_t fiberfour5EM /* [1,16] */;
  uint32_t fiberfour5EMI[16 EXT_STRUCT_CTRL(fiberfour5EM)] /* [1,16] */;
  uint32_t fiberfour5EME[16 EXT_STRUCT_CTRL(fiberfour5EM)] /* [1,160] */;
  uint32_t fiberfour5E /* [0,160] */;
  uint32_t fiberfour5Ev[160 EXT_STRUCT_CTRL(fiberfour5E)] /* [-1,-1] */;
  uint32_t fiberfour6tM /* [1,16] */;
  uint32_t fiberfour6tMI[16 EXT_STRUCT_CTRL(fiberfour6tM)] /* [1,16] */;
  uint32_t fiberfour6tME[16 EXT_STRUCT_CTRL(fiberfour6tM)] /* [1,160] */;
  uint32_t fiberfour6t /* [0,160] */;
  uint32_t fiberfour6tv[160 EXT_STRUCT_CTRL(fiberfour6t)] /* [0,65535] */;
  uint32_t fiberfour6EM /* [1,16] */;
  uint32_t fiberfour6EMI[16 EXT_STRUCT_CTRL(fiberfour6EM)] /* [1,16] */;
  uint32_t fiberfour6EME[16 EXT_STRUCT_CTRL(fiberfour6EM)] /* [1,160] */;
  uint32_t fiberfour6E /* [0,160] */;
  uint32_t fiberfour6Ev[160 EXT_STRUCT_CTRL(fiberfour6E)] /* [-1,-1] */;
  uint32_t fiberfour7tM /* [1,16] */;
  uint32_t fiberfour7tMI[16 EXT_STRUCT_CTRL(fiberfour7tM)] /* [1,16] */;
  uint32_t fiberfour7tME[16 EXT_STRUCT_CTRL(fiberfour7tM)] /* [1,160] */;
  uint32_t fiberfour7t /* [0,160] */;
  uint32_t fiberfour7tv[160 EXT_STRUCT_CTRL(fiberfour7t)] /* [0,65535] */;
  uint32_t fiberfour7EM /* [1,16] */;
  uint32_t fiberfour7EMI[16 EXT_STRUCT_CTRL(fiberfour7EM)] /* [1,16] */;
  uint32_t fiberfour7EME[16 EXT_STRUCT_CTRL(fiberfour7EM)] /* [1,160] */;
  uint32_t fiberfour7E /* [0,160] */;
  uint32_t fiberfour7Ev[160 EXT_STRUCT_CTRL(fiberfour7E)] /* [-1,-1] */;
  uint32_t fiberfour8tM /* [1,16] */;
  uint32_t fiberfour8tMI[16 EXT_STRUCT_CTRL(fiberfour8tM)] /* [1,16] */;
  uint32_t fiberfour8tME[16 EXT_STRUCT_CTRL(fiberfour8tM)] /* [1,160] */;
  uint32_t fiberfour8t /* [0,160] */;
  uint32_t fiberfour8tv[160 EXT_STRUCT_CTRL(fiberfour8t)] /* [0,65535] */;
  uint32_t fiberfour8EM /* [1,16] */;
  uint32_t fiberfour8EMI[16 EXT_STRUCT_CTRL(fiberfour8EM)] /* [1,16] */;
  uint32_t fiberfour8EME[16 EXT_STRUCT_CTRL(fiberfour8EM)] /* [1,160] */;
  uint32_t fiberfour8E /* [0,160] */;
  uint32_t fiberfour8Ev[160 EXT_STRUCT_CTRL(fiberfour8E)] /* [-1,-1] */;
  uint32_t fiberfour9tM /* [1,16] */;
  uint32_t fiberfour9tMI[16 EXT_STRUCT_CTRL(fiberfour9tM)] /* [1,16] */;
  uint32_t fiberfour9tME[16 EXT_STRUCT_CTRL(fiberfour9tM)] /* [1,160] */;
  uint32_t fiberfour9t /* [0,160] */;
  uint32_t fiberfour9tv[160 EXT_STRUCT_CTRL(fiberfour9t)] /* [0,65535] */;
  uint32_t fiberfour9EM /* [1,16] */;
  uint32_t fiberfour9EMI[16 EXT_STRUCT_CTRL(fiberfour9EM)] /* [1,16] */;
  uint32_t fiberfour9EME[16 EXT_STRUCT_CTRL(fiberfour9EM)] /* [1,160] */;
  uint32_t fiberfour9E /* [0,160] */;
  uint32_t fiberfour9Ev[160 EXT_STRUCT_CTRL(fiberfour9E)] /* [-1,-1] */;

} EXT_STR_h101;

/********************************************************
 *
 * Structure with multiple levels of arrays (partially)
 * recovered (recommended):
 */

typedef struct EXT_STR_h101_onion_t
{
  /* UNPACK */
  uint32_t TRIGGER;
  uint32_t EVENTNO;
  /* RAW */
  struct {
    uint32_t TFM;
    uint32_t TFMI[4 /* TFM */];
    uint32_t TFME[4 /* TFM */];
    uint32_t TF;
    uint32_t TFv[40 /* TF */];
    uint32_t TCM;
    uint32_t TCMI[4 /* TCM */];
    uint32_t TCME[4 /* TCM */];
    uint32_t TC;
    uint32_t TCv[40 /* TC */];
  } LOS[1];
  struct {
    struct {
      uint32_t TFLM;
      uint32_t TFLMI[6 /* TFLM */];
      uint32_t TFLME[6 /* TFLM */];
      uint32_t TFL;
      uint32_t TFLv[60 /* TFL */];
      uint32_t TFTM;
      uint32_t TFTMI[6 /* TFTM */];
      uint32_t TFTME[6 /* TFTM */];
      uint32_t TFT;
      uint32_t TFTv[60 /* TFT */];
      uint32_t TCLM;
      uint32_t TCLMI[6 /* TCLM */];
      uint32_t TCLME[6 /* TCLM */];
      uint32_t TCL;
      uint32_t TCLv[60 /* TCL */];
      uint32_t TCTM;
      uint32_t TCTMI[6 /* TCTM */];
      uint32_t TCTME[6 /* TCTM */];
      uint32_t TCT;
      uint32_t TCTv[60 /* TCT */];
    } T[2];
  } TOFD_P[4];
  struct {
    uint32_t M;
    uint32_t MI[65 /* M */];
    uint32_t ME[65 /* M */];
    uint32_t _;
    uint32_t v[650 /* _ */];
  } PSPX[5];
  struct {
    uint32_t tM;
    uint32_t tMI[16 /* tM */];
    uint32_t tME[16 /* tM */];
    uint32_t t;
    uint32_t tv[160 /* t */];
    uint32_t EM;
    uint32_t EMI[16 /* EM */];
    uint32_t EME[16 /* EM */];
    uint32_t E;
    uint32_t Ev[160 /* E */];
  } fiberfour[9];

} EXT_STR_h101_onion;

/*******************************************************/

#define EXT_STR_h101_ITEMS_INFO(ok,si,struct_t,printerr) do { \
  ok = 1; \
  /* UNPACK */ \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TRIGGER,                         UINT32,\
                    "TRIGGER",15); \
  EXT_STR_ITEM_INFO    (ok,si,struct_t,printerr,\
                     EVENTNO,                         UINT32,\
                    "EVENTNO"); \
  /* RAW */ \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     LOS1TFM,                         UINT32,\
                    "LOS1TFM",4); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS1TFMI,                        UINT32,\
                    "LOS1TFMI",                        "LOS1TFM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS1TFME,                        UINT32,\
                    "LOS1TFME",                        "LOS1TFM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     LOS1TF,                          UINT32,\
                    "LOS1TF",40); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS1TFv,                         UINT32,\
                    "LOS1TFv",                         "LOS1TF"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     LOS1TCM,                         UINT32,\
                    "LOS1TCM",4); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS1TCMI,                        UINT32,\
                    "LOS1TCMI",                        "LOS1TCM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS1TCME,                        UINT32,\
                    "LOS1TCME",                        "LOS1TCM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     LOS1TC,                          UINT32,\
                    "LOS1TC",40); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     LOS1TCv,                         UINT32,\
                    "LOS1TCv",                         "LOS1TC"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T1TFLM,                   UINT32,\
                    "TOFD_P1T1TFLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T1TFLMI,                  UINT32,\
                    "TOFD_P1T1TFLMI",                  "TOFD_P1T1TFLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T1TFLME,                  UINT32,\
                    "TOFD_P1T1TFLME",                  "TOFD_P1T1TFLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T1TFL,                    UINT32,\
                    "TOFD_P1T1TFL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T1TFLv,                   UINT32,\
                    "TOFD_P1T1TFLv",                   "TOFD_P1T1TFL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T1TFTM,                   UINT32,\
                    "TOFD_P1T1TFTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T1TFTMI,                  UINT32,\
                    "TOFD_P1T1TFTMI",                  "TOFD_P1T1TFTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T1TFTME,                  UINT32,\
                    "TOFD_P1T1TFTME",                  "TOFD_P1T1TFTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T1TFT,                    UINT32,\
                    "TOFD_P1T1TFT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T1TFTv,                   UINT32,\
                    "TOFD_P1T1TFTv",                   "TOFD_P1T1TFT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T1TCLM,                   UINT32,\
                    "TOFD_P1T1TCLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T1TCLMI,                  UINT32,\
                    "TOFD_P1T1TCLMI",                  "TOFD_P1T1TCLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T1TCLME,                  UINT32,\
                    "TOFD_P1T1TCLME",                  "TOFD_P1T1TCLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T1TCL,                    UINT32,\
                    "TOFD_P1T1TCL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T1TCLv,                   UINT32,\
                    "TOFD_P1T1TCLv",                   "TOFD_P1T1TCL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T1TCTM,                   UINT32,\
                    "TOFD_P1T1TCTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T1TCTMI,                  UINT32,\
                    "TOFD_P1T1TCTMI",                  "TOFD_P1T1TCTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T1TCTME,                  UINT32,\
                    "TOFD_P1T1TCTME",                  "TOFD_P1T1TCTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T1TCT,                    UINT32,\
                    "TOFD_P1T1TCT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T1TCTv,                   UINT32,\
                    "TOFD_P1T1TCTv",                   "TOFD_P1T1TCT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T2TFLM,                   UINT32,\
                    "TOFD_P1T2TFLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T2TFLMI,                  UINT32,\
                    "TOFD_P1T2TFLMI",                  "TOFD_P1T2TFLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T2TFLME,                  UINT32,\
                    "TOFD_P1T2TFLME",                  "TOFD_P1T2TFLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T2TFL,                    UINT32,\
                    "TOFD_P1T2TFL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T2TFLv,                   UINT32,\
                    "TOFD_P1T2TFLv",                   "TOFD_P1T2TFL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T2TFTM,                   UINT32,\
                    "TOFD_P1T2TFTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T2TFTMI,                  UINT32,\
                    "TOFD_P1T2TFTMI",                  "TOFD_P1T2TFTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T2TFTME,                  UINT32,\
                    "TOFD_P1T2TFTME",                  "TOFD_P1T2TFTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T2TFT,                    UINT32,\
                    "TOFD_P1T2TFT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T2TFTv,                   UINT32,\
                    "TOFD_P1T2TFTv",                   "TOFD_P1T2TFT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T2TCLM,                   UINT32,\
                    "TOFD_P1T2TCLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T2TCLMI,                  UINT32,\
                    "TOFD_P1T2TCLMI",                  "TOFD_P1T2TCLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T2TCLME,                  UINT32,\
                    "TOFD_P1T2TCLME",                  "TOFD_P1T2TCLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T2TCL,                    UINT32,\
                    "TOFD_P1T2TCL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T2TCLv,                   UINT32,\
                    "TOFD_P1T2TCLv",                   "TOFD_P1T2TCL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T2TCTM,                   UINT32,\
                    "TOFD_P1T2TCTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T2TCTMI,                  UINT32,\
                    "TOFD_P1T2TCTMI",                  "TOFD_P1T2TCTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T2TCTME,                  UINT32,\
                    "TOFD_P1T2TCTME",                  "TOFD_P1T2TCTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P1T2TCT,                    UINT32,\
                    "TOFD_P1T2TCT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P1T2TCTv,                   UINT32,\
                    "TOFD_P1T2TCTv",                   "TOFD_P1T2TCT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T1TFLM,                   UINT32,\
                    "TOFD_P2T1TFLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T1TFLMI,                  UINT32,\
                    "TOFD_P2T1TFLMI",                  "TOFD_P2T1TFLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T1TFLME,                  UINT32,\
                    "TOFD_P2T1TFLME",                  "TOFD_P2T1TFLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T1TFL,                    UINT32,\
                    "TOFD_P2T1TFL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T1TFLv,                   UINT32,\
                    "TOFD_P2T1TFLv",                   "TOFD_P2T1TFL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T1TFTM,                   UINT32,\
                    "TOFD_P2T1TFTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T1TFTMI,                  UINT32,\
                    "TOFD_P2T1TFTMI",                  "TOFD_P2T1TFTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T1TFTME,                  UINT32,\
                    "TOFD_P2T1TFTME",                  "TOFD_P2T1TFTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T1TFT,                    UINT32,\
                    "TOFD_P2T1TFT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T1TFTv,                   UINT32,\
                    "TOFD_P2T1TFTv",                   "TOFD_P2T1TFT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T1TCLM,                   UINT32,\
                    "TOFD_P2T1TCLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T1TCLMI,                  UINT32,\
                    "TOFD_P2T1TCLMI",                  "TOFD_P2T1TCLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T1TCLME,                  UINT32,\
                    "TOFD_P2T1TCLME",                  "TOFD_P2T1TCLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T1TCL,                    UINT32,\
                    "TOFD_P2T1TCL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T1TCLv,                   UINT32,\
                    "TOFD_P2T1TCLv",                   "TOFD_P2T1TCL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T1TCTM,                   UINT32,\
                    "TOFD_P2T1TCTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T1TCTMI,                  UINT32,\
                    "TOFD_P2T1TCTMI",                  "TOFD_P2T1TCTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T1TCTME,                  UINT32,\
                    "TOFD_P2T1TCTME",                  "TOFD_P2T1TCTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T1TCT,                    UINT32,\
                    "TOFD_P2T1TCT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T1TCTv,                   UINT32,\
                    "TOFD_P2T1TCTv",                   "TOFD_P2T1TCT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T2TFLM,                   UINT32,\
                    "TOFD_P2T2TFLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T2TFLMI,                  UINT32,\
                    "TOFD_P2T2TFLMI",                  "TOFD_P2T2TFLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T2TFLME,                  UINT32,\
                    "TOFD_P2T2TFLME",                  "TOFD_P2T2TFLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T2TFL,                    UINT32,\
                    "TOFD_P2T2TFL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T2TFLv,                   UINT32,\
                    "TOFD_P2T2TFLv",                   "TOFD_P2T2TFL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T2TFTM,                   UINT32,\
                    "TOFD_P2T2TFTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T2TFTMI,                  UINT32,\
                    "TOFD_P2T2TFTMI",                  "TOFD_P2T2TFTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T2TFTME,                  UINT32,\
                    "TOFD_P2T2TFTME",                  "TOFD_P2T2TFTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T2TFT,                    UINT32,\
                    "TOFD_P2T2TFT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T2TFTv,                   UINT32,\
                    "TOFD_P2T2TFTv",                   "TOFD_P2T2TFT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T2TCLM,                   UINT32,\
                    "TOFD_P2T2TCLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T2TCLMI,                  UINT32,\
                    "TOFD_P2T2TCLMI",                  "TOFD_P2T2TCLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T2TCLME,                  UINT32,\
                    "TOFD_P2T2TCLME",                  "TOFD_P2T2TCLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T2TCL,                    UINT32,\
                    "TOFD_P2T2TCL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T2TCLv,                   UINT32,\
                    "TOFD_P2T2TCLv",                   "TOFD_P2T2TCL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T2TCTM,                   UINT32,\
                    "TOFD_P2T2TCTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T2TCTMI,                  UINT32,\
                    "TOFD_P2T2TCTMI",                  "TOFD_P2T2TCTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T2TCTME,                  UINT32,\
                    "TOFD_P2T2TCTME",                  "TOFD_P2T2TCTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P2T2TCT,                    UINT32,\
                    "TOFD_P2T2TCT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P2T2TCTv,                   UINT32,\
                    "TOFD_P2T2TCTv",                   "TOFD_P2T2TCT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T1TFLM,                   UINT32,\
                    "TOFD_P3T1TFLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T1TFLMI,                  UINT32,\
                    "TOFD_P3T1TFLMI",                  "TOFD_P3T1TFLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T1TFLME,                  UINT32,\
                    "TOFD_P3T1TFLME",                  "TOFD_P3T1TFLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T1TFL,                    UINT32,\
                    "TOFD_P3T1TFL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T1TFLv,                   UINT32,\
                    "TOFD_P3T1TFLv",                   "TOFD_P3T1TFL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T1TFTM,                   UINT32,\
                    "TOFD_P3T1TFTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T1TFTMI,                  UINT32,\
                    "TOFD_P3T1TFTMI",                  "TOFD_P3T1TFTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T1TFTME,                  UINT32,\
                    "TOFD_P3T1TFTME",                  "TOFD_P3T1TFTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T1TFT,                    UINT32,\
                    "TOFD_P3T1TFT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T1TFTv,                   UINT32,\
                    "TOFD_P3T1TFTv",                   "TOFD_P3T1TFT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T1TCLM,                   UINT32,\
                    "TOFD_P3T1TCLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T1TCLMI,                  UINT32,\
                    "TOFD_P3T1TCLMI",                  "TOFD_P3T1TCLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T1TCLME,                  UINT32,\
                    "TOFD_P3T1TCLME",                  "TOFD_P3T1TCLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T1TCL,                    UINT32,\
                    "TOFD_P3T1TCL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T1TCLv,                   UINT32,\
                    "TOFD_P3T1TCLv",                   "TOFD_P3T1TCL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T1TCTM,                   UINT32,\
                    "TOFD_P3T1TCTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T1TCTMI,                  UINT32,\
                    "TOFD_P3T1TCTMI",                  "TOFD_P3T1TCTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T1TCTME,                  UINT32,\
                    "TOFD_P3T1TCTME",                  "TOFD_P3T1TCTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T1TCT,                    UINT32,\
                    "TOFD_P3T1TCT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T1TCTv,                   UINT32,\
                    "TOFD_P3T1TCTv",                   "TOFD_P3T1TCT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T2TFLM,                   UINT32,\
                    "TOFD_P3T2TFLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T2TFLMI,                  UINT32,\
                    "TOFD_P3T2TFLMI",                  "TOFD_P3T2TFLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T2TFLME,                  UINT32,\
                    "TOFD_P3T2TFLME",                  "TOFD_P3T2TFLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T2TFL,                    UINT32,\
                    "TOFD_P3T2TFL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T2TFLv,                   UINT32,\
                    "TOFD_P3T2TFLv",                   "TOFD_P3T2TFL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T2TFTM,                   UINT32,\
                    "TOFD_P3T2TFTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T2TFTMI,                  UINT32,\
                    "TOFD_P3T2TFTMI",                  "TOFD_P3T2TFTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T2TFTME,                  UINT32,\
                    "TOFD_P3T2TFTME",                  "TOFD_P3T2TFTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T2TFT,                    UINT32,\
                    "TOFD_P3T2TFT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T2TFTv,                   UINT32,\
                    "TOFD_P3T2TFTv",                   "TOFD_P3T2TFT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T2TCLM,                   UINT32,\
                    "TOFD_P3T2TCLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T2TCLMI,                  UINT32,\
                    "TOFD_P3T2TCLMI",                  "TOFD_P3T2TCLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T2TCLME,                  UINT32,\
                    "TOFD_P3T2TCLME",                  "TOFD_P3T2TCLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T2TCL,                    UINT32,\
                    "TOFD_P3T2TCL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T2TCLv,                   UINT32,\
                    "TOFD_P3T2TCLv",                   "TOFD_P3T2TCL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T2TCTM,                   UINT32,\
                    "TOFD_P3T2TCTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T2TCTMI,                  UINT32,\
                    "TOFD_P3T2TCTMI",                  "TOFD_P3T2TCTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T2TCTME,                  UINT32,\
                    "TOFD_P3T2TCTME",                  "TOFD_P3T2TCTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P3T2TCT,                    UINT32,\
                    "TOFD_P3T2TCT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P3T2TCTv,                   UINT32,\
                    "TOFD_P3T2TCTv",                   "TOFD_P3T2TCT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T1TFLM,                   UINT32,\
                    "TOFD_P4T1TFLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T1TFLMI,                  UINT32,\
                    "TOFD_P4T1TFLMI",                  "TOFD_P4T1TFLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T1TFLME,                  UINT32,\
                    "TOFD_P4T1TFLME",                  "TOFD_P4T1TFLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T1TFL,                    UINT32,\
                    "TOFD_P4T1TFL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T1TFLv,                   UINT32,\
                    "TOFD_P4T1TFLv",                   "TOFD_P4T1TFL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T1TFTM,                   UINT32,\
                    "TOFD_P4T1TFTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T1TFTMI,                  UINT32,\
                    "TOFD_P4T1TFTMI",                  "TOFD_P4T1TFTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T1TFTME,                  UINT32,\
                    "TOFD_P4T1TFTME",                  "TOFD_P4T1TFTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T1TFT,                    UINT32,\
                    "TOFD_P4T1TFT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T1TFTv,                   UINT32,\
                    "TOFD_P4T1TFTv",                   "TOFD_P4T1TFT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T1TCLM,                   UINT32,\
                    "TOFD_P4T1TCLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T1TCLMI,                  UINT32,\
                    "TOFD_P4T1TCLMI",                  "TOFD_P4T1TCLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T1TCLME,                  UINT32,\
                    "TOFD_P4T1TCLME",                  "TOFD_P4T1TCLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T1TCL,                    UINT32,\
                    "TOFD_P4T1TCL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T1TCLv,                   UINT32,\
                    "TOFD_P4T1TCLv",                   "TOFD_P4T1TCL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T1TCTM,                   UINT32,\
                    "TOFD_P4T1TCTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T1TCTMI,                  UINT32,\
                    "TOFD_P4T1TCTMI",                  "TOFD_P4T1TCTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T1TCTME,                  UINT32,\
                    "TOFD_P4T1TCTME",                  "TOFD_P4T1TCTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T1TCT,                    UINT32,\
                    "TOFD_P4T1TCT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T1TCTv,                   UINT32,\
                    "TOFD_P4T1TCTv",                   "TOFD_P4T1TCT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T2TFLM,                   UINT32,\
                    "TOFD_P4T2TFLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T2TFLMI,                  UINT32,\
                    "TOFD_P4T2TFLMI",                  "TOFD_P4T2TFLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T2TFLME,                  UINT32,\
                    "TOFD_P4T2TFLME",                  "TOFD_P4T2TFLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T2TFL,                    UINT32,\
                    "TOFD_P4T2TFL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T2TFLv,                   UINT32,\
                    "TOFD_P4T2TFLv",                   "TOFD_P4T2TFL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T2TFTM,                   UINT32,\
                    "TOFD_P4T2TFTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T2TFTMI,                  UINT32,\
                    "TOFD_P4T2TFTMI",                  "TOFD_P4T2TFTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T2TFTME,                  UINT32,\
                    "TOFD_P4T2TFTME",                  "TOFD_P4T2TFTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T2TFT,                    UINT32,\
                    "TOFD_P4T2TFT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T2TFTv,                   UINT32,\
                    "TOFD_P4T2TFTv",                   "TOFD_P4T2TFT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T2TCLM,                   UINT32,\
                    "TOFD_P4T2TCLM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T2TCLMI,                  UINT32,\
                    "TOFD_P4T2TCLMI",                  "TOFD_P4T2TCLM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T2TCLME,                  UINT32,\
                    "TOFD_P4T2TCLME",                  "TOFD_P4T2TCLM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T2TCL,                    UINT32,\
                    "TOFD_P4T2TCL",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T2TCLv,                   UINT32,\
                    "TOFD_P4T2TCLv",                   "TOFD_P4T2TCL"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T2TCTM,                   UINT32,\
                    "TOFD_P4T2TCTM",6); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T2TCTMI,                  UINT32,\
                    "TOFD_P4T2TCTMI",                  "TOFD_P4T2TCTM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T2TCTME,                  UINT32,\
                    "TOFD_P4T2TCTME",                  "TOFD_P4T2TCTM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     TOFD_P4T2TCT,                    UINT32,\
                    "TOFD_P4T2TCT",60); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     TOFD_P4T2TCTv,                   UINT32,\
                    "TOFD_P4T2TCTv",                   "TOFD_P4T2TCT"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX1M,                          UINT32,\
                    "PSPX1M",65); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX1MI,                         UINT32,\
                    "PSPX1MI",                         "PSPX1M"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX1ME,                         UINT32,\
                    "PSPX1ME",                         "PSPX1M"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX1,                           UINT32,\
                    "PSPX1",650); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX1v,                          UINT32,\
                    "PSPX1v",                          "PSPX1"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX2M,                          UINT32,\
                    "PSPX2M",65); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX2MI,                         UINT32,\
                    "PSPX2MI",                         "PSPX2M"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX2ME,                         UINT32,\
                    "PSPX2ME",                         "PSPX2M"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX2,                           UINT32,\
                    "PSPX2",650); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX2v,                          UINT32,\
                    "PSPX2v",                          "PSPX2"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX3M,                          UINT32,\
                    "PSPX3M",65); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX3MI,                         UINT32,\
                    "PSPX3MI",                         "PSPX3M"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX3ME,                         UINT32,\
                    "PSPX3ME",                         "PSPX3M"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX3,                           UINT32,\
                    "PSPX3",650); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX3v,                          UINT32,\
                    "PSPX3v",                          "PSPX3"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX4M,                          UINT32,\
                    "PSPX4M",65); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX4MI,                         UINT32,\
                    "PSPX4MI",                         "PSPX4M"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX4ME,                         UINT32,\
                    "PSPX4ME",                         "PSPX4M"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX4,                           UINT32,\
                    "PSPX4",650); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX4v,                          UINT32,\
                    "PSPX4v",                          "PSPX4"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX5M,                          UINT32,\
                    "PSPX5M",65); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX5MI,                         UINT32,\
                    "PSPX5MI",                         "PSPX5M"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX5ME,                         UINT32,\
                    "PSPX5ME",                         "PSPX5M"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     PSPX5,                           UINT32,\
                    "PSPX5",650); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX5v,                          UINT32,\
                    "PSPX5v",                          "PSPX5"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour1tM,                    UINT32,\
                    "fiberfour1tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour1tMI,                   UINT32,\
                    "fiberfour1tMI",                   "fiberfour1tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour1tME,                   UINT32,\
                    "fiberfour1tME",                   "fiberfour1tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour1t,                     UINT32,\
                    "fiberfour1t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour1tv,                    UINT32,\
                    "fiberfour1tv",                    "fiberfour1t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour1EM,                    UINT32,\
                    "fiberfour1EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour1EMI,                   UINT32,\
                    "fiberfour1EMI",                   "fiberfour1EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour1EME,                   UINT32,\
                    "fiberfour1EME",                   "fiberfour1EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour1E,                     UINT32,\
                    "fiberfour1E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour1Ev,                    UINT32,\
                    "fiberfour1Ev",                    "fiberfour1E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour2tM,                    UINT32,\
                    "fiberfour2tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour2tMI,                   UINT32,\
                    "fiberfour2tMI",                   "fiberfour2tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour2tME,                   UINT32,\
                    "fiberfour2tME",                   "fiberfour2tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour2t,                     UINT32,\
                    "fiberfour2t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour2tv,                    UINT32,\
                    "fiberfour2tv",                    "fiberfour2t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour2EM,                    UINT32,\
                    "fiberfour2EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour2EMI,                   UINT32,\
                    "fiberfour2EMI",                   "fiberfour2EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour2EME,                   UINT32,\
                    "fiberfour2EME",                   "fiberfour2EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour2E,                     UINT32,\
                    "fiberfour2E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour2Ev,                    UINT32,\
                    "fiberfour2Ev",                    "fiberfour2E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour3tM,                    UINT32,\
                    "fiberfour3tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour3tMI,                   UINT32,\
                    "fiberfour3tMI",                   "fiberfour3tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour3tME,                   UINT32,\
                    "fiberfour3tME",                   "fiberfour3tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour3t,                     UINT32,\
                    "fiberfour3t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour3tv,                    UINT32,\
                    "fiberfour3tv",                    "fiberfour3t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour3EM,                    UINT32,\
                    "fiberfour3EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour3EMI,                   UINT32,\
                    "fiberfour3EMI",                   "fiberfour3EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour3EME,                   UINT32,\
                    "fiberfour3EME",                   "fiberfour3EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour3E,                     UINT32,\
                    "fiberfour3E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour3Ev,                    UINT32,\
                    "fiberfour3Ev",                    "fiberfour3E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour4tM,                    UINT32,\
                    "fiberfour4tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour4tMI,                   UINT32,\
                    "fiberfour4tMI",                   "fiberfour4tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour4tME,                   UINT32,\
                    "fiberfour4tME",                   "fiberfour4tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour4t,                     UINT32,\
                    "fiberfour4t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour4tv,                    UINT32,\
                    "fiberfour4tv",                    "fiberfour4t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour4EM,                    UINT32,\
                    "fiberfour4EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour4EMI,                   UINT32,\
                    "fiberfour4EMI",                   "fiberfour4EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour4EME,                   UINT32,\
                    "fiberfour4EME",                   "fiberfour4EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour4E,                     UINT32,\
                    "fiberfour4E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour4Ev,                    UINT32,\
                    "fiberfour4Ev",                    "fiberfour4E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour5tM,                    UINT32,\
                    "fiberfour5tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour5tMI,                   UINT32,\
                    "fiberfour5tMI",                   "fiberfour5tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour5tME,                   UINT32,\
                    "fiberfour5tME",                   "fiberfour5tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour5t,                     UINT32,\
                    "fiberfour5t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour5tv,                    UINT32,\
                    "fiberfour5tv",                    "fiberfour5t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour5EM,                    UINT32,\
                    "fiberfour5EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour5EMI,                   UINT32,\
                    "fiberfour5EMI",                   "fiberfour5EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour5EME,                   UINT32,\
                    "fiberfour5EME",                   "fiberfour5EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour5E,                     UINT32,\
                    "fiberfour5E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour5Ev,                    UINT32,\
                    "fiberfour5Ev",                    "fiberfour5E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour6tM,                    UINT32,\
                    "fiberfour6tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour6tMI,                   UINT32,\
                    "fiberfour6tMI",                   "fiberfour6tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour6tME,                   UINT32,\
                    "fiberfour6tME",                   "fiberfour6tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour6t,                     UINT32,\
                    "fiberfour6t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour6tv,                    UINT32,\
                    "fiberfour6tv",                    "fiberfour6t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour6EM,                    UINT32,\
                    "fiberfour6EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour6EMI,                   UINT32,\
                    "fiberfour6EMI",                   "fiberfour6EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour6EME,                   UINT32,\
                    "fiberfour6EME",                   "fiberfour6EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour6E,                     UINT32,\
                    "fiberfour6E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour6Ev,                    UINT32,\
                    "fiberfour6Ev",                    "fiberfour6E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour7tM,                    UINT32,\
                    "fiberfour7tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour7tMI,                   UINT32,\
                    "fiberfour7tMI",                   "fiberfour7tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour7tME,                   UINT32,\
                    "fiberfour7tME",                   "fiberfour7tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour7t,                     UINT32,\
                    "fiberfour7t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour7tv,                    UINT32,\
                    "fiberfour7tv",                    "fiberfour7t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour7EM,                    UINT32,\
                    "fiberfour7EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour7EMI,                   UINT32,\
                    "fiberfour7EMI",                   "fiberfour7EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour7EME,                   UINT32,\
                    "fiberfour7EME",                   "fiberfour7EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour7E,                     UINT32,\
                    "fiberfour7E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour7Ev,                    UINT32,\
                    "fiberfour7Ev",                    "fiberfour7E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour8tM,                    UINT32,\
                    "fiberfour8tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour8tMI,                   UINT32,\
                    "fiberfour8tMI",                   "fiberfour8tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour8tME,                   UINT32,\
                    "fiberfour8tME",                   "fiberfour8tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour8t,                     UINT32,\
                    "fiberfour8t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour8tv,                    UINT32,\
                    "fiberfour8tv",                    "fiberfour8t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour8EM,                    UINT32,\
                    "fiberfour8EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour8EMI,                   UINT32,\
                    "fiberfour8EMI",                   "fiberfour8EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour8EME,                   UINT32,\
                    "fiberfour8EME",                   "fiberfour8EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour8E,                     UINT32,\
                    "fiberfour8E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour8Ev,                    UINT32,\
                    "fiberfour8Ev",                    "fiberfour8E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour9tM,                    UINT32,\
                    "fiberfour9tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour9tMI,                   UINT32,\
                    "fiberfour9tMI",                   "fiberfour9tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour9tME,                   UINT32,\
                    "fiberfour9tME",                   "fiberfour9tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour9t,                     UINT32,\
                    "fiberfour9t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour9tv,                    UINT32,\
                    "fiberfour9tv",                    "fiberfour9t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour9EM,                    UINT32,\
                    "fiberfour9EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour9EMI,                   UINT32,\
                    "fiberfour9EMI",                   "fiberfour9EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour9EME,                   UINT32,\
                    "fiberfour9EME",                   "fiberfour9EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour9E,                     UINT32,\
                    "fiberfour9E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     PSPX5v,                          UINT32,\
                    "PSPX5v",                          "PSPX5"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour1tM,                    UINT32,\
                    "fiberfour1tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour1tMI,                   UINT32,\
                    "fiberfour1tMI",                   "fiberfour1tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour1tME,                   UINT32,\
                    "fiberfour1tME",                   "fiberfour1tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour1t,                     UINT32,\
                    "fiberfour1t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour1tv,                    UINT32,\
                    "fiberfour1tv",                    "fiberfour1t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour1EM,                    UINT32,\
                    "fiberfour1EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour1EMI,                   UINT32,\
                    "fiberfour1EMI",                   "fiberfour1EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour1EME,                   UINT32,\
                    "fiberfour1EME",                   "fiberfour1EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour1E,                     UINT32,\
                    "fiberfour1E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour1Ev,                    UINT32,\
                    "fiberfour1Ev",                    "fiberfour1E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour2tM,                    UINT32,\
                    "fiberfour2tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour2tMI,                   UINT32,\
                    "fiberfour2tMI",                   "fiberfour2tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour2tME,                   UINT32,\
                    "fiberfour2tME",                   "fiberfour2tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour2t,                     UINT32,\
                    "fiberfour2t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour2tv,                    UINT32,\
                    "fiberfour2tv",                    "fiberfour2t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour2EM,                    UINT32,\
                    "fiberfour2EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour2EMI,                   UINT32,\
                    "fiberfour2EMI",                   "fiberfour2EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour2EME,                   UINT32,\
                    "fiberfour2EME",                   "fiberfour2EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour2E,                     UINT32,\
                    "fiberfour2E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour2Ev,                    UINT32,\
                    "fiberfour2Ev",                    "fiberfour2E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour3tM,                    UINT32,\
                    "fiberfour3tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour3tMI,                   UINT32,\
                    "fiberfour3tMI",                   "fiberfour3tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour3tME,                   UINT32,\
                    "fiberfour3tME",                   "fiberfour3tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour3t,                     UINT32,\
                    "fiberfour3t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour3tv,                    UINT32,\
                    "fiberfour3tv",                    "fiberfour3t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour3EM,                    UINT32,\
                    "fiberfour3EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour3EMI,                   UINT32,\
                    "fiberfour3EMI",                   "fiberfour3EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour3EME,                   UINT32,\
                    "fiberfour3EME",                   "fiberfour3EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour3E,                     UINT32,\
                    "fiberfour3E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour3Ev,                    UINT32,\
                    "fiberfour3Ev",                    "fiberfour3E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour4tM,                    UINT32,\
                    "fiberfour4tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour4tMI,                   UINT32,\
                    "fiberfour4tMI",                   "fiberfour4tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour4tME,                   UINT32,\
                    "fiberfour4tME",                   "fiberfour4tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour4t,                     UINT32,\
                    "fiberfour4t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour4tv,                    UINT32,\
                    "fiberfour4tv",                    "fiberfour4t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour4EM,                    UINT32,\
                    "fiberfour4EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour4EMI,                   UINT32,\
                    "fiberfour4EMI",                   "fiberfour4EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour4EME,                   UINT32,\
                    "fiberfour4EME",                   "fiberfour4EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour4E,                     UINT32,\
                    "fiberfour4E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour4Ev,                    UINT32,\
                    "fiberfour4Ev",                    "fiberfour4E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour5tM,                    UINT32,\
                    "fiberfour5tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour5tMI,                   UINT32,\
                    "fiberfour5tMI",                   "fiberfour5tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour5tME,                   UINT32,\
                    "fiberfour5tME",                   "fiberfour5tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour5t,                     UINT32,\
                    "fiberfour5t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour5tv,                    UINT32,\
                    "fiberfour5tv",                    "fiberfour5t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour5EM,                    UINT32,\
                    "fiberfour5EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour5EMI,                   UINT32,\
                    "fiberfour5EMI",                   "fiberfour5EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour5EME,                   UINT32,\
                    "fiberfour5EME",                   "fiberfour5EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour5E,                     UINT32,\
                    "fiberfour5E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour5Ev,                    UINT32,\
                    "fiberfour5Ev",                    "fiberfour5E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour6tM,                    UINT32,\
                    "fiberfour6tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour6tMI,                   UINT32,\
                    "fiberfour6tMI",                   "fiberfour6tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour6tME,                   UINT32,\
                    "fiberfour6tME",                   "fiberfour6tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour6t,                     UINT32,\
                    "fiberfour6t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour6tv,                    UINT32,\
                    "fiberfour6tv",                    "fiberfour6t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour6EM,                    UINT32,\
                    "fiberfour6EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour6EMI,                   UINT32,\
                    "fiberfour6EMI",                   "fiberfour6EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour6EME,                   UINT32,\
                    "fiberfour6EME",                   "fiberfour6EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour6E,                     UINT32,\
                    "fiberfour6E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour6Ev,                    UINT32,\
                    "fiberfour6Ev",                    "fiberfour6E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour7tM,                    UINT32,\
                    "fiberfour7tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour7tMI,                   UINT32,\
                    "fiberfour7tMI",                   "fiberfour7tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour7tME,                   UINT32,\
                    "fiberfour7tME",                   "fiberfour7tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour7t,                     UINT32,\
                    "fiberfour7t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour7tv,                    UINT32,\
                    "fiberfour7tv",                    "fiberfour7t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour7EM,                    UINT32,\
                    "fiberfour7EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour7EMI,                   UINT32,\
                    "fiberfour7EMI",                   "fiberfour7EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour7EME,                   UINT32,\
                    "fiberfour7EME",                   "fiberfour7EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour7E,                     UINT32,\
                    "fiberfour7E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour7Ev,                    UINT32,\
                    "fiberfour7Ev",                    "fiberfour7E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour8tM,                    UINT32,\
                    "fiberfour8tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour8tMI,                   UINT32,\
                    "fiberfour8tMI",                   "fiberfour8tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour8tME,                   UINT32,\
                    "fiberfour8tME",                   "fiberfour8tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour8t,                     UINT32,\
                    "fiberfour8t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour8tv,                    UINT32,\
                    "fiberfour8tv",                    "fiberfour8t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour8EM,                    UINT32,\
                    "fiberfour8EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour8EMI,                   UINT32,\
                    "fiberfour8EMI",                   "fiberfour8EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour8EME,                   UINT32,\
                    "fiberfour8EME",                   "fiberfour8EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour8E,                     UINT32,\
                    "fiberfour8E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour8Ev,                    UINT32,\
                    "fiberfour8Ev",                    "fiberfour8E"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour9tM,                    UINT32,\
                    "fiberfour9tM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour9tMI,                   UINT32,\
                    "fiberfour9tMI",                   "fiberfour9tM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour9tME,                   UINT32,\
                    "fiberfour9tME",                   "fiberfour9tM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour9t,                     UINT32,\
                    "fiberfour9t",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour9tv,                    UINT32,\
                    "fiberfour9tv",                    "fiberfour9t"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour9EM,                    UINT32,\
                    "fiberfour9EM",16); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour9EMI,                   UINT32,\
                    "fiberfour9EMI",                   "fiberfour9EM"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour9EME,                   UINT32,\
                    "fiberfour9EME",                   "fiberfour9EM"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,struct_t,printerr,\
                     fiberfour9E,                     UINT32,\
                    "fiberfour9E",160); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,struct_t,printerr,\
                     fiberfour9Ev,                    UINT32,\
                    "fiberfour9Ev",                    "fiberfour9E"); \
  \
} while (0);

/********************************************************
 *
 * For internal use by the network data reader:
 * (version checks, etc)
 */

typedef struct EXT_STR_h101_layout_t
{
  uint32_t _magic;
  uint32_t _size_info;
  uint32_t _size_struct;
  uint32_t _size_struct_onion;
  uint32_t _pack_list_items;

  uint32_t _num_items;
  struct {
    uint32_t _offset;
    uint32_t _size;
    uint32_t _xor;
    const char *_name;
  } _items[1];
  uint32_t _pack_list[2606];
} EXT_STR_h101_layout;

#define EXT_STR_h101_LAYOUT_INIT { \
  0x57e65c93, \
  sizeof(EXT_STR_h101_layout), \
  sizeof(EXT_STR_h101), \
  sizeof(EXT_STR_h101_onion), \
  2606, \
  1, \
  { \
    { 0, sizeof(EXT_STR_h101), 0x812acd50, "h101" }, \
  }, \
  { \
    0x40000000, 0x40000004, 0xc0000008, 0x00000004, \
    0x00000002, 0x4000000c, 0x4000001c, 0x40000010, \
    0x40000020, 0x40000014, 0x40000024, 0x40000018, \
    0x40000028, 0xc000002c, 0x00000028, 0x00000001, \
    0x40000030, 0x40000034, 0x40000038, 0x4000003c, \
    0x40000040, 0x40000044, 0x40000048, 0x4000004c, \
    0x40000050, 0x40000054, 0x40000058, 0x4000005c, \
    0x40000060, 0x40000064, 0x40000068, 0x4000006c, \
    0x40000070, 0x40000074, 0x40000078, 0x4000007c, \
    0x40000080, 0x40000084, 0x40000088, 0x4000008c, \
    0x40000090, 0x40000094, 0x40000098, 0x4000009c, \
    0x400000a0, 0x400000a4, 0x400000a8, 0x400000ac, \
    0x400000b0, 0x400000b4, 0x400000b8, 0x400000bc, \
    0x400000c0, 0x400000c4, 0x400000c8, 0x400000cc, \
    0xc00000d0, 0x00000004, 0x00000002, 0x400000d4, \
    0x400000e4, 0x400000d8, 0x400000e8, 0x400000dc, \
    0x400000ec, 0x400000e0, 0x400000f0, 0xc00000f4, \
    0x00000028, 0x00000001, 0x400000f8, 0x400000fc, \
    0x40000100, 0x40000104, 0x40000108, 0x4000010c, \
    0x40000110, 0x40000114, 0x40000118, 0x4000011c, \
    0x40000120, 0x40000124, 0x40000128, 0x4000012c, \
    0x40000130, 0x40000134, 0x40000138, 0x4000013c, \
    0x40000140, 0x40000144, 0x40000148, 0x4000014c, \
    0x40000150, 0x40000154, 0x40000158, 0x4000015c, \
    0x40000160, 0x40000164, 0x40000168, 0x4000016c, \
    0x40000170, 0x40000174, 0x40000178, 0x4000017c, \
    0x40000180, 0x40000184, 0x40000188, 0x4000018c, \
    0x40000190, 0x40000194, 0xc0000198, 0x00000006, \
    0x00000002, 0x4000019c, 0x400001b4, 0x400001a0, \
    0x400001b8, 0x400001a4, 0x400001bc, 0x400001a8, \
    0x400001c0, 0x400001ac, 0x400001c4, 0x400001b0, \
    0x400001c8, 0xc00001cc, 0x0000003c, 0x00000001, \
    0x400001d0, 0x400001d4, 0x400001d8, 0x400001dc, \
    0x400001e0, 0x400001e4, 0x400001e8, 0x400001ec, \
    0x400001f0, 0x400001f4, 0x400001f8, 0x400001fc, \
    0x40000200, 0x40000204, 0x40000208, 0x4000020c, \
    0x40000210, 0x40000214, 0x40000218, 0x4000021c, \
    0x40000220, 0x40000224, 0x40000228, 0x4000022c, \
    0x40000230, 0x40000234, 0x40000238, 0x4000023c, \
    0x40000240, 0x40000244, 0x40000248, 0x4000024c, \
    0x40000250, 0x40000254, 0x40000258, 0x4000025c, \
    0x40000260, 0x40000264, 0x40000268, 0x4000026c, \
    0x40000270, 0x40000274, 0x40000278, 0x4000027c, \
    0x40000280, 0x40000284, 0x40000288, 0x4000028c, \
    0x40000290, 0x40000294, 0x40000298, 0x4000029c, \
    0x400002a0, 0x400002a4, 0x400002a8, 0x400002ac, \
    0x400002b0, 0x400002b4, 0x400002b8, 0x400002bc, \
    0xc00002c0, 0x00000006, 0x00000002, 0x400002c4, \
    0x400002dc, 0x400002c8, 0x400002e0, 0x400002cc, \
    0x400002e4, 0x400002d0, 0x400002e8, 0x400002d4, \
    0x400002ec, 0x400002d8, 0x400002f0, 0xc00002f4, \
    0x0000003c, 0x00000001, 0x400002f8, 0x400002fc, \
    0x40000300, 0x40000304, 0x40000308, 0x4000030c, \
    0x40000310, 0x40000314, 0x40000318, 0x4000031c, \
    0x40000320, 0x40000324, 0x40000328, 0x4000032c, \
    0x40000330, 0x40000334, 0x40000338, 0x4000033c, \
    0x40000340, 0x40000344, 0x40000348, 0x4000034c, \
    0x40000350, 0x40000354, 0x40000358, 0x4000035c, \
    0x40000360, 0x40000364, 0x40000368, 0x4000036c, \
    0x40000370, 0x40000374, 0x40000378, 0x4000037c, \
    0x40000380, 0x40000384, 0x40000388, 0x4000038c, \
    0x40000390, 0x40000394, 0x40000398, 0x4000039c, \
    0x400003a0, 0x400003a4, 0x400003a8, 0x400003ac, \
    0x400003b0, 0x400003b4, 0x400003b8, 0x400003bc, \
    0x400003c0, 0x400003c4, 0x400003c8, 0x400003cc, \
    0x400003d0, 0x400003d4, 0x400003d8, 0x400003dc, \
    0x400003e0, 0x400003e4, 0xc00003e8, 0x00000006, \
    0x00000002, 0x400003ec, 0x40000404, 0x400003f0, \
    0x40000408, 0x400003f4, 0x4000040c, 0x400003f8, \
    0x40000410, 0x400003fc, 0x40000414, 0x40000400, \
    0x40000418, 0xc000041c, 0x0000003c, 0x00000001, \
    0x40000420, 0x40000424, 0x40000428, 0x4000042c, \
    0x40000430, 0x40000434, 0x40000438, 0x4000043c, \
    0x40000440, 0x40000444, 0x40000448, 0x4000044c, \
    0x40000450, 0x40000454, 0x40000458, 0x4000045c, \
    0x40000460, 0x40000464, 0x40000468, 0x4000046c, \
    0x40000470, 0x40000474, 0x40000478, 0x4000047c, \
    0x40000480, 0x40000484, 0x40000488, 0x4000048c, \
    0x40000490, 0x40000494, 0x40000498, 0x4000049c, \
    0x400004a0, 0x400004a4, 0x400004a8, 0x400004ac, \
    0x400004b0, 0x400004b4, 0x400004b8, 0x400004bc, \
    0x400004c0, 0x400004c4, 0x400004c8, 0x400004cc, \
    0x400004d0, 0x400004d4, 0x400004d8, 0x400004dc, \
    0x400004e0, 0x400004e4, 0x400004e8, 0x400004ec, \
    0x400004f0, 0x400004f4, 0x400004f8, 0x400004fc, \
    0x40000500, 0x40000504, 0x40000508, 0x4000050c, \
    0xc0000510, 0x00000006, 0x00000002, 0x40000514, \
    0x4000052c, 0x40000518, 0x40000530, 0x4000051c, \
    0x40000534, 0x40000520, 0x40000538, 0x40000524, \
    0x4000053c, 0x40000528, 0x40000540, 0xc0000544, \
    0x0000003c, 0x00000001, 0x40000548, 0x4000054c, \
    0x40000550, 0x40000554, 0x40000558, 0x4000055c, \
    0x40000560, 0x40000564, 0x40000568, 0x4000056c, \
    0x40000570, 0x40000574, 0x40000578, 0x4000057c, \
    0x40000580, 0x40000584, 0x40000588, 0x4000058c, \
    0x40000590, 0x40000594, 0x40000598, 0x4000059c, \
    0x400005a0, 0x400005a4, 0x400005a8, 0x400005ac, \
    0x400005b0, 0x400005b4, 0x400005b8, 0x400005bc, \
    0x400005c0, 0x400005c4, 0x400005c8, 0x400005cc, \
    0x400005d0, 0x400005d4, 0x400005d8, 0x400005dc, \
    0x400005e0, 0x400005e4, 0x400005e8, 0x400005ec, \
    0x400005f0, 0x400005f4, 0x400005f8, 0x400005fc, \
    0x40000600, 0x40000604, 0x40000608, 0x4000060c, \
    0x40000610, 0x40000614, 0x40000618, 0x4000061c, \
    0x40000620, 0x40000624, 0x40000628, 0x4000062c, \
    0x40000630, 0x40000634, 0xc0000638, 0x00000006, \
    0x00000002, 0x4000063c, 0x40000654, 0x40000640, \
    0x40000658, 0x40000644, 0x4000065c, 0x40000648, \
    0x40000660, 0x4000064c, 0x40000664, 0x40000650, \
    0x40000668, 0xc000066c, 0x0000003c, 0x00000001, \
    0x40000670, 0x40000674, 0x40000678, 0x4000067c, \
    0x40000680, 0x40000684, 0x40000688, 0x4000068c, \
    0x40000690, 0x40000694, 0x40000698, 0x4000069c, \
    0x400006a0, 0x400006a4, 0x400006a8, 0x400006ac, \
    0x400006b0, 0x400006b4, 0x400006b8, 0x400006bc, \
    0x400006c0, 0x400006c4, 0x400006c8, 0x400006cc, \
    0x400006d0, 0x400006d4, 0x400006d8, 0x400006dc, \
    0x400006e0, 0x400006e4, 0x400006e8, 0x400006ec, \
    0x400006f0, 0x400006f4, 0x400006f8, 0x400006fc, \
    0x40000700, 0x40000704, 0x40000708, 0x4000070c, \
    0x40000710, 0x40000714, 0x40000718, 0x4000071c, \
    0x40000720, 0x40000724, 0x40000728, 0x4000072c, \
    0x40000730, 0x40000734, 0x40000738, 0x4000073c, \
    0x40000740, 0x40000744, 0x40000748, 0x4000074c, \
    0x40000750, 0x40000754, 0x40000758, 0x4000075c, \
    0xc0000760, 0x00000006, 0x00000002, 0x40000764, \
    0x4000077c, 0x40000768, 0x40000780, 0x4000076c, \
    0x40000784, 0x40000770, 0x40000788, 0x40000774, \
    0x4000078c, 0x40000778, 0x40000790, 0xc0000794, \
    0x0000003c, 0x00000001, 0x40000798, 0x4000079c, \
    0x400007a0, 0x400007a4, 0x400007a8, 0x400007ac, \
    0x400007b0, 0x400007b4, 0x400007b8, 0x400007bc, \
    0x400007c0, 0x400007c4, 0x400007c8, 0x400007cc, \
    0x400007d0, 0x400007d4, 0x400007d8, 0x400007dc, \
    0x400007e0, 0x400007e4, 0x400007e8, 0x400007ec, \
    0x400007f0, 0x400007f4, 0x400007f8, 0x400007fc, \
    0x40000800, 0x40000804, 0x40000808, 0x4000080c, \
    0x40000810, 0x40000814, 0x40000818, 0x4000081c, \
    0x40000820, 0x40000824, 0x40000828, 0x4000082c, \
    0x40000830, 0x40000834, 0x40000838, 0x4000083c, \
    0x40000840, 0x40000844, 0x40000848, 0x4000084c, \
    0x40000850, 0x40000854, 0x40000858, 0x4000085c, \
    0x40000860, 0x40000864, 0x40000868, 0x4000086c, \
    0x40000870, 0x40000874, 0x40000878, 0x4000087c, \
    0x40000880, 0x40000884, 0xc0000888, 0x00000006, \
    0x00000002, 0x4000088c, 0x400008a4, 0x40000890, \
    0x400008a8, 0x40000894, 0x400008ac, 0x40000898, \
    0x400008b0, 0x4000089c, 0x400008b4, 0x400008a0, \
    0x400008b8, 0xc00008bc, 0x0000003c, 0x00000001, \
    0x400008c0, 0x400008c4, 0x400008c8, 0x400008cc, \
    0x400008d0, 0x400008d4, 0x400008d8, 0x400008dc, \
    0x400008e0, 0x400008e4, 0x400008e8, 0x400008ec, \
    0x400008f0, 0x400008f4, 0x400008f8, 0x400008fc, \
    0x40000900, 0x40000904, 0x40000908, 0x4000090c, \
    0x40000910, 0x40000914, 0x40000918, 0x4000091c, \
    0x40000920, 0x40000924, 0x40000928, 0x4000092c, \
    0x40000930, 0x40000934, 0x40000938, 0x4000093c, \
    0x40000940, 0x40000944, 0x40000948, 0x4000094c, \
    0x40000950, 0x40000954, 0x40000958, 0x4000095c, \
    0x40000960, 0x40000964, 0x40000968, 0x4000096c, \
    0x40000970, 0x40000974, 0x40000978, 0x4000097c, \
    0x40000980, 0x40000984, 0x40000988, 0x4000098c, \
    0x40000990, 0x40000994, 0x40000998, 0x4000099c, \
    0x400009a0, 0x400009a4, 0x400009a8, 0x400009ac, \
    0xc00009b0, 0x00000006, 0x00000002, 0x400009b4, \
    0x400009cc, 0x400009b8, 0x400009d0, 0x400009bc, \
    0x400009d4, 0x400009c0, 0x400009d8, 0x400009c4, \
    0x400009dc, 0x400009c8, 0x400009e0, 0xc00009e4, \
    0x0000003c, 0x00000001, 0x400009e8, 0x400009ec, \
    0x400009f0, 0x400009f4, 0x400009f8, 0x400009fc, \
    0x40000a00, 0x40000a04, 0x40000a08, 0x40000a0c, \
    0x40000a10, 0x40000a14, 0x40000a18, 0x40000a1c, \
    0x40000a20, 0x40000a24, 0x40000a28, 0x40000a2c, \
    0x40000a30, 0x40000a34, 0x40000a38, 0x40000a3c, \
    0x40000a40, 0x40000a44, 0x40000a48, 0x40000a4c, \
    0x40000a50, 0x40000a54, 0x40000a58, 0x40000a5c, \
    0x40000a60, 0x40000a64, 0x40000a68, 0x40000a6c, \
    0x40000a70, 0x40000a74, 0x40000a78, 0x40000a7c, \
    0x40000a80, 0x40000a84, 0x40000a88, 0x40000a8c, \
    0x40000a90, 0x40000a94, 0x40000a98, 0x40000a9c, \
    0x40000aa0, 0x40000aa4, 0x40000aa8, 0x40000aac, \
    0x40000ab0, 0x40000ab4, 0x40000ab8, 0x40000abc, \
    0x40000ac0, 0x40000ac4, 0x40000ac8, 0x40000acc, \
    0x40000ad0, 0x40000ad4, 0xc0000ad8, 0x00000006, \
    0x00000002, 0x40000adc, 0x40000af4, 0x40000ae0, \
    0x40000af8, 0x40000ae4, 0x40000afc, 0x40000ae8, \
    0x40000b00, 0x40000aec, 0x40000b04, 0x40000af0, \
    0x40000b08, 0xc0000b0c, 0x0000003c, 0x00000001, \
    0x40000b10, 0x40000b14, 0x40000b18, 0x40000b1c, \
    0x40000b20, 0x40000b24, 0x40000b28, 0x40000b2c, \
    0x40000b30, 0x40000b34, 0x40000b38, 0x40000b3c, \
    0x40000b40, 0x40000b44, 0x40000b48, 0x40000b4c, \
    0x40000b50, 0x40000b54, 0x40000b58, 0x40000b5c, \
    0x40000b60, 0x40000b64, 0x40000b68, 0x40000b6c, \
    0x40000b70, 0x40000b74, 0x40000b78, 0x40000b7c, \
    0x40000b80, 0x40000b84, 0x40000b88, 0x40000b8c, \
    0x40000b90, 0x40000b94, 0x40000b98, 0x40000b9c, \
    0x40000ba0, 0x40000ba4, 0x40000ba8, 0x40000bac, \
    0x40000bb0, 0x40000bb4, 0x40000bb8, 0x40000bbc, \
    0x40000bc0, 0x40000bc4, 0x40000bc8, 0x40000bcc, \
    0x40000bd0, 0x40000bd4, 0x40000bd8, 0x40000bdc, \
    0x40000be0, 0x40000be4, 0x40000be8, 0x40000bec, \
    0x40000bf0, 0x40000bf4, 0x40000bf8, 0x40000bfc, \
    0xc0000c00, 0x00000006, 0x00000002, 0x40000c04, \
    0x40000c1c, 0x40000c08, 0x40000c20, 0x40000c0c, \
    0x40000c24, 0x40000c10, 0x40000c28, 0x40000c14, \
    0x40000c2c, 0x40000c18, 0x40000c30, 0xc0000c34, \
    0x0000003c, 0x00000001, 0x40000c38, 0x40000c3c, \
    0x40000c40, 0x40000c44, 0x40000c48, 0x40000c4c, \
    0x40000c50, 0x40000c54, 0x40000c58, 0x40000c5c, \
    0x40000c60, 0x40000c64, 0x40000c68, 0x40000c6c, \
    0x40000c70, 0x40000c74, 0x40000c78, 0x40000c7c, \
    0x40000c80, 0x40000c84, 0x40000c88, 0x40000c8c, \
    0x40000c90, 0x40000c94, 0x40000c98, 0x40000c9c, \
    0x40000ca0, 0x40000ca4, 0x40000ca8, 0x40000cac, \
    0x40000cb0, 0x40000cb4, 0x40000cb8, 0x40000cbc, \
    0x40000cc0, 0x40000cc4, 0x40000cc8, 0x40000ccc, \
    0x40000cd0, 0x40000cd4, 0x40000cd8, 0x40000cdc, \
    0x40000ce0, 0x40000ce4, 0x40000ce8, 0x40000cec, \
    0x40000cf0, 0x40000cf4, 0x40000cf8, 0x40000cfc, \
    0x40000d00, 0x40000d04, 0x40000d08, 0x40000d0c, \
    0x40000d10, 0x40000d14, 0x40000d18, 0x40000d1c, \
    0x40000d20, 0x40000d24, 0xc0000d28, 0x00000006, \
    0x00000002, 0x40000d2c, 0x40000d44, 0x40000d30, \
    0x40000d48, 0x40000d34, 0x40000d4c, 0x40000d38, \
    0x40000d50, 0x40000d3c, 0x40000d54, 0x40000d40, \
    0x40000d58, 0xc0000d5c, 0x0000003c, 0x00000001, \
    0x40000d60, 0x40000d64, 0x40000d68, 0x40000d6c, \
    0x40000d70, 0x40000d74, 0x40000d78, 0x40000d7c, \
    0x40000d80, 0x40000d84, 0x40000d88, 0x40000d8c, \
    0x40000d90, 0x40000d94, 0x40000d98, 0x40000d9c, \
    0x40000da0, 0x40000da4, 0x40000da8, 0x40000dac, \
    0x40000db0, 0x40000db4, 0x40000db8, 0x40000dbc, \
    0x40000dc0, 0x40000dc4, 0x40000dc8, 0x40000dcc, \
    0x40000dd0, 0x40000dd4, 0x40000dd8, 0x40000ddc, \
    0x40000de0, 0x40000de4, 0x40000de8, 0x40000dec, \
    0x40000df0, 0x40000df4, 0x40000df8, 0x40000dfc, \
    0x40000e00, 0x40000e04, 0x40000e08, 0x40000e0c, \
    0x40000e10, 0x40000e14, 0x40000e18, 0x40000e1c, \
    0x40000e20, 0x40000e24, 0x40000e28, 0x40000e2c, \
    0x40000e30, 0x40000e34, 0x40000e38, 0x40000e3c, \
    0x40000e40, 0x40000e44, 0x40000e48, 0x40000e4c, \
    0xc0000e50, 0x00000006, 0x00000002, 0x40000e54, \
    0x40000e6c, 0x40000e58, 0x40000e70, 0x40000e5c, \
    0x40000e74, 0x40000e60, 0x40000e78, 0x40000e64, \
    0x40000e7c, 0x40000e68, 0x40000e80, 0xc0000e84, \
    0x0000003c, 0x00000001, 0x40000e88, 0x40000e8c, \
    0x40000e90, 0x40000e94, 0x40000e98, 0x40000e9c, \
    0x40000ea0, 0x40000ea4, 0x40000ea8, 0x40000eac, \
    0x40000eb0, 0x40000eb4, 0x40000eb8, 0x40000ebc, \
    0x40000ec0, 0x40000ec4, 0x40000ec8, 0x40000ecc, \
    0x40000ed0, 0x40000ed4, 0x40000ed8, 0x40000edc, \
    0x40000ee0, 0x40000ee4, 0x40000ee8, 0x40000eec, \
    0x40000ef0, 0x40000ef4, 0x40000ef8, 0x40000efc, \
    0x40000f00, 0x40000f04, 0x40000f08, 0x40000f0c, \
    0x40000f10, 0x40000f14, 0x40000f18, 0x40000f1c, \
    0x40000f20, 0x40000f24, 0x40000f28, 0x40000f2c, \
    0x40000f30, 0x40000f34, 0x40000f38, 0x40000f3c, \
    0x40000f40, 0x40000f44, 0x40000f48, 0x40000f4c, \
    0x40000f50, 0x40000f54, 0x40000f58, 0x40000f5c, \
    0x40000f60, 0x40000f64, 0x40000f68, 0x40000f6c, \
    0x40000f70, 0x40000f74, 0xc0000f78, 0x00000006, \
    0x00000002, 0x40000f7c, 0x40000f94, 0x40000f80, \
    0x40000f98, 0x40000f84, 0x40000f9c, 0x40000f88, \
    0x40000fa0, 0x40000f8c, 0x40000fa4, 0x40000f90, \
    0x40000fa8, 0xc0000fac, 0x0000003c, 0x00000001, \
    0x40000fb0, 0x40000fb4, 0x40000fb8, 0x40000fbc, \
    0x40000fc0, 0x40000fc4, 0x40000fc8, 0x40000fcc, \
    0x40000fd0, 0x40000fd4, 0x40000fd8, 0x40000fdc, \
    0x40000fe0, 0x40000fe4, 0x40000fe8, 0x40000fec, \
    0x40000ff0, 0x40000ff4, 0x40000ff8, 0x40000ffc, \
    0x40001000, 0x40001004, 0x40001008, 0x4000100c, \
    0x40001010, 0x40001014, 0x40001018, 0x4000101c, \
    0x40001020, 0x40001024, 0x40001028, 0x4000102c, \
    0x40001030, 0x40001034, 0x40001038, 0x4000103c, \
    0x40001040, 0x40001044, 0x40001048, 0x4000104c, \
    0x40001050, 0x40001054, 0x40001058, 0x4000105c, \
    0x40001060, 0x40001064, 0x40001068, 0x4000106c, \
    0x40001070, 0x40001074, 0x40001078, 0x4000107c, \
    0x40001080, 0x40001084, 0x40001088, 0x4000108c, \
    0x40001090, 0x40001094, 0x40001098, 0x4000109c, \
    0xc00010a0, 0x00000006, 0x00000002, 0x400010a4, \
    0x400010bc, 0x400010a8, 0x400010c0, 0x400010ac, \
    0x400010c4, 0x400010b0, 0x400010c8, 0x400010b4, \
    0x400010cc, 0x400010b8, 0x400010d0, 0xc00010d4, \
    0x0000003c, 0x00000001, 0x400010d8, 0x400010dc, \
    0x400010e0, 0x400010e4, 0x400010e8, 0x400010ec, \
    0x400010f0, 0x400010f4, 0x400010f8, 0x400010fc, \
    0x40001100, 0x40001104, 0x40001108, 0x4000110c, \
    0x40001110, 0x40001114, 0x40001118, 0x4000111c, \
    0x40001120, 0x40001124, 0x40001128, 0x4000112c, \
    0x40001130, 0x40001134, 0x40001138, 0x4000113c, \
    0x40001140, 0x40001144, 0x40001148, 0x4000114c, \
    0x40001150, 0x40001154, 0x40001158, 0x4000115c, \
    0x40001160, 0x40001164, 0x40001168, 0x4000116c, \
    0x40001170, 0x40001174, 0x40001178, 0x4000117c, \
    0x40001180, 0x40001184, 0x40001188, 0x4000118c, \
    0x40001190, 0x40001194, 0x40001198, 0x4000119c, \
    0x400011a0, 0x400011a4, 0x400011a8, 0x400011ac, \
    0x400011b0, 0x400011b4, 0x400011b8, 0x400011bc, \
    0x400011c0, 0x400011c4, 0xc00011c8, 0x00000006, \
    0x00000002, 0x400011cc, 0x400011e4, 0x400011d0, \
    0x400011e8, 0x400011d4, 0x400011ec, 0x400011d8, \
    0x400011f0, 0x400011dc, 0x400011f4, 0x400011e0, \
    0x400011f8, 0xc00011fc, 0x0000003c, 0x00000001, \
    0x40001200, 0x40001204, 0x40001208, 0x4000120c, \
    0x40001210, 0x40001214, 0x40001218, 0x4000121c, \
    0x40001220, 0x40001224, 0x40001228, 0x4000122c, \
    0x40001230, 0x40001234, 0x40001238, 0x4000123c, \
    0x40001240, 0x40001244, 0x40001248, 0x4000124c, \
    0x40001250, 0x40001254, 0x40001258, 0x4000125c, \
    0x40001260, 0x40001264, 0x40001268, 0x4000126c, \
    0x40001270, 0x40001274, 0x40001278, 0x4000127c, \
    0x40001280, 0x40001284, 0x40001288, 0x4000128c, \
    0x40001290, 0x40001294, 0x40001298, 0x4000129c, \
    0x400012a0, 0x400012a4, 0x400012a8, 0x400012ac, \
    0x400012b0, 0x400012b4, 0x400012b8, 0x400012bc, \
    0x400012c0, 0x400012c4, 0x400012c8, 0x400012cc, \
    0x400012d0, 0x400012d4, 0x400012d8, 0x400012dc, \
    0x400012e0, 0x400012e4, 0x400012e8, 0x400012ec, \
    0xc00012f0, 0x00000006, 0x00000002, 0x400012f4, \
    0x4000130c, 0x400012f8, 0x40001310, 0x400012fc, \
    0x40001314, 0x40001300, 0x40001318, 0x40001304, \
    0x4000131c, 0x40001308, 0x40001320, 0xc0001324, \
    0x0000003c, 0x00000001, 0x40001328, 0x4000132c, \
    0x40001330, 0x40001334, 0x40001338, 0x4000133c, \
    0x40001340, 0x40001344, 0x40001348, 0x4000134c, \
    0x40001350, 0x40001354, 0x40001358, 0x4000135c, \
    0x40001360, 0x40001364, 0x40001368, 0x4000136c, \
    0x40001370, 0x40001374, 0x40001378, 0x4000137c, \
    0x40001380, 0x40001384, 0x40001388, 0x4000138c, \
    0x40001390, 0x40001394, 0x40001398, 0x4000139c, \
    0x400013a0, 0x400013a4, 0x400013a8, 0x400013ac, \
    0x400013b0, 0x400013b4, 0x400013b8, 0x400013bc, \
    0x400013c0, 0x400013c4, 0x400013c8, 0x400013cc, \
    0x400013d0, 0x400013d4, 0x400013d8, 0x400013dc, \
    0x400013e0, 0x400013e4, 0x400013e8, 0x400013ec, \
    0x400013f0, 0x400013f4, 0x400013f8, 0x400013fc, \
    0x40001400, 0x40001404, 0x40001408, 0x4000140c, \
    0x40001410, 0x40001414, 0xc0001418, 0x00000006, \
    0x00000002, 0x4000141c, 0x40001434, 0x40001420, \
    0x40001438, 0x40001424, 0x4000143c, 0x40001428, \
    0x40001440, 0x4000142c, 0x40001444, 0x40001430, \
    0x40001448, 0xc000144c, 0x0000003c, 0x00000001, \
    0x40001450, 0x40001454, 0x40001458, 0x4000145c, \
    0x40001460, 0x40001464, 0x40001468, 0x4000146c, \
    0x40001470, 0x40001474, 0x40001478, 0x4000147c, \
    0x40001480, 0x40001484, 0x40001488, 0x4000148c, \
    0x40001490, 0x40001494, 0x40001498, 0x4000149c, \
    0x400014a0, 0x400014a4, 0x400014a8, 0x400014ac, \
    0x400014b0, 0x400014b4, 0x400014b8, 0x400014bc, \
    0x400014c0, 0x400014c4, 0x400014c8, 0x400014cc, \
    0x400014d0, 0x400014d4, 0x400014d8, 0x400014dc, \
    0x400014e0, 0x400014e4, 0x400014e8, 0x400014ec, \
    0x400014f0, 0x400014f4, 0x400014f8, 0x400014fc, \
    0x40001500, 0x40001504, 0x40001508, 0x4000150c, \
    0x40001510, 0x40001514, 0x40001518, 0x4000151c, \
    0x40001520, 0x40001524, 0x40001528, 0x4000152c, \
    0x40001530, 0x40001534, 0x40001538, 0x4000153c, \
    0xc0001540, 0x00000006, 0x00000002, 0x40001544, \
    0x4000155c, 0x40001548, 0x40001560, 0x4000154c, \
    0x40001564, 0x40001550, 0x40001568, 0x40001554, \
    0x4000156c, 0x40001558, 0x40001570, 0xc0001574, \
    0x0000003c, 0x00000001, 0x40001578, 0x4000157c, \
    0x40001580, 0x40001584, 0x40001588, 0x4000158c, \
    0x40001590, 0x40001594, 0x40001598, 0x4000159c, \
    0x400015a0, 0x400015a4, 0x400015a8, 0x400015ac, \
    0x400015b0, 0x400015b4, 0x400015b8, 0x400015bc, \
    0x400015c0, 0x400015c4, 0x400015c8, 0x400015cc, \
    0x400015d0, 0x400015d4, 0x400015d8, 0x400015dc, \
    0x400015e0, 0x400015e4, 0x400015e8, 0x400015ec, \
    0x400015f0, 0x400015f4, 0x400015f8, 0x400015fc, \
    0x40001600, 0x40001604, 0x40001608, 0x4000160c, \
    0x40001610, 0x40001614, 0x40001618, 0x4000161c, \
    0x40001620, 0x40001624, 0x40001628, 0x4000162c, \
    0x40001630, 0x40001634, 0x40001638, 0x4000163c, \
    0x40001640, 0x40001644, 0x40001648, 0x4000164c, \
    0x40001650, 0x40001654, 0x40001658, 0x4000165c, \
    0x40001660, 0x40001664, 0xc0001668, 0x00000006, \
    0x00000002, 0x4000166c, 0x40001684, 0x40001670, \
    0x40001688, 0x40001674, 0x4000168c, 0x40001678, \
    0x40001690, 0x4000167c, 0x40001694, 0x40001680, \
    0x40001698, 0xc000169c, 0x0000003c, 0x00000001, \
    0x400016a0, 0x400016a4, 0x400016a8, 0x400016ac, \
    0x400016b0, 0x400016b4, 0x400016b8, 0x400016bc, \
    0x400016c0, 0x400016c4, 0x400016c8, 0x400016cc, \
    0x400016d0, 0x400016d4, 0x400016d8, 0x400016dc, \
    0x400016e0, 0x400016e4, 0x400016e8, 0x400016ec, \
    0x400016f0, 0x400016f4, 0x400016f8, 0x400016fc, \
    0x40001700, 0x40001704, 0x40001708, 0x4000170c, \
    0x40001710, 0x40001714, 0x40001718, 0x4000171c, \
    0x40001720, 0x40001724, 0x40001728, 0x4000172c, \
    0x40001730, 0x40001734, 0x40001738, 0x4000173c, \
    0x40001740, 0x40001744, 0x40001748, 0x4000174c, \
    0x40001750, 0x40001754, 0x40001758, 0x4000175c, \
    0x40001760, 0x40001764, 0x40001768, 0x4000176c, \
    0x40001770, 0x40001774, 0x40001778, 0x4000177c, \
    0x40001780, 0x40001784, 0x40001788, 0x4000178c, \
    0xc0001790, 0x00000006, 0x00000002, 0x40001794, \
    0x400017ac, 0x40001798, 0x400017b0, 0x4000179c, \
    0x400017b4, 0x400017a0, 0x400017b8, 0x400017a4, \
    0x400017bc, 0x400017a8, 0x400017c0, 0xc00017c4, \
    0x0000003c, 0x00000001, 0x400017c8, 0x400017cc, \
    0x400017d0, 0x400017d4, 0x400017d8, 0x400017dc, \
    0x400017e0, 0x400017e4, 0x400017e8, 0x400017ec, \
    0x400017f0, 0x400017f4, 0x400017f8, 0x400017fc, \
    0x40001800, 0x40001804, 0x40001808, 0x4000180c, \
    0x40001810, 0x40001814, 0x40001818, 0x4000181c, \
    0x40001820, 0x40001824, 0x40001828, 0x4000182c, \
    0x40001830, 0x40001834, 0x40001838, 0x4000183c, \
    0x40001840, 0x40001844, 0x40001848, 0x4000184c, \
    0x40001850, 0x40001854, 0x40001858, 0x4000185c, \
    0x40001860, 0x40001864, 0x40001868, 0x4000186c, \
    0x40001870, 0x40001874, 0x40001878, 0x4000187c, \
    0x40001880, 0x40001884, 0x40001888, 0x4000188c, \
    0x40001890, 0x40001894, 0x40001898, 0x4000189c, \
    0x400018a0, 0x400018a4, 0x400018a8, 0x400018ac, \
    0x400018b0, 0x400018b4, 0xc00018b8, 0x00000006, \
    0x00000002, 0x400018bc, 0x400018d4, 0x400018c0, \
    0x400018d8, 0x400018c4, 0x400018dc, 0x400018c8, \
    0x400018e0, 0x400018cc, 0x400018e4, 0x400018d0, \
    0x400018e8, 0xc00018ec, 0x0000003c, 0x00000001, \
    0x400018f0, 0x400018f4, 0x400018f8, 0x400018fc, \
    0x40001900, 0x40001904, 0x40001908, 0x4000190c, \
    0x40001910, 0x40001914, 0x40001918, 0x4000191c, \
    0x40001920, 0x40001924, 0x40001928, 0x4000192c, \
    0x40001930, 0x40001934, 0x40001938, 0x4000193c, \
    0x40001940, 0x40001944, 0x40001948, 0x4000194c, \
    0x40001950, 0x40001954, 0x40001958, 0x4000195c, \
    0x40001960, 0x40001964, 0x40001968, 0x4000196c, \
    0x40001970, 0x40001974, 0x40001978, 0x4000197c, \
    0x40001980, 0x40001984, 0x40001988, 0x4000198c, \
    0x40001990, 0x40001994, 0x40001998, 0x4000199c, \
    0x400019a0, 0x400019a4, 0x400019a8, 0x400019ac, \
    0x400019b0, 0x400019b4, 0x400019b8, 0x400019bc, \
    0x400019c0, 0x400019c4, 0x400019c8, 0x400019cc, \
    0x400019d0, 0x400019d4, 0x400019d8, 0x400019dc, \
    0xc00019e0, 0x00000006, 0x00000002, 0x400019e4, \
    0x400019fc, 0x400019e8, 0x40001a00, 0x400019ec, \
    0x40001a04, 0x400019f0, 0x40001a08, 0x400019f4, \
    0x40001a0c, 0x400019f8, 0x40001a10, 0xc0001a14, \
    0x0000003c, 0x00000001, 0x40001a18, 0x40001a1c, \
    0x40001a20, 0x40001a24, 0x40001a28, 0x40001a2c, \
    0x40001a30, 0x40001a34, 0x40001a38, 0x40001a3c, \
    0x40001a40, 0x40001a44, 0x40001a48, 0x40001a4c, \
    0x40001a50, 0x40001a54, 0x40001a58, 0x40001a5c, \
    0x40001a60, 0x40001a64, 0x40001a68, 0x40001a6c, \
    0x40001a70, 0x40001a74, 0x40001a78, 0x40001a7c, \
    0x40001a80, 0x40001a84, 0x40001a88, 0x40001a8c, \
    0x40001a90, 0x40001a94, 0x40001a98, 0x40001a9c, \
    0x40001aa0, 0x40001aa4, 0x40001aa8, 0x40001aac, \
    0x40001ab0, 0x40001ab4, 0x40001ab8, 0x40001abc, \
    0x40001ac0, 0x40001ac4, 0x40001ac8, 0x40001acc, \
    0x40001ad0, 0x40001ad4, 0x40001ad8, 0x40001adc, \
    0x40001ae0, 0x40001ae4, 0x40001ae8, 0x40001aec, \
    0x40001af0, 0x40001af4, 0x40001af8, 0x40001afc, \
    0x40001b00, 0x40001b04, 0xc0001b08, 0x00000006, \
    0x00000002, 0x40001b0c, 0x40001b24, 0x40001b10, \
    0x40001b28, 0x40001b14, 0x40001b2c, 0x40001b18, \
    0x40001b30, 0x40001b1c, 0x40001b34, 0x40001b20, \
    0x40001b38, 0xc0001b3c, 0x0000003c, 0x00000001, \
    0x40001b40, 0x40001b44, 0x40001b48, 0x40001b4c, \
    0x40001b50, 0x40001b54, 0x40001b58, 0x40001b5c, \
    0x40001b60, 0x40001b64, 0x40001b68, 0x40001b6c, \
    0x40001b70, 0x40001b74, 0x40001b78, 0x40001b7c, \
    0x40001b80, 0x40001b84, 0x40001b88, 0x40001b8c, \
    0x40001b90, 0x40001b94, 0x40001b98, 0x40001b9c, \
    0x40001ba0, 0x40001ba4, 0x40001ba8, 0x40001bac, \
    0x40001bb0, 0x40001bb4, 0x40001bb8, 0x40001bbc, \
    0x40001bc0, 0x40001bc4, 0x40001bc8, 0x40001bcc, \
    0x40001bd0, 0x40001bd4, 0x40001bd8, 0x40001bdc, \
    0x40001be0, 0x40001be4, 0x40001be8, 0x40001bec, \
    0x40001bf0, 0x40001bf4, 0x40001bf8, 0x40001bfc, \
    0x40001c00, 0x40001c04, 0x40001c08, 0x40001c0c, \
    0x40001c10, 0x40001c14, 0x40001c18, 0x40001c1c, \
    0x40001c20, 0x40001c24, 0x40001c28, 0x40001c2c, \
    0xc0001c30, 0x00000006, 0x00000002, 0x40001c34, \
    0x40001c4c, 0x40001c38, 0x40001c50, 0x40001c3c, \
    0x40001c54, 0x40001c40, 0x40001c58, 0x40001c44, \
    0x40001c5c, 0x40001c48, 0x40001c60, 0xc0001c64, \
    0x0000003c, 0x00000001, 0x40001c68, 0x40001c6c, \
    0x40001c70, 0x40001c74, 0x40001c78, 0x40001c7c, \
    0x40001c80, 0x40001c84, 0x40001c88, 0x40001c8c, \
    0x40001c90, 0x40001c94, 0x40001c98, 0x40001c9c, \
    0x40001ca0, 0x40001ca4, 0x40001ca8, 0x40001cac, \
    0x40001cb0, 0x40001cb4, 0x40001cb8, 0x40001cbc, \
    0x40001cc0, 0x40001cc4, 0x40001cc8, 0x40001ccc, \
    0x40001cd0, 0x40001cd4, 0x40001cd8, 0x40001cdc, \
    0x40001ce0, 0x40001ce4, 0x40001ce8, 0x40001cec, \
    0x40001cf0, 0x40001cf4, 0x40001cf8, 0x40001cfc, \
    0x40001d00, 0x40001d04, 0x40001d08, 0x40001d0c, \
    0x40001d10, 0x40001d14, 0x40001d18, 0x40001d1c, \
    0x40001d20, 0x40001d24, 0x40001d28, 0x40001d2c, \
    0x40001d30, 0x40001d34, 0x40001d38, 0x40001d3c, \
    0x40001d40, 0x40001d44, 0x40001d48, 0x40001d4c, \
    0x40001d50, 0x40001d54, 0xc0001d58, 0x00000006, \
    0x00000002, 0x40001d5c, 0x40001d74, 0x40001d60, \
    0x40001d78, 0x40001d64, 0x40001d7c, 0x40001d68, \
    0x40001d80, 0x40001d6c, 0x40001d84, 0x40001d70, \
    0x40001d88, 0xc0001d8c, 0x0000003c, 0x00000001, \
    0x40001d90, 0x40001d94, 0x40001d98, 0x40001d9c, \
    0x40001da0, 0x40001da4, 0x40001da8, 0x40001dac, \
    0x40001db0, 0x40001db4, 0x40001db8, 0x40001dbc, \
    0x40001dc0, 0x40001dc4, 0x40001dc8, 0x40001dcc, \
    0x40001dd0, 0x40001dd4, 0x40001dd8, 0x40001ddc, \
    0x40001de0, 0x40001de4, 0x40001de8, 0x40001dec, \
    0x40001df0, 0x40001df4, 0x40001df8, 0x40001dfc, \
    0x40001e00, 0x40001e04, 0x40001e08, 0x40001e0c, \
    0x40001e10, 0x40001e14, 0x40001e18, 0x40001e1c, \
    0x40001e20, 0x40001e24, 0x40001e28, 0x40001e2c, \
    0x40001e30, 0x40001e34, 0x40001e38, 0x40001e3c, \
    0x40001e40, 0x40001e44, 0x40001e48, 0x40001e4c, \
    0x40001e50, 0x40001e54, 0x40001e58, 0x40001e5c, \
    0x40001e60, 0x40001e64, 0x40001e68, 0x40001e6c, \
    0x40001e70, 0x40001e74, 0x40001e78, 0x40001e7c, \
    0xc0001e80, 0x00000006, 0x00000002, 0x40001e84, \
    0x40001e9c, 0x40001e88, 0x40001ea0, 0x40001e8c, \
    0x40001ea4, 0x40001e90, 0x40001ea8, 0x40001e94, \
    0x40001eac, 0x40001e98, 0x40001eb0, 0xc0001eb4, \
    0x0000003c, 0x00000001, 0x40001eb8, 0x40001ebc, \
    0x40001ec0, 0x40001ec4, 0x40001ec8, 0x40001ecc, \
    0x40001ed0, 0x40001ed4, 0x40001ed8, 0x40001edc, \
    0x40001ee0, 0x40001ee4, 0x40001ee8, 0x40001eec, \
    0x40001ef0, 0x40001ef4, 0x40001ef8, 0x40001efc, \
    0x40001f00, 0x40001f04, 0x40001f08, 0x40001f0c, \
    0x40001f10, 0x40001f14, 0x40001f18, 0x40001f1c, \
    0x40001f20, 0x40001f24, 0x40001f28, 0x40001f2c, \
    0x40001f30, 0x40001f34, 0x40001f38, 0x40001f3c, \
    0x40001f40, 0x40001f44, 0x40001f48, 0x40001f4c, \
    0x40001f50, 0x40001f54, 0x40001f58, 0x40001f5c, \
    0x40001f60, 0x40001f64, 0x40001f68, 0x40001f6c, \
    0x40001f70, 0x40001f74, 0x40001f78, 0x40001f7c, \
    0x40001f80, 0x40001f84, 0x40001f88, 0x40001f8c, \
    0x40001f90, 0x40001f94, 0x40001f98, 0x40001f9c, \
    0x40001fa0, 0x40001fa4, 0xc0001fa8, 0x00000006, \
    0x00000002, 0x40001fac, 0x40001fc4, 0x40001fb0, \
    0x40001fc8, 0x40001fb4, 0x40001fcc, 0x40001fb8, \
    0x40001fd0, 0x40001fbc, 0x40001fd4, 0x40001fc0, \
    0x40001fd8, 0xc0001fdc, 0x0000003c, 0x00000001, \
    0x40001fe0, 0x40001fe4, 0x40001fe8, 0x40001fec, \
    0x40001ff0, 0x40001ff4, 0x40001ff8, 0x40001ffc, \
    0x40002000, 0x40002004, 0x40002008, 0x4000200c, \
    0x40002010, 0x40002014, 0x40002018, 0x4000201c, \
    0x40002020, 0x40002024, 0x40002028, 0x4000202c, \
    0x40002030, 0x40002034, 0x40002038, 0x4000203c, \
    0x40002040, 0x40002044, 0x40002048, 0x4000204c, \
    0x40002050, 0x40002054, 0x40002058, 0x4000205c, \
    0x40002060, 0x40002064, 0x40002068, 0x4000206c, \
    0x40002070, 0x40002074, 0x40002078, 0x4000207c, \
    0x40002080, 0x40002084, 0x40002088, 0x4000208c, \
    0x40002090, 0x40002094, 0x40002098, 0x4000209c, \
    0x400020a0, 0x400020a4, 0x400020a8, 0x400020ac, \
    0x400020b0, 0x400020b4, 0x400020b8, 0x400020bc, \
    0x400020c0, 0x400020c4, 0x400020c8, 0x400020cc, \
    0xc00020d0, 0x00000006, 0x00000002, 0x400020d4, \
    0x400020ec, 0x400020d8, 0x400020f0, 0x400020dc, \
    0x400020f4, 0x400020e0, 0x400020f8, 0x400020e4, \
    0x400020fc, 0x400020e8, 0x40002100, 0xc0002104, \
    0x0000003c, 0x00000001, 0x40002108, 0x4000210c, \
    0x40002110, 0x40002114, 0x40002118, 0x4000211c, \
    0x40002120, 0x40002124, 0x40002128, 0x4000212c, \
    0x40002130, 0x40002134, 0x40002138, 0x4000213c, \
    0x40002140, 0x40002144, 0x40002148, 0x4000214c, \
    0x40002150, 0x40002154, 0x40002158, 0x4000215c, \
    0x40002160, 0x40002164, 0x40002168, 0x4000216c, \
    0x40002170, 0x40002174, 0x40002178, 0x4000217c, \
    0x40002180, 0x40002184, 0x40002188, 0x4000218c, \
    0x40002190, 0x40002194, 0x40002198, 0x4000219c, \
    0x400021a0, 0x400021a4, 0x400021a8, 0x400021ac, \
    0x400021b0, 0x400021b4, 0x400021b8, 0x400021bc, \
    0x400021c0, 0x400021c4, 0x400021c8, 0x400021cc, \
    0x400021d0, 0x400021d4, 0x400021d8, 0x400021dc, \
    0x400021e0, 0x400021e4, 0x400021e8, 0x400021ec, \
    0x400021f0, 0x400021f4, 0xc00021f8, 0x00000006, \
    0x00000002, 0x400021fc, 0x40002214, 0x40002200, \
    0x40002218, 0x40002204, 0x4000221c, 0x40002208, \
    0x40002220, 0x4000220c, 0x40002224, 0x40002210, \
    0x40002228, 0xc000222c, 0x0000003c, 0x00000001, \
    0x40002230, 0x40002234, 0x40002238, 0x4000223c, \
    0x40002240, 0x40002244, 0x40002248, 0x4000224c, \
    0x40002250, 0x40002254, 0x40002258, 0x4000225c, \
    0x40002260, 0x40002264, 0x40002268, 0x4000226c, \
    0x40002270, 0x40002274, 0x40002278, 0x4000227c, \
    0x40002280, 0x40002284, 0x40002288, 0x4000228c, \
    0x40002290, 0x40002294, 0x40002298, 0x4000229c, \
    0x400022a0, 0x400022a4, 0x400022a8, 0x400022ac, \
    0x400022b0, 0x400022b4, 0x400022b8, 0x400022bc, \
    0x400022c0, 0x400022c4, 0x400022c8, 0x400022cc, \
    0x400022d0, 0x400022d4, 0x400022d8, 0x400022dc, \
    0x400022e0, 0x400022e4, 0x400022e8, 0x400022ec, \
    0x400022f0, 0x400022f4, 0x400022f8, 0x400022fc, \
    0x40002300, 0x40002304, 0x40002308, 0x4000230c, \
    0x40002310, 0x40002314, 0x40002318, 0x4000231c, \
    0xc0002320, 0x00000006, 0x00000002, 0x40002324, \
    0x4000233c, 0x40002328, 0x40002340, 0x4000232c, \
    0x40002344, 0x40002330, 0x40002348, 0x40002334, \
    0x4000234c, 0x40002338, 0x40002350, 0xc0002354, \
    0x0000003c, 0x00000001, 0x40002358, 0x4000235c, \
    0x40002360, 0x40002364, 0x40002368, 0x4000236c, \
    0x40002370, 0x40002374, 0x40002378, 0x4000237c, \
    0x40002380, 0x40002384, 0x40002388, 0x4000238c, \
    0x40002390, 0x40002394, 0x40002398, 0x4000239c, \
    0x400023a0, 0x400023a4, 0x400023a8, 0x400023ac, \
    0x400023b0, 0x400023b4, 0x400023b8, 0x400023bc, \
    0x400023c0, 0x400023c4, 0x400023c8, 0x400023cc, \
    0x400023d0, 0x400023d4, 0x400023d8, 0x400023dc, \
    0x400023e0, 0x400023e4, 0x400023e8, 0x400023ec, \
    0x400023f0, 0x400023f4, 0x400023f8, 0x400023fc, \
    0x40002400, 0x40002404, 0x40002408, 0x4000240c, \
    0x40002410, 0x40002414, 0x40002418, 0x4000241c, \
    0x40002420, 0x40002424, 0x40002428, 0x4000242c, \
    0x40002430, 0x40002434, 0x40002438, 0x4000243c, \
    0x40002440, 0x40002444, 0xc0002448, 0x00000006, \
    0x00000002, 0x4000244c, 0x40002464, 0x40002450, \
    0x40002468, 0x40002454, 0x4000246c, 0x40002458, \
    0x40002470, 0x4000245c, 0x40002474, 0x40002460, \
    0x40002478, 0xc000247c, 0x0000003c, 0x00000001, \
    0x40002480, 0x40002484, 0x40002488, 0x4000248c, \
    0x40002490, 0x40002494, 0x40002498, 0x4000249c, \
    0x400024a0, 0x400024a4, 0x400024a8, 0x400024ac, \
    0x400024b0, 0x400024b4, 0x400024b8, 0x400024bc, \
    0x400024c0, 0x400024c4, 0x400024c8, 0x400024cc, \
    0x400024d0, 0x400024d4, 0x400024d8, 0x400024dc, \
    0x400024e0, 0x400024e4, 0x400024e8, 0x400024ec, \
    0x400024f0, 0x400024f4, 0x400024f8, 0x400024fc, \
    0x40002500, 0x40002504, 0x40002508, 0x4000250c, \
    0x40002510, 0x40002514, 0x40002518, 0x4000251c, \
    0x40002520, 0x40002524, 0x40002528, 0x4000252c, \
    0x40002530, 0x40002534, 0x40002538, 0x4000253c, \
    0x40002540, 0x40002544, 0x40002548, 0x4000254c, \
    0x40002550, 0x40002554, 0x40002558, 0x4000255c, \
    0x40002560, 0x40002564, 0x40002568, 0x4000256c, \
    0xc0002570, 0x00000006, 0x00000002, 0x40002574, \
    0x4000258c, 0x40002578, 0x40002590, 0x4000257c, \
    0x40002594, 0x40002580, 0x40002598, 0x40002584, \
    0x4000259c, 0x40002588, 0x400025a0, 0xc00025a4, \
    0x0000003c, 0x00000001, 0x400025a8, 0x400025ac, \
    0x400025b0, 0x400025b4, 0x400025b8, 0x400025bc, \
    0x400025c0, 0x400025c4, 0x400025c8, 0x400025cc, \
    0x400025d0, 0x400025d4, 0x400025d8, 0x400025dc, \
    0x400025e0, 0x400025e4, 0x400025e8, 0x400025ec, \
    0x400025f0, 0x400025f4, 0x400025f8, 0x400025fc, \
    0x40002600, 0x40002604, 0x40002608, 0x4000260c, \
    0x40002610, 0x40002614, 0x40002618, 0x4000261c, \
    0x40002620, 0x40002624, 0x40002628, 0x4000262c, \
    0x40002630, 0x40002634, 0x40002638, 0x4000263c, \
    0x40002640, 0x40002644, 0x40002648, 0x4000264c, \
    0x40002650, 0x40002654, 0x40002658, 0x4000265c, \
    0x40002660, 0x40002664, 0x40002668, 0x4000266c, \
    0x40002670, 0x40002674, 0x40002678, 0x4000267c, \
    0x40002680, 0x40002684, 0x40002688, 0x4000268c, \
    0x40002690, 0x40002694, \
  } \
};

#endif/*__GUARD_H101_EXT_H101_H__*/

/*******************************************************/