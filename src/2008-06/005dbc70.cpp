// from server: 100% by tester
// roc 2008-06 005dbc70  unit: RBX::VPartInstance::?$FilteredSelection  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dbc70
//
// 005dbc70  57                   push edi
// 005dbc71  8d442408             lea eax, [esp + 8]
// 005dbc75  8bf9                 mov edi, ecx
// 005dbc77  50                   push eax
// 005dbc78  c70700000000         mov dword ptr [edi], 0
// 005dbc7e  e86de60200           call 0x60a2f0
// 005dbc83  83c404               add esp, 4
// 005dbc86  84c0                 test al, al
// 005dbc88  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005dbc8c  752c                 jne 0x5dbcba
// 005dbc8e  8d4f08               lea ecx, [edi + 8]
// 005dbc91  85c9                 test ecx, ecx
// 005dbc93  741d                 je 0x5dbcb2
// 005dbc95  8b542408             mov edx, dword ptr [esp + 8]
// 005dbc99  8911                 mov dword ptr [ecx], edx
// 005dbc9b  894104               mov dword ptr [ecx + 4], eax
// 005dbc9e  85c0                 test eax, eax
// 005dbca0  7410                 je 0x5dbcb2
// 005dbca2  83c004               add eax, 4
// 005dbca5  b901000000           mov ecx, 1
// 005dbcaa  f00fc108             lock xadd dword ptr [eax], ecx
// 005dbcae  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005dbcb2  c707c4d78300         mov dword ptr [edi], 0x83d7c4
// 005dbcb8  eb06                 jmp 0x5dbcc0
// 005dbcba  c70700000000         mov dword ptr [edi], 0
// 005dbcc0  85c0                 test eax, eax
// 005dbcc2  7434                 je 0x5dbcf8
// 005dbcc4  56                   push esi
// 005dbcc5  8bf0                 mov esi, eax
// 005dbcc7  83c004               add eax, 4
// 005dbcca  83caff               or edx, 0xffffffff
// 005dbccd  f00fc110             lock xadd dword ptr [eax], edx
// 005dbcd1  751e                 jne 0x5dbcf1
// 005dbcd3  8b06                 mov eax, dword ptr [esi]
// 005dbcd5  8b5004               mov edx, dword ptr [eax + 4]
// 005dbcd8  8bce                 mov ecx, esi
// 005dbcda  ffd2                 call edx
// 005dbcdc  8d4608               lea eax, [esi + 8]
// 005dbcdf  83c9ff               or ecx, 0xffffffff
// 005dbce2  f00fc108             lock xadd dword ptr [eax], ecx
// 005dbce6  7509                 jne 0x5dbcf1
// 005dbce8  8b16                 mov edx, dword ptr [esi]
// 005dbcea  8b4208               mov eax, dword ptr [edx + 8]
// 005dbced  8bce                 mov ecx, esi
// 005dbcef  ffd0                 call eax
// 005dbcf1  5e                   pop esi
// 005dbcf2  8bc7                 mov eax, edi
// 005dbcf4  5f                   pop edi
// 005dbcf5  c20c00               ret 0xc
// 005dbcf8  8bc7                 mov eax, edi
// 005dbcfa  5f                   pop edi
// 005dbcfb  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

extern bool func_0060a2f0();
extern char objectTag;

inline void* __cdecl operator new(unsigned int, void* p)
{
    return p;
}

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Pair
{
    void* object;
    Control* control;

    Pair(const Pair& other);
};

inline Pair::Pair(const Pair& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

struct S
{
    void* tag;
    unsigned int reserved;
    Pair value;

    S* func_0055a4b0(Pair argument, unsigned int unused);
};

S* S::func_0055a4b0(Pair argument, unsigned int unused)
{
    tag = 0;

    if (!reinterpret_cast<bool (__cdecl*)(Pair*)>(
            func_0060a2f0)(&argument))
    {
        new (&value) Pair(argument);
        tag = &objectTag;
    }
    else
    {
        tag = 0;
    }

    if (argument.control)
    {
        Control* control = argument.control;
        if (_InterlockedDecrement(&control->strong) == 0)
        {
            control->dispose();
            if (_InterlockedDecrement(&control->weak) == 0)
                control->destroy();
        }
    }

    return this;
}
