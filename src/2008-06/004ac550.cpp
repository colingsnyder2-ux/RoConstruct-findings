// from server: 100% by king_originala
// roc 2008-06 004ac550  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac550
//
// 004ac550  6aff                 push -1
// 004ac552  6818047c00           push 0x7c0418
// 004ac557  64a100000000         mov eax, dword ptr fs:[0]
// 004ac55d  50                   push eax
// 004ac55e  64892500000000       mov dword ptr fs:[0], esp
// 004ac565  51                   push ecx
// 004ac566  53                   push ebx
// 004ac567  56                   push esi
// 004ac568  8bc1                 mov eax, ecx
// 004ac56a  8b542420             mov edx, dword ptr [esp + 0x20]
// 004ac56e  83ec08               sub esp, 8
// 004ac571  8bcc                 mov ecx, esp
// 004ac573  8911                 mov dword ptr [ecx], edx
// 004ac575  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004ac579  895104               mov dword ptr [ecx + 4], edx
// 004ac57c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004ac580  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004ac588  89642410             mov dword ptr [esp + 0x10], esp
// 004ac58c  85c9                 test ecx, ecx
// 004ac58e  740c                 je 0x4ac59c
// 004ac590  83c104               add ecx, 4
// 004ac593  ba01000000           mov edx, 1
// 004ac598  f00fc111             lock xadd dword ptr [ecx], edx
// 004ac59c  8b4804               mov ecx, dword ptr [eax + 4]
// 004ac59f  034c2424             add ecx, dword ptr [esp + 0x24]
// 004ac5a3  8b00                 mov eax, dword ptr [eax]
// 004ac5a5  ffd0                 call eax
// 004ac5a7  8b742424             mov esi, dword ptr [esp + 0x24]
// 004ac5ab  8ad8                 mov bl, al
// 004ac5ad  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004ac5b5  85f6                 test esi, esi
// 004ac5b7  742a                 je 0x4ac5e3
// 004ac5b9  8d4e04               lea ecx, [esi + 4]
// 004ac5bc  83caff               or edx, 0xffffffff
// 004ac5bf  f00fc111             lock xadd dword ptr [ecx], edx
// 004ac5c3  751e                 jne 0x4ac5e3
// 004ac5c5  8b06                 mov eax, dword ptr [esi]
// 004ac5c7  8b5004               mov edx, dword ptr [eax + 4]
// 004ac5ca  8bce                 mov ecx, esi
// 004ac5cc  ffd2                 call edx
// 004ac5ce  8d4608               lea eax, [esi + 8]
// 004ac5d1  83c9ff               or ecx, 0xffffffff
// 004ac5d4  f00fc108             lock xadd dword ptr [eax], ecx
// 004ac5d8  7509                 jne 0x4ac5e3
// 004ac5da  8b16                 mov edx, dword ptr [esi]
// 004ac5dc  8b4208               mov eax, dword ptr [edx + 8]
// 004ac5df  8bce                 mov ecx, esi
// 004ac5e1  ffd0                 call eax
// 004ac5e3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ac5e7  5e                   pop esi
// 004ac5e8  8ac3                 mov al, bl
// 004ac5ea  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac5f1  5b                   pop ebx
// 004ac5f2  83c410               add esp, 0x10
// 004ac5f5  c20c00               ret 0xc

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
