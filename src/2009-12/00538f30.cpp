// roc 2009-12 00538f30  unit: RBX::VSystemAddress::?$holder  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00538f30
//
// 00538f30  6aff                 push -1
// 00538f32  6828799400           push 0x947928
// 00538f37  64a100000000         mov eax, dword ptr fs:[0]
// 00538f3d  50                   push eax
// 00538f3e  64892500000000       mov dword ptr fs:[0], esp
// 00538f45  51                   push ecx
// 00538f46  53                   push ebx
// 00538f47  56                   push esi
// 00538f48  8bc1                 mov eax, ecx
// 00538f4a  8b542420             mov edx, dword ptr [esp + 0x20]
// 00538f4e  83ec08               sub esp, 8
// 00538f51  8bcc                 mov ecx, esp
// 00538f53  8911                 mov dword ptr [ecx], edx
// 00538f55  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00538f59  895104               mov dword ptr [ecx + 4], edx
// 00538f5c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00538f60  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00538f68  89642410             mov dword ptr [esp + 0x10], esp
// 00538f6c  85c9                 test ecx, ecx
// 00538f6e  740c                 je 0x538f7c
// 00538f70  83c104               add ecx, 4
// 00538f73  ba01000000           mov edx, 1
// 00538f78  f00fc111             lock xadd dword ptr [ecx], edx
// 00538f7c  8b4804               mov ecx, dword ptr [eax + 4]
// 00538f7f  034c2424             add ecx, dword ptr [esp + 0x24]
// 00538f83  8b00                 mov eax, dword ptr [eax]
// 00538f85  ffd0                 call eax
// 00538f87  8b742424             mov esi, dword ptr [esp + 0x24]
// 00538f8b  8ad8                 mov bl, al
// 00538f8d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00538f95  85f6                 test esi, esi
// 00538f97  742a                 je 0x538fc3
// 00538f99  8d4e04               lea ecx, [esi + 4]
// 00538f9c  83caff               or edx, 0xffffffff
// 00538f9f  f00fc111             lock xadd dword ptr [ecx], edx
// 00538fa3  751e                 jne 0x538fc3
// 00538fa5  8b06                 mov eax, dword ptr [esi]
// 00538fa7  8b5004               mov edx, dword ptr [eax + 4]
// 00538faa  8bce                 mov ecx, esi
// 00538fac  ffd2                 call edx
// 00538fae  8d4608               lea eax, [esi + 8]
// 00538fb1  83c9ff               or ecx, 0xffffffff
// 00538fb4  f00fc108             lock xadd dword ptr [eax], ecx
// 00538fb8  7509                 jne 0x538fc3
// 00538fba  8b16                 mov edx, dword ptr [esi]
// 00538fbc  8b4208               mov eax, dword ptr [edx + 8]
// 00538fbf  8bce                 mov ecx, esi
// 00538fc1  ffd0                 call eax
// 00538fc3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00538fc7  5e                   pop esi
// 00538fc8  8ac3                 mov al, bl
// 00538fca  64890d00000000       mov dword ptr fs:[0], ecx
// 00538fd1  5b                   pop ebx
// 00538fd2  83c410               add esp, 0x10
// 00538fd5  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@S_func_004ac550@@QAE_NPADUShared@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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