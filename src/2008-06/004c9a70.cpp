// from server: 100% by king_originala
// roc 2008-06 004c9a70  unit: RBX::Network::InterpolatingPhysicsReceiver  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c9a70
//
// 004c9a70  6aff                 push -1
// 004c9a72  68ab977c00           push 0x7c97ab
// 004c9a77  64a100000000         mov eax, dword ptr fs:[0]
// 004c9a7d  50                   push eax
// 004c9a7e  64892500000000       mov dword ptr fs:[0], esp
// 004c9a85  51                   push ecx
// 004c9a86  56                   push esi
// 004c9a87  8bf1                 mov esi, ecx
// 004c9a89  89742404             mov dword ptr [esp + 4], esi
// 004c9a8d  807e1000             cmp byte ptr [esi + 0x10], 0
// 004c9a91  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004c9a99  7405                 je 0x4c9aa0
// 004c9a9b  e870ffffff           call 0x4c9a10
// 004c9aa0  8d4e18               lea ecx, [esi + 0x18]
// 004c9aa3  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004c9aab  e8f0b6fdff           call 0x4a51a0
// 004c9ab0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c9ab4  5e                   pop esi
// 004c9ab5  64890d00000000       mov dword ptr fs:[0], ecx
// 004c9abc  83c410               add esp, 0x10
// 004c9abf  c3                   ret 

struct Buffer {
    int bits;
    int capacity;
    int used;
    void* data;
    bool owned;

    ~Buffer();
};

struct Receiver {
    char padding[16];
    bool active;
    char reserved[7];
    Buffer buffer;

    void prepare();
    ~Receiver();
};

Receiver::~Receiver()
{
    if (active)
        prepare();
}
