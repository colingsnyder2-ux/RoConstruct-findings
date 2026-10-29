// roc 2009-06 00448620  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00448620
//
// 00448620  8b542404             mov edx, dword ptr [esp + 4]
// 00448624  8b4204               mov eax, dword ptr [edx + 4]
// 00448627  83ec08               sub esp, 8
// 0044862a  8bcc                 mov ecx, esp
// 0044862c  8901                 mov dword ptr [ecx], eax
// 0044862e  8b4208               mov eax, dword ptr [edx + 8]
// 00448631  8964240c             mov dword ptr [esp + 0xc], esp
// 00448635  894104               mov dword ptr [ecx + 4], eax
// 00448638  85c0                 test eax, eax
// 0044863a  740c                 je 0x448648
// 0044863c  83c004               add eax, 4
// 0044863f  b901000000           mov ecx, 1
// 00448644  f00fc108             lock xadd dword ptr [eax], ecx
// 00448648  8b12                 mov edx, dword ptr [edx]
// 0044864a  ffd2                 call edx
// 0044864c  83c408               add esp, 8
// 0044864f  c3                   ret 
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