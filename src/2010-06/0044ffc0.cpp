// roc 2010-06 0044ffc0  unit: CRobloxModule  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044ffc0
//
// 0044ffc0  8b542404             mov edx, dword ptr [esp + 4]
// 0044ffc4  8b4204               mov eax, dword ptr [edx + 4]
// 0044ffc7  83ec08               sub esp, 8
// 0044ffca  8bcc                 mov ecx, esp
// 0044ffcc  8901                 mov dword ptr [ecx], eax
// 0044ffce  8b4208               mov eax, dword ptr [edx + 8]
// 0044ffd1  8964240c             mov dword ptr [esp + 0xc], esp
// 0044ffd5  894104               mov dword ptr [ecx + 4], eax
// 0044ffd8  85c0                 test eax, eax
// 0044ffda  740c                 je 0x44ffe8
// 0044ffdc  83c004               add eax, 4
// 0044ffdf  b901000000           mov ecx, 1
// 0044ffe4  f00fc108             lock xadd dword ptr [eax], ecx
// 0044ffe8  8b12                 mov edx, dword ptr [edx]
// 0044ffea  ffd2                 call edx
// 0044ffec  83c408               add esp, 8
// 0044ffef  c3                   ret 
// copied from an identical function in another client (function ?invoke@@YAXPAUContext@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct Control {
    long unused;
    volatile long references;
};

struct Value {
    void* object;
    Control* control;
    Value(const Value& other);
    ~Value();
};

inline Value::Value(const Value& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* references = &control->references;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(references, 1);
    }
}

inline Value::~Value() {}

struct Context {
    void (__cdecl* callback)(Value);
    Value value;
};

void __cdecl invoke(Context* context)
{
    context->callback(context->value);
}