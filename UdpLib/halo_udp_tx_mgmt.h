#ifndef HALO_UDP_TX_MGMT_H
#define HALO_UDP_TX_MGMT_H


#include <netinet/in.h>

#include "../types.h"
#include "tx_mgmt_buffer.h"

typedef struct
{
    TxMgmtBuffer txMgmtBuffer;
    uint8 txRetryCount;
}
HaloUdpTxMgmt;

#define HALO_UDP_TX_MGMT_INIT() { \
 .txMgmtBuffer = TX_MGMT_BUFFER_INIT(), \
 .txRetryCount = 0, \
}

int enqueue_tx_packet(HaloUdpTxMgmt *txMgmt, uint8 *data, int len, uint16 seqNum,
                      struct sockaddr_in socketAddress, socklen_t socketAddressLength);

int peek_tx_packet(HaloUdpTxMgmt *txMgmt, int offset, uint8 **data, int *len, uint16 *seqNum,
                   struct sockaddr_in *socketAddress, socklen_t *socketAddressLength);

int dequeue_tx_packet(HaloUdpTxMgmt *txMgmt, struct sockaddr_in socketAddress, socklen_t socketAddressLength,
                      uint16 seqNum);

int pending_tx_packet(HaloUdpTxMgmt *txMgmt);

int tx_packet_queue_size(HaloUdpTxMgmt *txMgmt);

#endif //HALO_UDP_TX_MGMT_H