// from server: 100% by king_originala
// roc 2008-06 004c9a10  unit: RBX::Network::InterpolatingPhysicsReceiver  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c9a10
//
// 004c9a10  56                   push esi
// 004c9a11  8bf1                 mov esi, ecx
// 004c9a13  8b4618               mov eax, dword ptr [esi + 0x18]
// 004c9a16  57                   push edi
// 004c9a17  8d7e18               lea edi, [esi + 0x18]
// 004c9a1a  83c007               add eax, 7
// 004c9a1d  a9f8ffffff           test eax, 0xfffffff8
// 004c9a22  7e3c                 jle 0x4c9a60
// 004c9a24  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c9a27  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c9a2a  53                   push ebx
// 004c9a2b  6a00                 push 0
// 004c9a2d  57                   push edi
// 004c9a2e  e8adf0fdff           call 0x4a8ae0
// 004c9a33  8b4608               mov eax, dword ptr [esi + 8]
// 004c9a36  8b4004               mov eax, dword ptr [eax + 4]
// 004c9a39  8b98582d0000         mov ebx, dword ptr [eax + 0x2d58]
// 004c9a3f  8b80542d0000         mov eax, dword ptr [eax + 0x2d54]
// 004c9a45  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004c9a48  8b11                 mov edx, dword ptr [ecx]
// 004c9a4a  8b5234               mov edx, dword ptr [edx + 0x34]
// 004c9a4d  6a00                 push 0
// 004c9a4f  53                   push ebx
// 004c9a50  50                   push eax
// 004c9a51  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 004c9a57  6a00                 push 0
// 004c9a59  6a04                 push 4
// 004c9a5b  50                   push eax
// 004c9a5c  57                   push edi
// 004c9a5d  ffd2                 call edx
// 004c9a5f  5b                   pop ebx
// 004c9a60  5f                   pop edi
// 004c9a61  c6461000             mov byte ptr [esi + 0x10], 0
// 004c9a65  5e                   pop esi
// 004c9a66  c3                   ret 

struct Stream {
    int bits;
    char padding[272];
};

struct Address {
    unsigned int low;
    unsigned int high;
};

struct PeerState {
    char padding[0x2d54];
    Address address;
    void prepare(Stream*, int);
};

struct Holder {
    int padding;
    PeerState* state;
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
    virtual bool send(Stream*, int, int, char, Address, bool);
};

struct Receiver {
    char padding0[8];
    Holder* holder;
    Peer* peer;
    unsigned char pending;
    char padding1[7];
    Stream stream;
    int priority;

    void flush();
};

void Receiver::flush()
{
    if (((stream.bits + 7) & ~7) > 0) {
        holder->state->prepare(&stream, 0);
        Address address = holder->state->address;
        peer->send(&stream, priority, 4, 0, address, false);
    }
    pending = 0;
}
