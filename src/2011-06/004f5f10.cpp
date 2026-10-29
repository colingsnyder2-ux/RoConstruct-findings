// roc 2011-06 004f5f10  unit: RBX::VSystemAddress::?$holder  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f5f10
//
// 004f5f10  6aff                 push -1
// 004f5f12  68688d9d00           push 0x9d8d68
// 004f5f17  64a100000000         mov eax, dword ptr fs:[0]
// 004f5f1d  50                   push eax
// 004f5f1e  64892500000000       mov dword ptr fs:[0], esp
// 004f5f25  51                   push ecx
// 004f5f26  53                   push ebx
// 004f5f27  56                   push esi
// 004f5f28  8bc1                 mov eax, ecx
// 004f5f2a  8b542420             mov edx, dword ptr [esp + 0x20]
// 004f5f2e  83ec08               sub esp, 8
// 004f5f31  8bcc                 mov ecx, esp
// 004f5f33  8911                 mov dword ptr [ecx], edx
// 004f5f35  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004f5f39  895104               mov dword ptr [ecx + 4], edx
// 004f5f3c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004f5f40  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004f5f48  89642410             mov dword ptr [esp + 0x10], esp
// 004f5f4c  85c9                 test ecx, ecx
// 004f5f4e  740c                 je 0x4f5f5c
// 004f5f50  83c104               add ecx, 4
// 004f5f53  ba01000000           mov edx, 1
// 004f5f58  f00fc111             lock xadd dword ptr [ecx], edx
// 004f5f5c  8b4804               mov ecx, dword ptr [eax + 4]
// 004f5f5f  034c2424             add ecx, dword ptr [esp + 0x24]
// 004f5f63  8b00                 mov eax, dword ptr [eax]
// 004f5f65  ffd0                 call eax
// 004f5f67  8b742424             mov esi, dword ptr [esp + 0x24]
// 004f5f6b  8ad8                 mov bl, al
// 004f5f6d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004f5f75  85f6                 test esi, esi
// 004f5f77  742a                 je 0x4f5fa3
// 004f5f79  8d4e04               lea ecx, [esi + 4]
// 004f5f7c  83caff               or edx, 0xffffffff
// 004f5f7f  f00fc111             lock xadd dword ptr [ecx], edx
// 004f5f83  751e                 jne 0x4f5fa3
// 004f5f85  8b06                 mov eax, dword ptr [esi]
// 004f5f87  8b5004               mov edx, dword ptr [eax + 4]
// 004f5f8a  8bce                 mov ecx, esi
// 004f5f8c  ffd2                 call edx
// 004f5f8e  8d4608               lea eax, [esi + 8]
// 004f5f91  83c9ff               or ecx, 0xffffffff
// 004f5f94  f00fc108             lock xadd dword ptr [eax], ecx
// 004f5f98  7509                 jne 0x4f5fa3
// 004f5f9a  8b16                 mov edx, dword ptr [esi]
// 004f5f9c  8b4208               mov eax, dword ptr [edx + 8]
// 004f5f9f  8bce                 mov ecx, esi
// 004f5fa1  ffd0                 call eax
// 004f5fa3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f5fa7  5e                   pop esi
// 004f5fa8  8ac3                 mov al, bl
// 004f5faa  64890d00000000       mov dword ptr fs:[0], ecx
// 004f5fb1  5b                   pop ebx
// 004f5fb2  83c410               add esp, 0x10
// 004f5fb5  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@S_func_004ac550@ns_ROCX000001@@QAE_NPADUShared@2@@Z)

namespace ns_ROCX000001 {
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    Control* c = control;
    if (c)
        _InterlockedIncrement(&c->strong);
}

inline Shared::~Shared()
{
    Control* c = control;
    if (c && _InterlockedDecrement(&c->strong) == 0)
    {
        c->dispose();
        if (_InterlockedDecrement(&c->weak) == 0)
            c->destroy();
    }
}

struct S_func_004ac550
{
    typedef bool (__thiscall *Function)(void*, Shared);

    Function function;
    int adjustment;

    bool f(char* object, Shared argument);
};

bool S_func_004ac550::f(char* object, Shared argument)
{
    return function(object + adjustment, argument);
}
}
