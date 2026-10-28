// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
struct Address {
    unsigned int ip;
    unsigned short port;
    unsigned short padding;
    bool equals(const Address*);
};

struct Packet {
    unsigned int unused;
    Address address;
    unsigned int length;
    unsigned int bitLength;
    unsigned char* data;
};

struct BitStream {
    unsigned int bitsUsed;
    unsigned int bitsAllocated;
    unsigned int readOffset;
    unsigned char* data;
    bool ownsData;
    unsigned char buffer[256];

    BitStream();
    BitStream(unsigned char*, unsigned int, bool);
    ~BitStream();
    void ignoreBits(int);
};

extern void __cdecl writeByte(BitStream*, unsigned char);

struct Guard {
    unsigned char storage[40];
    Guard(void*, int);
    ~Guard();
};

struct Channel {
    void write(BitStream*);
    void read(BitStream*);
};

struct Handler {
    int process(Packet*);
};

struct Peer {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual bool send(BitStream*, int, int, char, Address, bool);
};

struct Replicator {
    unsigned char storage[0x1a8];
    void* mutex;
    unsigned char padding[0x34];
    Address address;

    int process(Peer*, Packet*);
};

int Replicator::process(Peer* peer, Packet* packet)
{
    if (packet->address.equals(&address)) {
        Guard guard(mutex, 0);
        try {
            switch (*packet->data) {
            case 13:
                return reinterpret_cast<Handler*>(
                    reinterpret_cast<char*>(this) - 0x2b74)->process(packet);

            case 77:
                {
                    BitStream stream;
                    writeByte(&stream, 77);
                    reinterpret_cast<Channel*>(storage + 0x3c)->write(&stream);
                    reinterpret_cast<Channel*>(storage + 0x80)->write(&stream);
                    peer->send(&stream, 2, 3, 0, address, false);
                }
                break;

            case 79:
                {
                    BitStream stream(packet->data, packet->length, false);
                    stream.ignoreBits(8);
                    reinterpret_cast<Channel*>(storage + 0x60)->read(&stream);
                    reinterpret_cast<Channel*>(storage + 0xa4)->read(&stream);
                }
                break;
            }
        }
        catch (...) {
            throw;
        }
    }
    return 1;
}
