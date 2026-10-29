// roc 2009-12 00668d80  unit: RBX::VInstance::?$NonFactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00668d80
//
// 00668d80  8b542404             mov edx, dword ptr [esp + 4]
// 00668d84  8b4204               mov eax, dword ptr [edx + 4]
// 00668d87  83ec08               sub esp, 8
// 00668d8a  8bcc                 mov ecx, esp
// 00668d8c  8901                 mov dword ptr [ecx], eax
// 00668d8e  8b4208               mov eax, dword ptr [edx + 8]
// 00668d91  8964240c             mov dword ptr [esp + 0xc], esp
// 00668d95  894104               mov dword ptr [ecx + 4], eax
// 00668d98  85c0                 test eax, eax
// 00668d9a  740c                 je 0x668da8
// 00668d9c  83c004               add eax, 4
// 00668d9f  b901000000           mov ecx, 1
// 00668da4  f00fc108             lock xadd dword ptr [eax], ecx
// 00668da8  8b12                 mov edx, dword ptr [edx]
// 00668daa  ffd2                 call edx
// 00668dac  83c408               add esp, 8
// 00668daf  c3                   ret 
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