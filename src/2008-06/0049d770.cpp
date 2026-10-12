// from server: 66% by king_originala
struct Packet {
    unsigned char reserved[12];
    unsigned int length;
    unsigned int reserved10;
    unsigned char* data;
};

struct Stream {
    unsigned char storage[284];
    Stream(unsigned char*, unsigned int, bool);
    ~Stream();
    void skip(unsigned int);
};

struct Message {
    unsigned int first;
    unsigned int second;
    unsigned char third[56];
    Message();
    ~Message();
};

struct SmallMessage {
    unsigned char storage[16];
    SmallMessage();
    ~SmallMessage();
};

struct TinyMessage {
    unsigned char storage[4];
    TinyMessage();
    ~TinyMessage();
};

extern void __cdecl readWord(Stream*, unsigned int*);
extern void __cdecl readValue(Stream*, unsigned char*);

struct Handler {
    void invoke(Message*, void*);
};

struct S {
    unsigned char reserved[372];
    Handler* handler;
    unsigned char context[4];
    bool process(unsigned int, Packet*);
};

bool S::process(unsigned int, Packet* packet)
{
    switch (packet->data[0]) {
    case 0x51:
        try {
            SmallMessage a;
            SmallMessage b;
            SmallMessage c;
            SmallMessage d;
            SmallMessage e;
            SmallMessage f;
            TinyMessage g;
        }
        catch (...) {
        }
        break;

    case 0x52:
        try {
            if (handler) {
                Stream stream(packet->data, packet->length, false);
                stream.skip(8);
                Message message;
                readWord(&stream, &message.first);
                readWord(&stream, &message.second);
                readValue(&stream, message.third);
                handler->invoke(&message, context);
            }
        }
        catch (...) {
        }
        break;

    default:
        return true;
    }
    return false;
}
