// roc 2010-06 004e74f0  unit: RBX::VSystemAddress::?$holder  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e74f0
//
// 004e74f0  6aff                 push -1
// 004e74f2  68e8679900           push 0x9967e8
// 004e74f7  64a100000000         mov eax, dword ptr fs:[0]
// 004e74fd  50                   push eax
// 004e74fe  64892500000000       mov dword ptr fs:[0], esp
// 004e7505  51                   push ecx
// 004e7506  53                   push ebx
// 004e7507  56                   push esi
// 004e7508  8bc1                 mov eax, ecx
// 004e750a  8b542420             mov edx, dword ptr [esp + 0x20]
// 004e750e  83ec08               sub esp, 8
// 004e7511  8bcc                 mov ecx, esp
// 004e7513  8911                 mov dword ptr [ecx], edx
// 004e7515  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e7519  895104               mov dword ptr [ecx + 4], edx
// 004e751c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004e7520  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004e7528  89642410             mov dword ptr [esp + 0x10], esp
// 004e752c  85c9                 test ecx, ecx
// 004e752e  740c                 je 0x4e753c
// 004e7530  83c104               add ecx, 4
// 004e7533  ba01000000           mov edx, 1
// 004e7538  f00fc111             lock xadd dword ptr [ecx], edx
// 004e753c  8b4804               mov ecx, dword ptr [eax + 4]
// 004e753f  034c2424             add ecx, dword ptr [esp + 0x24]
// 004e7543  8b00                 mov eax, dword ptr [eax]
// 004e7545  ffd0                 call eax
// 004e7547  8b742424             mov esi, dword ptr [esp + 0x24]
// 004e754b  8ad8                 mov bl, al
// 004e754d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004e7555  85f6                 test esi, esi
// 004e7557  742a                 je 0x4e7583
// 004e7559  8d4e04               lea ecx, [esi + 4]
// 004e755c  83caff               or edx, 0xffffffff
// 004e755f  f00fc111             lock xadd dword ptr [ecx], edx
// 004e7563  751e                 jne 0x4e7583
// 004e7565  8b06                 mov eax, dword ptr [esi]
// 004e7567  8b5004               mov edx, dword ptr [eax + 4]
// 004e756a  8bce                 mov ecx, esi
// 004e756c  ffd2                 call edx
// 004e756e  8d4608               lea eax, [esi + 8]
// 004e7571  83c9ff               or ecx, 0xffffffff
// 004e7574  f00fc108             lock xadd dword ptr [eax], ecx
// 004e7578  7509                 jne 0x4e7583
// 004e757a  8b16                 mov edx, dword ptr [esi]
// 004e757c  8b4208               mov eax, dword ptr [edx + 8]
// 004e757f  8bce                 mov ecx, esi
// 004e7581  ffd0                 call eax
// 004e7583  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e7587  5e                   pop esi
// 004e7588  8ac3                 mov al, bl
// 004e758a  64890d00000000       mov dword ptr fs:[0], ecx
// 004e7591  5b                   pop ebx
// 004e7592  83c410               add esp, 0x10
// 004e7595  c20c00               ret 0xc
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