// from server: 100% by tester
// roc 2008-06 00638ef0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00638ef0
//
// 00638ef0  57                   push edi
// 00638ef1  8d442408             lea eax, [esp + 8]
// 00638ef5  8bf9                 mov edi, ecx
// 00638ef7  50                   push eax
// 00638ef8  c70700000000         mov dword ptr [edi], 0
// 00638efe  e8ed13fdff           call 0x60a2f0
// 00638f03  83c404               add esp, 4
// 00638f06  84c0                 test al, al
// 00638f08  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00638f0c  752c                 jne 0x638f3a
// 00638f0e  8d4f08               lea ecx, [edi + 8]
// 00638f11  85c9                 test ecx, ecx
// 00638f13  741d                 je 0x638f32
// 00638f15  8b542408             mov edx, dword ptr [esp + 8]
// 00638f19  8911                 mov dword ptr [ecx], edx
// 00638f1b  894104               mov dword ptr [ecx + 4], eax
// 00638f1e  85c0                 test eax, eax
// 00638f20  7410                 je 0x638f32
// 00638f22  83c004               add eax, 4
// 00638f25  b901000000           mov ecx, 1
// 00638f2a  f00fc108             lock xadd dword ptr [eax], ecx
// 00638f2e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00638f32  c70774928400         mov dword ptr [edi], 0x849274
// 00638f38  eb06                 jmp 0x638f40
// 00638f3a  c70700000000         mov dword ptr [edi], 0
// 00638f40  85c0                 test eax, eax
// 00638f42  7434                 je 0x638f78
// 00638f44  56                   push esi
// 00638f45  8bf0                 mov esi, eax
// 00638f47  83c004               add eax, 4
// 00638f4a  83caff               or edx, 0xffffffff
// 00638f4d  f00fc110             lock xadd dword ptr [eax], edx
// 00638f51  751e                 jne 0x638f71
// 00638f53  8b06                 mov eax, dword ptr [esi]
// 00638f55  8b5004               mov edx, dword ptr [eax + 4]
// 00638f58  8bce                 mov ecx, esi
// 00638f5a  ffd2                 call edx
// 00638f5c  8d4608               lea eax, [esi + 8]
// 00638f5f  83c9ff               or ecx, 0xffffffff
// 00638f62  f00fc108             lock xadd dword ptr [eax], ecx
// 00638f66  7509                 jne 0x638f71
// 00638f68  8b16                 mov edx, dword ptr [esi]
// 00638f6a  8b4208               mov eax, dword ptr [edx + 8]
// 00638f6d  8bce                 mov ecx, esi
// 00638f6f  ffd0                 call eax
// 00638f71  5e                   pop esi
// 00638f72  8bc7                 mov eax, edi
// 00638f74  5f                   pop edi
// 00638f75  c20c00               ret 0xc
// 00638f78  8bc7                 mov eax, edi
// 00638f7a  5f                   pop edi
// 00638f7b  c20c00               ret 0xc

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
