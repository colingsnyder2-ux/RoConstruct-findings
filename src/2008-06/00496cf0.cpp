// from server: 100% by king_originala
// roc 2008-06 00496cf0  unit: RBX::Network::Players  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496cf0
//
// 00496cf0  64a100000000         mov eax, dword ptr fs:[0]
// 00496cf6  6aff                 push -1
// 00496cf8  6818047c00           push 0x7c0418
// 00496cfd  50                   push eax
// 00496cfe  64892500000000       mov dword ptr fs:[0], esp
// 00496d05  56                   push esi
// 00496d06  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00496d0a  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00496d12  e8a9b8ffff           call 0x4925c0
// 00496d17  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00496d1b  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00496d23  85f6                 test esi, esi
// 00496d25  742a                 je 0x496d51
// 00496d27  8d4604               lea eax, [esi + 4]
// 00496d2a  83c9ff               or ecx, 0xffffffff
// 00496d2d  f00fc108             lock xadd dword ptr [eax], ecx
// 00496d31  751e                 jne 0x496d51
// 00496d33  8b16                 mov edx, dword ptr [esi]
// 00496d35  8b4204               mov eax, dword ptr [edx + 4]
// 00496d38  8bce                 mov ecx, esi
// 00496d3a  ffd0                 call eax
// 00496d3c  8d4e08               lea ecx, [esi + 8]
// 00496d3f  83caff               or edx, 0xffffffff
// 00496d42  f00fc111             lock xadd dword ptr [ecx], edx
// 00496d46  7509                 jne 0x496d51
// 00496d48  8b06                 mov eax, dword ptr [esi]
// 00496d4a  8b5008               mov edx, dword ptr [eax + 8]
// 00496d4d  8bce                 mov ecx, esi
// 00496d4f  ffd2                 call edx
// 00496d51  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00496d55  64890d00000000       mov dword ptr fs:[0], ecx
// 00496d5c  5e                   pop esi
// 00496d5d  83c40c               add esp, 0xc
// 00496d60  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* c = control;
    if (c) {
        if (_InterlockedDecrement(&c->strong) == 0) {
            c->dispose();
            if (_InterlockedDecrement(&c->weak) == 0)
                c->destroy();
        }
    }
}

struct Object {
    void method();
};

void __stdcall f(Object* object, Shared shared)
{
    object->method();
}
