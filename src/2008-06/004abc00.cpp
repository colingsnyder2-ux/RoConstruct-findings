// from server: 99% by king_originala
struct Packet {
    unsigned char reserved0[12];
    unsigned int length;
    unsigned int reserved1;
    unsigned char* data;
};

struct BitStream {
    unsigned int bitsUsed;
    unsigned int bitsAllocated;
    unsigned int readOffset;
    unsigned char* data;
    bool ownsData;
    unsigned char buffer[256];

    BitStream(unsigned char*, unsigned int, bool);
    ~BitStream();
    void IgnoreBits(int);
};

extern bool __cdecl ReadUnsigned(BitStream*, unsigned int*);
extern bool __cdecl ReadByte(BitStream*, unsigned char*);

struct Guard {
    unsigned char storage[24];

    Guard(void*, int);
    ~Guard();
};

struct Receiver {
    virtual void slot0();
    virtual void slot1();
    virtual void receive(BitStream*, unsigned int);
};

struct S {
    unsigned char reserved0[0x2b84];
    Receiver* receiver;
    unsigned char reserved1[0x2d2c - 0x2b88];
    void* guardObject;

    int process(Packet*);
};

int S::process(Packet* packet)
{
    BitStream stream(packet->data, packet->length, false);
    stream.IgnoreBits(8);

    unsigned int value;
    unsigned char type;
    ReadUnsigned(&stream, &value);
    ReadByte(&stream, &type);

    if (type != 0x50)
        return 1;

    Guard guard(guardObject, 0);
    receiver->receive(&stream, value);
    return 0;
}
