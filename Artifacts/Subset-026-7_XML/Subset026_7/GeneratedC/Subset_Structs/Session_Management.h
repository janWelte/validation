#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_Session_Management
#define NESTINGMARK_oETCS_Packet_TrackToTrain_Session_Management
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_Session_Management
- Description: UNISIG SUBSET-026-7, ISSUE : 3.3.0, 3.5 ERTMS/ETCS language) 
- Copyright (c) Siemens AG, 2013, All Rights Reserved
 	
- Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl )
- Gist URL: none
- Cryptography: No
- Author(s): SiemensRailAutomation

Disclaimer:

The use of this software is limited to NON-vital applications. 
It has NOT been developed for vital operation purposes and MUST NOT be used for applications 
which may cause harm to people, physical accidents or financial loss. 

THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  	
============================================================================= */
#include <stdint.h>

struct DATA_oETCS_TrackToTrain_Session_Management {
  int vUsed_idx;                             // aktueller Fuellgrad von aPacket

  struct 
  {
          uint32_t v_TOccurence;            // Zeitpunkt des Empfangs
          uint64_t v_DOccurrence;           // Ort des Empfangs
          uint32_t vState;                  // Bearbeitungszustände  
  } info;

  struct 
 { 
// TransmissionMedia=Balise, RBC
// Packet to give the identity and telephone number of the RBC with which a session shall be established or terminated.
// Packet Number = 42

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t Q_RBC;                                  			// # 1	
	uint32_t NID_C;                                  			// # 10		// RBC ETCS identity : NID_C not relevant if NID_RBC has value 'Contact last known RBC'
	uint32_t NID_RBC;                                			// # 14	
	uint32_t NID_RADIO;                              			// # 64		// not relevant if NID_RBC has value 'Contact last known RBC'
	uint32_t Q_SLEEPSESSION;                         			// # 1	
} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_Session_Management T_DATA_oETCS_TrackToTrain_Session_Management;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_Session_Management* TP_DATA_oETCS_TrackToTrain_Session_Management;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_Session_Management  oETCS_Packet_TrackToTrain_Session_Management;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_Session_Management  oETCS_Packet_TrackToTrain_Session_Management = new(T_DATA_oETCS_TrackToTrain_Session_Management);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_Session_Management->...
// maybe : memset(oETCS_Packet_TrackToTrain_Session_Management, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_Session_Management));
// for complete 0 content.

#endif


