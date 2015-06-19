/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::isEqual */ isEqual;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::IfBlock1::then::_L1 */ _L1_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::IfBlock1::then::_L2 */ _L2_IfBlock1;
  CompressedPackets_T_Common_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::IfBlock1::then::_L3 */ _L3_IfBlock1;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::IfBlock1::then::_L4 */ _L4_IfBlock1;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::IfBlock1::then::_L5 */ _L5_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::IfBlock1::else::_L1 */ _L11_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::IfBlock1 */ IfBlock1_clock;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::HeaderIsEqual */ HeaderIsEqual;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::_L1 */ _L1;
  Telegram_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::_L2 */ _L2;
  TelegramHeader_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::_L3 */ _L3;
  TelegramHeader_T_BG_Types_Pkg /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::_L4 */ _L4;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::_L5 */ _L5;
} outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams */
extern void compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::inTelegram1 */Telegram_T_BG_Types_Pkg *inTelegram1,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::inTelegram2 */Telegram_T_BG_Types_Pkg *inTelegram2,
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

extern void compareTelegrams_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#endif /* _compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

