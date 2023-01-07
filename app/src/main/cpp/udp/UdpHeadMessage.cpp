#include "UdpHeadMessage.h"

#include "../android/LogMessage.cpp"

void UdpHeadMessage::sendMessage(Header header) {
    int res = socket(PF_INET, SOCK_DGRAM, 0);
    if (res == -1){
        OLOGD("create udp fail");
        return;
    }
    OLOGD("create udp success");

}