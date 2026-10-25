// from server: 100% by colin
// roc 2008-06 004aba60  unit: RBX::Network::Replicator  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aba60
//
// 004aba60  6aff                 push -1
// 004aba62  687b847c00           push 0x7c847b
// 004aba67  64a100000000         mov eax, dword ptr fs:[0]
// 004aba6d  50                   push eax
// 004aba6e  64892500000000       mov dword ptr fs:[0], esp
// 004aba75  51                   push ecx
// 004aba76  56                   push esi
// 004aba77  57                   push edi
// 004aba78  8bf9                 mov edi, ecx
// 004aba7a  897c2408             mov dword ptr [esp + 8], edi
// 004aba7e  8b4708               mov eax, dword ptr [edi + 8]
// 004aba81  8d7708               lea esi, [edi + 8]
// 004aba84  83c007               add eax, 7
// 004aba87  c1f803               sar eax, 3
// 004aba8a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004aba92  85c0                 test eax, eax
// 004aba94  7e2e                 jle 0x4abac4
// 004aba96  6a00                 push 0
// 004aba98  56                   push esi
// 004aba99  e832fbffff           call 0x4ab5d0
// 004aba9e  8b4f04               mov ecx, dword ptr [edi + 4]
// 004abaa1  8b3f                 mov edi, dword ptr [edi]
// 004abaa3  8b97582d0000         mov edx, dword ptr [edi + 0x2d58]
// 004abaa9  8b01                 mov eax, dword ptr [ecx]
// 004abaab  8b4034               mov eax, dword ptr [eax + 0x34]
// 004abaae  83c408               add esp, 8
// 004abab1  6a00                 push 0
// 004abab3  52                   push edx
// 004abab4  8b97542d0000         mov edx, dword ptr [edi + 0x2d54]
// 004ababa  52                   push edx
// 004ababb  6a00                 push 0
// 004ababd  6a03                 push 3
// 004ababf  6a02                 push 2
// 004abac1  56                   push esi
// 004abac2  ffd0                 call eax
// 004abac4  8bce                 mov ecx, esi
// 004abac6  e8f596ffff           call 0x4a51c0
// 004abacb  8bce                 mov ecx, esi
// 004abacd  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004abad5  e8c696ffff           call 0x4a51a0
// 004abada  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004abade  5f                   pop edi
// 004abadf  5e                   pop esi
// 004abae0  64890d00000000       mov dword ptr fs:[0], ecx
// 004abae7  83c410               add esp, 0x10
// 004abaea  c3                   ret 



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
    int bytes = (stream.bitsUsed + 7) >> 3;
    if (bytes > 0) {
        Prepare(&stream, 0);
        Peer* p = peer;
        Owner* o = owner;
        p->table->Send(p, &stream, 2, 3, 0,
                       o->address, o->port, 0);
    }
    stream.Reset();
}
