#include "client_tests.h"
#include "client_test_impl.h"

const TestItem packetTests[] =
{
    {"Send Dynamic Vitals Msg", sendDynamicVitalsPkt},
    {"Send Panic Msg", sendPanicMsgPkt},
    {"HaloUDP New Session", start_new_halo_udp_session},
    {"HaloUDP Loopback Enable", halo_udp_loopback_enable},
    {"HaloUDP Loopback Disable", halo_udp_loopback_disable},
    {"HaloUDP BadCrc Enable", halo_udp_bad_crc_enable},
    {"HaloUDP BadCrc Disable", halo_udp_bad_crc_disable},
    {"HaloUDP NeverAck Enable", halo_udp_never_ack_enable},
    {"HaloUDP NeverAck Disable", halo_udp_never_ack_disable},
    {"HaloUDP NeverTxDrop Enable", halo_udp_never_tx_drop_enable},
    {"HaloUDP NeverTxDrop Disable", halo_udp_never_tx_drop_disable},
    {"HaloUDP DuplicateTx Enable", halo_udp_duplicate_tx_enable},
    {"HaloUDP DuplicateTx Disable", halo_udp_duplicate_tx_disable},
    {"HaloUDP OutOfSeqTx Enable", halo_udp_out_of_seq_tx_enable},
    {"HaloUDP OutOfSeqTx Disable", halo_udp_out_of_seq_tx_disable},
    {"Report Halo UDP Comm Dbg Params", halo_udp_print_dbg_comm_status},
};

TestSuite packetTesting =
{
    .testSuiteDescription = "Halo Message Tests",
    .testItems = packetTests,
    .testItemCount = (sizeof(packetTests)/sizeof(TestItem)),
};