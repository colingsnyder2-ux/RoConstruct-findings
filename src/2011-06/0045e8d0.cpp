// roc 2011-06 0045e8d0  unit: VCRoblox3D::?$CComObject  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045e8d0
//
// 0045e8d0  8b542404             mov edx, dword ptr [esp + 4]
// 0045e8d4  8b4204               mov eax, dword ptr [edx + 4]
// 0045e8d7  83ec08               sub esp, 8
// 0045e8da  8bcc                 mov ecx, esp
// 0045e8dc  8901                 mov dword ptr [ecx], eax
// 0045e8de  8b4208               mov eax, dword ptr [edx + 8]
// 0045e8e1  8964240c             mov dword ptr [esp + 0xc], esp
// 0045e8e5  894104               mov dword ptr [ecx + 4], eax
// 0045e8e8  85c0                 test eax, eax
// 0045e8ea  740c                 je 0x45e8f8
// 0045e8ec  83c004               add eax, 4
// 0045e8ef  b901000000           mov ecx, 1
// 0045e8f4  f00fc108             lock xadd dword ptr [eax], ecx
// 0045e8f8  8b12                 mov edx, dword ptr [edx]
// 0045e8fa  ffd2                 call edx
// 0045e8fc  83c408               add esp, 8
// 0045e8ff  c3                   ret 
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