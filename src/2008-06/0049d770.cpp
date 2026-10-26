// from server: 93% by colin
// from server: 88% by king_originala
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
    bool process(unsigned int, volatile Packet*);
};

bool S::process(unsigned int, volatile Packet* packet)
{
    S* owner = this;
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
            volatile unsigned int length = packet->length;
        }
        catch (...) {
        }
        break;

    case 0x52:
        try {
            if (owner->handler) {
                Stream stream(packet->data, packet->length, false);
                stream.skip(8);
                Message message;
                readWord(&stream, &message.first);
                readWord(&stream, &message.second);
                readValue(&stream, message.third);
                Handler* callback = owner->handler;
                owner = reinterpret_cast<S*>(
                    reinterpret_cast<unsigned char*>(owner) + 376);
                callback->invoke(&message, owner);
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
