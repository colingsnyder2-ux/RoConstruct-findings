// roc 2009-06 004e4420  unit: RBX::Network::Replicator  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e4420
//
// 004e4420  6aff                 push -1
// 004e4422  6808b08600           push 0x86b008
// 004e4427  64a100000000         mov eax, dword ptr fs:[0]
// 004e442d  50                   push eax
// 004e442e  64892500000000       mov dword ptr fs:[0], esp
// 004e4435  51                   push ecx
// 004e4436  53                   push ebx
// 004e4437  56                   push esi
// 004e4438  8bc1                 mov eax, ecx
// 004e443a  8b542420             mov edx, dword ptr [esp + 0x20]
// 004e443e  83ec08               sub esp, 8
// 004e4441  8bcc                 mov ecx, esp
// 004e4443  8911                 mov dword ptr [ecx], edx
// 004e4445  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e4449  895104               mov dword ptr [ecx + 4], edx
// 004e444c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004e4450  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004e4458  89642410             mov dword ptr [esp + 0x10], esp
// 004e445c  85c9                 test ecx, ecx
// 004e445e  740c                 je 0x4e446c
// 004e4460  83c104               add ecx, 4
// 004e4463  ba01000000           mov edx, 1
// 004e4468  f00fc111             lock xadd dword ptr [ecx], edx
// 004e446c  8b4804               mov ecx, dword ptr [eax + 4]
// 004e446f  034c2424             add ecx, dword ptr [esp + 0x24]
// 004e4473  8b00                 mov eax, dword ptr [eax]
// 004e4475  ffd0                 call eax
// 004e4477  8b742424             mov esi, dword ptr [esp + 0x24]
// 004e447b  8ad8                 mov bl, al
// 004e447d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004e4485  85f6                 test esi, esi
// 004e4487  742a                 je 0x4e44b3
// 004e4489  8d4e04               lea ecx, [esi + 4]
// 004e448c  83caff               or edx, 0xffffffff
// 004e448f  f00fc111             lock xadd dword ptr [ecx], edx
// 004e4493  751e                 jne 0x4e44b3
// 004e4495  8b06                 mov eax, dword ptr [esi]
// 004e4497  8b5004               mov edx, dword ptr [eax + 4]
// 004e449a  8bce                 mov ecx, esi
// 004e449c  ffd2                 call edx
// 004e449e  8d4608               lea eax, [esi + 8]
// 004e44a1  83c9ff               or ecx, 0xffffffff
// 004e44a4  f00fc108             lock xadd dword ptr [eax], ecx
// 004e44a8  7509                 jne 0x4e44b3
// 004e44aa  8b16                 mov edx, dword ptr [esi]
// 004e44ac  8b4208               mov eax, dword ptr [edx + 8]
// 004e44af  8bce                 mov ecx, esi
// 004e44b1  ffd0                 call eax
// 004e44b3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e44b7  5e                   pop esi
// 004e44b8  8ac3                 mov al, bl
// 004e44ba  64890d00000000       mov dword ptr fs:[0], ecx
// 004e44c1  5b                   pop ebx
// 004e44c2  83c410               add esp, 0x10
// 004e44c5  c20c00               ret 0xc
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