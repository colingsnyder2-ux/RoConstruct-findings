// from server: 100% by king_originala
// roc 2008-06 004af950  unit: RBX::Network::Replicator::MarkerItem  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004af950
//
// 004af950  6aff                 push -1
// 004af952  6838077d00           push 0x7d0738
// 004af957  64a100000000         mov eax, dword ptr fs:[0]
// 004af95d  50                   push eax
// 004af95e  64892500000000       mov dword ptr fs:[0], esp
// 004af965  51                   push ecx
// 004af966  56                   push esi
// 004af967  8bf1                 mov esi, ecx
// 004af969  89742404             mov dword ptr [esp + 4], esi
// 004af96d  6810e94a00           push 0x4ae910
// 004af972  6a08                 push 8
// 004af974  6a4c                 push 0x4c
// 004af976  8d4620               lea eax, [esi + 0x20]
// 004af979  50                   push eax
// 004af97a  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004af982  e8d41c1f00           call 0x6a165b
// 004af987  8b7604               mov esi, dword ptr [esi + 4]
// 004af98a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004af992  85f6                 test esi, esi
// 004af994  742a                 je 0x4af9c0
// 004af996  8d4e04               lea ecx, [esi + 4]
// 004af999  83caff               or edx, 0xffffffff
// 004af99c  f00fc111             lock xadd dword ptr [ecx], edx
// 004af9a0  751e                 jne 0x4af9c0
// 004af9a2  8b06                 mov eax, dword ptr [esi]
// 004af9a4  8b5004               mov edx, dword ptr [eax + 4]
// 004af9a7  8bce                 mov ecx, esi
// 004af9a9  ffd2                 call edx
// 004af9ab  8d4608               lea eax, [esi + 8]
// 004af9ae  83c9ff               or ecx, 0xffffffff
// 004af9b1  f00fc108             lock xadd dword ptr [eax], ecx
// 004af9b5  7509                 jne 0x4af9c0
// 004af9b7  8b16                 mov edx, dword ptr [esi]
// 004af9b9  8b4208               mov eax, dword ptr [edx + 8]
// 004af9bc  8bce                 mov ecx, esi
// 004af9be  ffd0                 call eax
// 004af9c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004af9c4  5e                   pop esi
// 004af9c5  64890d00000000       mov dword ptr fs:[0], ecx
// 004af9cc  83c410               add esp, 0x10
// 004af9cf  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    void* object;
    Control* control;
    ~Handle();
};

inline Handle::~Handle()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Element {
    unsigned char storage[76];
    ~Element();
};

struct S {
    Handle handle;
    unsigned char padding[24];
    Element elements[8];
    ~S();
};

S::~S()
{
}
