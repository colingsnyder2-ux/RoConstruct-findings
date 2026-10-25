// from server: 100% by king_originala
// roc 2008-06 0044c0a0  unit: CRobloxModule  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044c0a0
//
// 0044c0a0  8b542404             mov edx, dword ptr [esp + 4]
// 0044c0a4  8b4204               mov eax, dword ptr [edx + 4]
// 0044c0a7  83ec08               sub esp, 8
// 0044c0aa  8bcc                 mov ecx, esp
// 0044c0ac  8901                 mov dword ptr [ecx], eax
// 0044c0ae  8b4208               mov eax, dword ptr [edx + 8]
// 0044c0b1  8964240c             mov dword ptr [esp + 0xc], esp
// 0044c0b5  894104               mov dword ptr [ecx + 4], eax
// 0044c0b8  85c0                 test eax, eax
// 0044c0ba  740c                 je 0x44c0c8
// 0044c0bc  83c004               add eax, 4
// 0044c0bf  b901000000           mov ecx, 1
// 0044c0c4  f00fc108             lock xadd dword ptr [eax], ecx
// 0044c0c8  8b12                 mov edx, dword ptr [edx]
// 0044c0ca  ffd2                 call edx
// 0044c0cc  83c408               add esp, 8
// 0044c0cf  c3                   ret 

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
