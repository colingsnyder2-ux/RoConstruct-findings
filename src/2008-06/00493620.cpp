// from server: 100% by tester
// roc 2008-06 00493620  unit: RBX::VShirt::?$FactoryProduct  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00493620
//
// 00493620  57                   push edi
// 00493621  8d442408             lea eax, [esp + 8]
// 00493625  8bf9                 mov edi, ecx
// 00493627  50                   push eax
// 00493628  c70700000000         mov dword ptr [edi], 0
// 0049362e  e8bd6c1700           call 0x60a2f0
// 00493633  83c404               add esp, 4
// 00493636  84c0                 test al, al
// 00493638  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049363c  752c                 jne 0x49366a
// 0049363e  8d4f08               lea ecx, [edi + 8]
// 00493641  85c9                 test ecx, ecx
// 00493643  741d                 je 0x493662
// 00493645  8b542408             mov edx, dword ptr [esp + 8]
// 00493649  8911                 mov dword ptr [ecx], edx
// 0049364b  894104               mov dword ptr [ecx + 4], eax
// 0049364e  85c0                 test eax, eax
// 00493650  7410                 je 0x493662
// 00493652  83c004               add eax, 4
// 00493655  b901000000           mov ecx, 1
// 0049365a  f00fc108             lock xadd dword ptr [eax], ecx
// 0049365e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00493662  c707ec1d8200         mov dword ptr [edi], 0x821dec
// 00493668  eb06                 jmp 0x493670
// 0049366a  c70700000000         mov dword ptr [edi], 0
// 00493670  85c0                 test eax, eax
// 00493672  7434                 je 0x4936a8
// 00493674  56                   push esi
// 00493675  8bf0                 mov esi, eax
// 00493677  83c004               add eax, 4
// 0049367a  83caff               or edx, 0xffffffff
// 0049367d  f00fc110             lock xadd dword ptr [eax], edx
// 00493681  751e                 jne 0x4936a1
// 00493683  8b06                 mov eax, dword ptr [esi]
// 00493685  8b5004               mov edx, dword ptr [eax + 4]
// 00493688  8bce                 mov ecx, esi
// 0049368a  ffd2                 call edx
// 0049368c  8d4608               lea eax, [esi + 8]
// 0049368f  83c9ff               or ecx, 0xffffffff
// 00493692  f00fc108             lock xadd dword ptr [eax], ecx
// 00493696  7509                 jne 0x4936a1
// 00493698  8b16                 mov edx, dword ptr [esi]
// 0049369a  8b4208               mov eax, dword ptr [edx + 8]
// 0049369d  8bce                 mov ecx, esi
// 0049369f  ffd0                 call eax
// 004936a1  5e                   pop esi
// 004936a2  8bc7                 mov eax, edi
// 004936a4  5f                   pop edi
// 004936a5  c20c00               ret 0xc
// 004936a8  8bc7                 mov eax, edi
// 004936aa  5f                   pop edi
// 004936ab  c20c00               ret 0xc

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
