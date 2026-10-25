// from server: 100% by king_originala
// roc 2008-06 004aeb10  unit: RBX::Network::Replicator::MarkerItem  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aeb10
//
// 004aeb10  6aff                 push -1
// 004aeb12  687b847c00           push 0x7c847b
// 004aeb17  64a100000000         mov eax, dword ptr fs:[0]
// 004aeb1d  50                   push eax
// 004aeb1e  64892500000000       mov dword ptr fs:[0], esp
// 004aeb25  51                   push ecx
// 004aeb26  55                   push ebp
// 004aeb27  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004aeb2b  56                   push esi
// 004aeb2c  8bf1                 mov esi, ecx
// 004aeb2e  57                   push edi
// 004aeb2f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004aeb33  8d4e08               lea ecx, [esi + 8]
// 004aeb36  8974240c             mov dword ptr [esp + 0xc], esi
// 004aeb3a  893e                 mov dword ptr [esi], edi
// 004aeb3c  896e04               mov dword ptr [esi + 4], ebp
// 004aeb3f  e84c65ffff           call 0x4a5090
// 004aeb44  8b8f582d0000         mov ecx, dword ptr [edi + 0x2d58]
// 004aeb4a  8b4500               mov eax, dword ptr [ebp]
// 004aeb4d  8b97542d0000         mov edx, dword ptr [edi + 0x2d54]
// 004aeb53  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 004aeb59  51                   push ecx
// 004aeb5a  52                   push edx
// 004aeb5b  8bcd                 mov ecx, ebp
// 004aeb5d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004aeb65  ffd0                 call eax
// 004aeb67  8bf8                 mov edi, eax
// 004aeb69  e822fdfeff           call 0x49e890
// 004aeb6e  2bb848010000         sub edi, dword ptr [eax + 0x148]
// 004aeb74  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004aeb78  89be1c010000         mov dword ptr [esi + 0x11c], edi
// 004aeb7e  5f                   pop edi
// 004aeb7f  c6862001000000       mov byte ptr [esi + 0x120], 0
// 004aeb86  8bc6                 mov eax, esi
// 004aeb88  5e                   pop esi
// 004aeb89  5d                   pop ebp
// 004aeb8a  64890d00000000       mov dword ptr fs:[0], ecx
// 004aeb91  83c410               add esp, 0x10
// 004aeb94  c20800               ret 8

struct BitStream {
    unsigned char storage[0x114];
    BitStream();
    ~BitStream();
};

struct Owner {
    unsigned char padding[0x2d54];
    unsigned low;
    unsigned high;
};

struct Peer {
#define SLOT(n) virtual void slot##n();
    SLOT(0)  SLOT(1)  SLOT(2)  SLOT(3)
    SLOT(4)  SLOT(5)  SLOT(6)  SLOT(7)
    SLOT(8)  SLOT(9)  SLOT(10) SLOT(11)
    SLOT(12) SLOT(13) SLOT(14) SLOT(15)
    SLOT(16) SLOT(17) SLOT(18) SLOT(19)
    SLOT(20) SLOT(21) SLOT(22) SLOT(23)
    SLOT(24) SLOT(25) SLOT(26) SLOT(27)
    SLOT(28) SLOT(29) SLOT(30) SLOT(31)
    SLOT(32) SLOT(33) SLOT(34) SLOT(35)
    SLOT(36) SLOT(37) SLOT(38) SLOT(39)
    SLOT(40) SLOT(41) SLOT(42) SLOT(43)
#undef SLOT
    virtual unsigned query(unsigned low, unsigned high);
};

struct State {
    unsigned char padding[0x148];
    unsigned time;
};

State* __cdecl getState();

struct S {
    Owner* owner;
    Peer* peer;
    BitStream stream;
    unsigned time;
    unsigned char flag;

    S(Owner* o, Peer* p);
};

S::S(Owner* o, Peer* p)
    : owner(o), peer(p)
{
    unsigned value = p->query(o->low, o->high);
    time = value - getState()->time;
    flag = 0;
}
