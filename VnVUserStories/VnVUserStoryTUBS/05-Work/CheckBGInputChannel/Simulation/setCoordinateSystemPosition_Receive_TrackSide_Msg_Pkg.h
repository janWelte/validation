/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg_H_
#define _setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::outUpdateBGPosition */ outUpdateBGPosition;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L1 */ _L1;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L2 */ _L2;
  N_PIG /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L3 */ _L3;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L4 */ _L4;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L5 */ _L5;
  N_PIG /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L6 */ _L6;
  centerOfBalisePosition_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L7 */ _L7;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L9 */ _L9;
  N_PIG /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L8 */ _L8;
  M_DUP /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L10 */ _L10;
  M_DUP /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L11 */ _L11;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L12 */ _L12;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L13 */ _L13;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L14 */ _L14;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L16 */ _L16;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::_L18 */ _L18;
} outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition */
extern void setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::inOldPosition */centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::incenterOfBalisePosition */centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg *outC);

extern void setCoordinateSystemPosition_reset_Receive_TrackSide_Msg_Pkg(
  outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg *outC);

#endif /* _setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

