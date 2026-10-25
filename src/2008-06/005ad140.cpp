// from server: 100% by colin
// roc 2008-06 005ad140  unit: RBX::Reflection::UTuple::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ad140
//
// 005ad140  56                   push esi
// 005ad141  57                   push edi
// 005ad142  8d44240c             lea eax, [esp + 0xc]
// 005ad146  8bf9                 mov edi, ecx
// 005ad148  50                   push eax
// 005ad149  c70700000000         mov dword ptr [edi], 0
// 005ad14f  e88cfdffff           call 0x5acee0
// 005ad154  8b742418             mov esi, dword ptr [esp + 0x18]
// 005ad158  85f6                 test esi, esi
// 005ad15a  742a                 je 0x5ad186
// 005ad15c  8d4e04               lea ecx, [esi + 4]
// 005ad15f  83caff               or edx, 0xffffffff
// 005ad162  f00fc111             lock xadd dword ptr [ecx], edx
// 005ad166  751e                 jne 0x5ad186
// 005ad168  8b06                 mov eax, dword ptr [esi]
// 005ad16a  8b5004               mov edx, dword ptr [eax + 4]
// 005ad16d  8bce                 mov ecx, esi
// 005ad16f  ffd2                 call edx
// 005ad171  8d4608               lea eax, [esi + 8]
// 005ad174  83c9ff               or ecx, 0xffffffff
// 005ad177  f00fc108             lock xadd dword ptr [eax], ecx
// 005ad17b  7509                 jne 0x5ad186
// 005ad17d  8b16                 mov edx, dword ptr [esi]
// 005ad17f  8b4208               mov eax, dword ptr [edx + 8]
// 005ad182  8bce                 mov ecx, esi
// 005ad184  ffd0                 call eax
// 005ad186  8bc7                 mov eax, edi
// 005ad188  5f                   pop edi
// 005ad189  5e                   pop esi
// 005ad18a  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Value {
    unsigned long words[3];
    Control* control;
    unsigned long last;
};

struct S {
    void* pointer;
    void initialize(Value*);
    S* f(Value);
};

S* S::f(Value value)
{
    pointer = 0;
    initialize(&value);

    if (value.control)
        value.control->release();

    return this;
}
