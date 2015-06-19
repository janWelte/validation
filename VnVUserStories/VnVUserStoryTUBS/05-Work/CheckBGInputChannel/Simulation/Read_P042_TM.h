/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Read_P042_TM_H_
#define _Read_P042_TM_H_

#include "kcg_types.h"
#include "RECV_ReadPackets_TM_lib_internal.h"
#include "C_P042_compr_onboard_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P42_SessionManagement_T_Packet_Types_Pkg /* TM::Read_P042::P042_OBU_out */ P042_OBU_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P042_compr_onboard_TM_conversions /* 2 */ Context_2;
  outC_RECV_ReadPackets_TM_lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int_500 /* TM::Read_P042::_L5 */ _L5;
  CompressedPackets_T_Common_Types_Pkg /* TM::Read_P042::_L6 */ _L6;
  MetadataElement_T_Common_Types_Pkg /* TM::Read_P042::_L30 */ _L30;
  P42_SessionManagement_T_Packet_Types_Pkg /* TM::Read_P042::_L166 */ _L166;
} outC_Read_P042_TM;

/* ===========  node initialization and cycle functions  =========== */
/* TM::Read_P042 */
extern void Read_P042_TM(
  /* TM::Read_P042::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P042_TM *outC);

extern void Read_P042_reset_TM(outC_Read_P042_TM *outC);

#endif /* _Read_P042_TM_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P042_TM.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

