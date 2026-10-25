// from server: 100% by tester
// roc 2008-06 0041ce20  unit: VDHTMLWindowService::?$FactoryProduct  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ce20
//
// 0041ce20  57                   push edi
// 0041ce21  8d442408             lea eax, [esp + 8]
// 0041ce25  8bf9                 mov edi, ecx
// 0041ce27  50                   push eax
// 0041ce28  c70700000000         mov dword ptr [edi], 0
// 0041ce2e  e8bdd41e00           call 0x60a2f0
// 0041ce33  83c404               add esp, 4
// 0041ce36  84c0                 test al, al
// 0041ce38  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041ce3c  752c                 jne 0x41ce6a
// 0041ce3e  8d4f08               lea ecx, [edi + 8]
// 0041ce41  85c9                 test ecx, ecx
// 0041ce43  741d                 je 0x41ce62
// 0041ce45  8b542408             mov edx, dword ptr [esp + 8]
// 0041ce49  8911                 mov dword ptr [ecx], edx
// 0041ce4b  894104               mov dword ptr [ecx + 4], eax
// 0041ce4e  85c0                 test eax, eax
// 0041ce50  7410                 je 0x41ce62
// 0041ce52  83c004               add eax, 4
// 0041ce55  b901000000           mov ecx, 1
// 0041ce5a  f00fc108             lock xadd dword ptr [eax], ecx
// 0041ce5e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041ce62  c70748ef8000         mov dword ptr [edi], 0x80ef48
// 0041ce68  eb06                 jmp 0x41ce70
// 0041ce6a  c70700000000         mov dword ptr [edi], 0
// 0041ce70  85c0                 test eax, eax
// 0041ce72  7434                 je 0x41cea8
// 0041ce74  56                   push esi
// 0041ce75  8bf0                 mov esi, eax
// 0041ce77  83c004               add eax, 4
// 0041ce7a  83caff               or edx, 0xffffffff
// 0041ce7d  f00fc110             lock xadd dword ptr [eax], edx
// 0041ce81  751e                 jne 0x41cea1
// 0041ce83  8b06                 mov eax, dword ptr [esi]
// 0041ce85  8b5004               mov edx, dword ptr [eax + 4]
// 0041ce88  8bce                 mov ecx, esi
// 0041ce8a  ffd2                 call edx
// 0041ce8c  8d4608               lea eax, [esi + 8]
// 0041ce8f  83c9ff               or ecx, 0xffffffff
// 0041ce92  f00fc108             lock xadd dword ptr [eax], ecx
// 0041ce96  7509                 jne 0x41cea1
// 0041ce98  8b16                 mov edx, dword ptr [esi]
// 0041ce9a  8b4208               mov eax, dword ptr [edx + 8]
// 0041ce9d  8bce                 mov ecx, esi
// 0041ce9f  ffd0                 call eax
// 0041cea1  5e                   pop esi
// 0041cea2  8bc7                 mov eax, edi
// 0041cea4  5f                   pop edi
// 0041cea5  c20c00               ret 0xc
// 0041cea8  8bc7                 mov eax, edi
// 0041ceaa  5f                   pop edi
// 0041ceab  c20c00               ret 0xc

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
