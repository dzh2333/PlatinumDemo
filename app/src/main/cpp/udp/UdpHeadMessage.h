#include <jni.h>
#include <string>
#include <sys/socket.h>


class UdpHeadMessage{
public:
    struct Header{
        char host;
        char man;
        char mx;

    };
    virtual void sendMessage(Header header);
};