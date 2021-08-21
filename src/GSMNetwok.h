#ifndef __GSM_NETWORK_H__
#define __GSM_NETWORK_H__

#include "Arduino.h"
#include "SIMBase.h"

class GSMNetwork {
    public:
        GSMNetwork() ;
        
        // TCP
        bool isNetworkOpen() ;
        bool networkOpen(uint32_t timeout = 30000) ;
        bool networkClose() ;

        // Real Network
        String getCurrentCarrier() ;
        int getSignalStrength() ;

};

extern GSMNetwork Network;

#endif

