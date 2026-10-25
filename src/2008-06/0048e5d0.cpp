// from server: 100% by colin
// roc 2008-06 0048e5d0  unit: RBX::VRunService::?$SignalDesc  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e5d0
//
// 0048e5d0  56                   push esi
// 0048e5d1  57                   push edi
// 0048e5d2  8d44240c             lea eax, [esp + 0xc]
// 0048e5d6  8bf9                 mov edi, ecx
// 0048e5d8  50                   push eax
// 0048e5d9  c70700000000         mov dword ptr [edi], 0
// 0048e5df  e8ccfdffff           call 0x48e3b0
// 0048e5e4  8b742418             mov esi, dword ptr [esp + 0x18]
// 0048e5e8  85f6                 test esi, esi
// 0048e5ea  742a                 je 0x48e616
// 0048e5ec  8d4e04               lea ecx, [esi + 4]
// 0048e5ef  83caff               or edx, 0xffffffff
// 0048e5f2  f00fc111             lock xadd dword ptr [ecx], edx
// 0048e5f6  751e                 jne 0x48e616
// 0048e5f8  8b06                 mov eax, dword ptr [esi]
// 0048e5fa  8b5004               mov edx, dword ptr [eax + 4]
// 0048e5fd  8bce                 mov ecx, esi
// 0048e5ff  ffd2                 call edx
// 0048e601  8d4608               lea eax, [esi + 8]
// 0048e604  83c9ff               or ecx, 0xffffffff
// 0048e607  f00fc108             lock xadd dword ptr [eax], ecx
// 0048e60b  7509                 jne 0x48e616
// 0048e60d  8b16                 mov edx, dword ptr [esi]
// 0048e60f  8b4208               mov eax, dword ptr [edx + 8]
// 0048e612  8bce                 mov ecx, esi
// 0048e614  ffd0                 call eax
// 0048e616  8bc7                 mov eax, edi
// 0048e618  5f                   pop edi
// 0048e619  5e                   pop esi
// 0048e61a  c21400               ret 0x14

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
