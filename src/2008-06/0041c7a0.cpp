// from server: 100% by king_originala
// roc 2008-06 0041c7a0  unit: RBX::VDataModel::?$BoundFuncDesc  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041c7a0
//
// 0041c7a0  57                   push edi
// 0041c7a1  8d442408             lea eax, [esp + 8]
// 0041c7a5  8bf9                 mov edi, ecx
// 0041c7a7  50                   push eax
// 0041c7a8  c70700000000         mov dword ptr [edi], 0
// 0041c7ae  e83ddb1e00           call 0x60a2f0
// 0041c7b3  83c404               add esp, 4
// 0041c7b6  84c0                 test al, al
// 0041c7b8  7558                 jne 0x41c812
// 0041c7ba  8d4708               lea eax, [edi + 8]
// 0041c7bd  85c0                 test eax, eax
// 0041c7bf  7445                 je 0x41c806
// 0041c7c1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041c7c5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0041c7c9  8908                 mov dword ptr [eax], ecx
// 0041c7cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041c7cf  895004               mov dword ptr [eax + 4], edx
// 0041c7d2  894808               mov dword ptr [eax + 8], ecx
// 0041c7d5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041c7d9  89480c               mov dword ptr [eax + 0xc], ecx
// 0041c7dc  85c9                 test ecx, ecx
// 0041c7de  7410                 je 0x41c7f0
// 0041c7e0  83c104               add ecx, 4
// 0041c7e3  ba01000000           mov edx, 1
// 0041c7e8  f00fc111             lock xadd dword ptr [ecx], edx
// 0041c7ec  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041c7f0  8b542418             mov edx, dword ptr [esp + 0x18]
// 0041c7f4  895010               mov dword ptr [eax + 0x10], edx
// 0041c7f7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0041c7fb  895014               mov dword ptr [eax + 0x14], edx
// 0041c7fe  c70720ee8000         mov dword ptr [edi], 0x80ee20
// 0041c804  eb16                 jmp 0x41c81c
// 0041c806  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041c80a  c70720ee8000         mov dword ptr [edi], 0x80ee20
// 0041c810  eb0a                 jmp 0x41c81c
// 0041c812  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041c816  c70700000000         mov dword ptr [edi], 0
// 0041c81c  85c9                 test ecx, ecx
// 0041c81e  7434                 je 0x41c854
// 0041c820  56                   push esi
// 0041c821  8bf1                 mov esi, ecx
// 0041c823  83c104               add ecx, 4
// 0041c826  83c8ff               or eax, 0xffffffff
// 0041c829  f00fc101             lock xadd dword ptr [ecx], eax
// 0041c82d  751e                 jne 0x41c84d
// 0041c82f  8b16                 mov edx, dword ptr [esi]
// 0041c831  8b4204               mov eax, dword ptr [edx + 4]
// 0041c834  8bce                 mov ecx, esi
// 0041c836  ffd0                 call eax
// 0041c838  8d4e08               lea ecx, [esi + 8]
// 0041c83b  83caff               or edx, 0xffffffff
// 0041c83e  f00fc111             lock xadd dword ptr [ecx], edx
// 0041c842  7509                 jne 0x41c84d
// 0041c844  8b06                 mov eax, dword ptr [esi]
// 0041c846  8b5008               mov edx, dword ptr [eax + 8]
// 0041c849  8bce                 mov ecx, esi
// 0041c84b  ffd2                 call edx
// 0041c84d  5e                   pop esi
// 0041c84e  8bc7                 mov eax, edi
// 0041c850  5f                   pop edi
// 0041c851  c21c00               ret 0x1c
// 0041c854  8bc7                 mov eax, edi
// 0041c856  5f                   pop edi
// 0041c857  c21c00               ret 0x1c

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Argument
{
    unsigned long a;
    unsigned long b;
    unsigned long c;
    Control* control;
    unsigned long d;
    unsigned long e;
    unsigned long unused;
};

extern bool __cdecl func_0060a2f0();
extern unsigned char table_0080ee20[];

struct S
{
    void* type;
    unsigned long unused;
    unsigned long a;
    unsigned long b;
    unsigned long c;
    Control* control;
    unsigned long d;
    unsigned long e;

    S* initialize(Argument argument);
};

S* S::initialize(Argument argument)
{
    type = 0;
    if (!reinterpret_cast<bool (__cdecl *)(Argument*)>(
            &func_0060a2f0)(&argument))
    {
        volatile unsigned long* destination = &a;
        if (destination)
        {
            destination[0] = argument.a;
            destination[1] = argument.b;
            destination[2] = argument.c;
            reinterpret_cast<Control* volatile*>(destination)[3] = argument.control;
            Control* copied = argument.control;
            if (copied)
                _InterlockedIncrement(&copied->strong);
            destination[4] = argument.d;
            destination[5] = argument.e;
        }
        type = table_0080ee20;
    }
    else
    {
        type = 0;
    }

    if (argument.control)
    {
        Control* owner = argument.control;
        if (_InterlockedDecrement(&owner->strong) == 0)
        {
            owner->dispose();
            if (_InterlockedDecrement(&owner->weak) == 0)
                owner->destroy();
        }
    }
    return this;
}
