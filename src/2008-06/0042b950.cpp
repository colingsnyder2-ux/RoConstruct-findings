// from server: 100% by colin
// roc 2008-06 0042b950  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b950
//
// 0042b950  56                   push esi
// 0042b951  57                   push edi
// 0042b952  8d44240c             lea eax, [esp + 0xc]
// 0042b956  8bf9                 mov edi, ecx
// 0042b958  50                   push eax
// 0042b959  c70700000000         mov dword ptr [edi], 0
// 0042b95f  e84cffffff           call 0x42b8b0
// 0042b964  8b742418             mov esi, dword ptr [esp + 0x18]
// 0042b968  85f6                 test esi, esi
// 0042b96a  742a                 je 0x42b996
// 0042b96c  8d4e04               lea ecx, [esi + 4]
// 0042b96f  83caff               or edx, 0xffffffff
// 0042b972  f00fc111             lock xadd dword ptr [ecx], edx
// 0042b976  751e                 jne 0x42b996
// 0042b978  8b06                 mov eax, dword ptr [esi]
// 0042b97a  8b5004               mov edx, dword ptr [eax + 4]
// 0042b97d  8bce                 mov ecx, esi
// 0042b97f  ffd2                 call edx
// 0042b981  8d4608               lea eax, [esi + 8]
// 0042b984  83c9ff               or ecx, 0xffffffff
// 0042b987  f00fc108             lock xadd dword ptr [eax], ecx
// 0042b98b  7509                 jne 0x42b996
// 0042b98d  8b16                 mov edx, dword ptr [esi]
// 0042b98f  8b4208               mov eax, dword ptr [edx + 8]
// 0042b992  8bce                 mov ecx, esi
// 0042b994  ffd0                 call eax
// 0042b996  8bc7                 mov eax, edi
// 0042b998  5f                   pop edi
// 0042b999  5e                   pop esi
// 0042b99a  c21400               ret 0x14

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
