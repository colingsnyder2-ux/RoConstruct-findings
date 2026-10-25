// from server: 100% by king_originala
// roc 2008-06 004c99c0  unit: RBX::Network::InterpolatingPhysicsReceiver  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c99c0
//
// 004c99c0  6aff                 push -1
// 004c99c2  688b977c00           push 0x7c978b
// 004c99c7  64a100000000         mov eax, dword ptr fs:[0]
// 004c99cd  50                   push eax
// 004c99ce  64892500000000       mov dword ptr fs:[0], esp
// 004c99d5  51                   push ecx
// 004c99d6  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c99da  56                   push esi
// 004c99db  8bf1                 mov esi, ecx
// 004c99dd  894604               mov dword ptr [esi + 4], eax
// 004c99e0  33c0                 xor eax, eax
// 004c99e2  c70660678200         mov dword ptr [esi], 0x826760
// 004c99e8  89742404             mov dword ptr [esp + 4], esi
// 004c99ec  894608               mov dword ptr [esi + 8], eax
// 004c99ef  89442410             mov dword ptr [esp + 0x10], eax
// 004c99f3  e818ea0300           call 0x508410
// 004c99f8  dd5e10               fstp qword ptr [esi + 0x10]
// 004c99fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c99ff  8bc6                 mov eax, esi
// 004c9a01  5e                   pop esi
// 004c9a02  64890d00000000       mov dword ptr fs:[0], ecx
// 004c9a09  83c410               add esp, 0x10
// 004c9a0c  c20400               ret 4

extern double __cdecl currentTime();

struct Handle {
    void* value;

    Handle() : value(0) {}
    ~Handle();
};

#pragma pack(push, 4)
struct Receiver {
    virtual ~Receiver();

    void* owner;
    Handle handle;
    int padding;
    double timestamp;

    Receiver(void*);
};
#pragma pack(pop)

Receiver::Receiver(void* p)
    : owner(p), handle(), timestamp(currentTime())
{
}
