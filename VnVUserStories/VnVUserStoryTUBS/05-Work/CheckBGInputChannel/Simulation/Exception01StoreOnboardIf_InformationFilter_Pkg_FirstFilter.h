/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter_H_
#define _Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition::outAcceptMessage */ outAcceptMessage;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition::outStoreInTransitionBuffer */ outStoreInTransitionBuffer;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition::_L1 */ _L1;
  kcg_bool /* InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition::_L2 */ _L2;
} outC_Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition */
extern void Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::Exception01StoreOnboardIfPendingL1Transition::inPendingL1Transition */kcg_bool inPendingL1Transition,
  outC_Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter *outC);

extern void Exception01StoreOnboardIf_reset_InformationFilter_Pkg_FirstFilter(
  outC_Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter *outC);

#endif /* _Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Exception01StoreOnboardIf_InformationFilter_Pkg_FirstFilter.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

