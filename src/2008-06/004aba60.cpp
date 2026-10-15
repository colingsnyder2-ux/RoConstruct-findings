// from server: 92% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
struct BitStream {
    int bitsUsed;
    int bitsAllocated;
    int readOffset;
    unsigned char* data;
    bool ownsData;

    void Reset();
    ~BitStream();
};

extern void __cdecl Prepare(BitStream*, int);

struct Peer;

struct PeerTable {
    void* entries[13];
    bool (__thiscall* Send)(Peer*, BitStream*, int, int, int,
                           unsigned int, unsigned int, int);
};

struct Peer {
    PeerTable* table;
};

struct Owner {
    unsigned char padding[0x2D54];
    unsigned int address;
    unsigned int port;
};

struct S {
    Owner* owner;
    Peer* peer;
    BitStream stream;

    ~S();
};

S::~S()
{
    if (((stream.bitsUsed + 7) >> 3) > 0) {
        Prepare(&stream, 0);
        peer->table->Send(peer, &stream, 2, 3, 0,
                          owner->address, owner->port, 0);
    }
    stream.Reset();
}
