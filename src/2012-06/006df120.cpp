// roc 2012-06 006df120  unit: RBX::VFunctionalTest::?$FactoryProduct::Creator  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006df120
//
// 006df120  8b542404             mov edx, dword ptr [esp + 4]
// 006df124  8b4204               mov eax, dword ptr [edx + 4]
// 006df127  83ec08               sub esp, 8
// 006df12a  8bcc                 mov ecx, esp
// 006df12c  8901                 mov dword ptr [ecx], eax
// 006df12e  8b4208               mov eax, dword ptr [edx + 8]
// 006df131  8964240c             mov dword ptr [esp + 0xc], esp
// 006df135  894104               mov dword ptr [ecx + 4], eax
// 006df138  85c0                 test eax, eax
// 006df13a  740c                 je 0x6df148
// 006df13c  83c004               add eax, 4
// 006df13f  b901000000           mov ecx, 1
// 006df144  f00fc108             lock xadd dword ptr [eax], ecx
// 006df148  8b12                 mov edx, dword ptr [edx]
// 006df14a  ffd2                 call edx
// 006df14c  83c408               add esp, 8
// 006df14f  c3                   ret 
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