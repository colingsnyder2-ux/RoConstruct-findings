// from server: 100% by colin
// roc 2008-06 0063bb70  unit: RBX::P8DebrisService::?$GetSetImpl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063bb70
//
// 0063bb70  56                   push esi
// 0063bb71  57                   push edi
// 0063bb72  8d44240c             lea eax, [esp + 0xc]
// 0063bb76  8bf9                 mov edi, ecx
// 0063bb78  50                   push eax
// 0063bb79  c70700000000         mov dword ptr [edi], 0
// 0063bb7f  e88cffffff           call 0x63bb10
// 0063bb84  8b742414             mov esi, dword ptr [esp + 0x14]
// 0063bb88  85f6                 test esi, esi
// 0063bb8a  742a                 je 0x63bbb6
// 0063bb8c  8d4e04               lea ecx, [esi + 4]
// 0063bb8f  83caff               or edx, 0xffffffff
// 0063bb92  f00fc111             lock xadd dword ptr [ecx], edx
// 0063bb96  751e                 jne 0x63bbb6
// 0063bb98  8b06                 mov eax, dword ptr [esi]
// 0063bb9a  8b5004               mov edx, dword ptr [eax + 4]
// 0063bb9d  8bce                 mov ecx, esi
// 0063bb9f  ffd2                 call edx
// 0063bba1  8d4608               lea eax, [esi + 8]
// 0063bba4  83c9ff               or ecx, 0xffffffff
// 0063bba7  f00fc108             lock xadd dword ptr [eax], ecx
// 0063bbab  7509                 jne 0x63bbb6
// 0063bbad  8b16                 mov edx, dword ptr [esi]
// 0063bbaf  8b4208               mov eax, dword ptr [edx + 8]
// 0063bbb2  8bce                 mov ecx, esi
// 0063bbb4  ffd0                 call eax
// 0063bbb6  8bc7                 mov eax, edi
// 0063bbb8  5f                   pop edi
// 0063bbb9  5e                   pop esi
// 0063bbba  c21000               ret 0x10

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
    unsigned long words[2];
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
