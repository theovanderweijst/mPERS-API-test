#ifndef MY_HALO_UDP_H
#define MY_HALO_UDP_H

#include "../types.h"

#define MSG_RECEIVED_ACK  1   //Indicates that a message was received
#define DATA_AVAILABLE    2   //Indicates that there is a new message in this datagram
#define NEW_SESSION       4   //Indicates that a new session is starting and all old state date needs to be cleared
#define SESSION_RESTARTED 8   //Confirms that a session was successfully restarted
#define SESSION_REJECTED  16  //Rejectst the proposed session number

typedef struct _MyHaloUdpHeader
{
    uint8  status;
    uint8  mgmt;
    uint16 seqNum;
    uint16 ackSeqNum;
    uint8  sessionNum;
    uint8  ackSessionNum;
    uint16 payloadLength;
    uint8  reserved2[2];
}
MyHaloUdpHeader;

#endif //MY_HALO_UDP_H