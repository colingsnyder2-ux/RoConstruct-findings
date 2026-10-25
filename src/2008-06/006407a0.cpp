// from server: 100% by king_originala
// roc 2008-06 006407a0  unit: RBX::AxisMoveTool  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006407a0
//
// 006407a0  51                   push ecx
// 006407a1  8b442418             mov eax, dword ptr [esp + 0x18]
// 006407a5  56                   push esi
// 006407a6  8b742414             mov esi, dword ptr [esp + 0x14]
// 006407aa  57                   push edi
// 006407ab  8bf8                 mov edi, eax
// 006407ad  3bf0                 cmp esi, eax
// 006407af  7436                 je 0x6407e7
// 006407b1  8b442428             mov eax, dword ptr [esp + 0x28]
// 006407b5  8b16                 mov edx, dword ptr [esi]
// 006407b7  50                   push eax
// 006407b8  83ec08               sub esp, 8
// 006407bb  8bcc                 mov ecx, esp
// 006407bd  8911                 mov dword ptr [ecx], edx
// 006407bf  8b4604               mov eax, dword ptr [esi + 4]
// 006407c2  89642414             mov dword ptr [esp + 0x14], esp
// 006407c6  894104               mov dword ptr [ecx + 4], eax
// 006407c9  85c0                 test eax, eax
// 006407cb  740c                 je 0x6407d9
// 006407cd  83c004               add eax, 4
// 006407d0  b901000000           mov ecx, 1
// 006407d5  f00fc108             lock xadd dword ptr [eax], ecx
// 006407d9  ff542430             call dword ptr [esp + 0x30]
// 006407dd  83c608               add esi, 8
// 006407e0  83c40c               add esp, 0xc
// 006407e3  3bf7                 cmp esi, edi
// 006407e5  75ca                 jne 0x6407b1
// 006407e7  8b442410             mov eax, dword ptr [esp + 0x10]
// 006407eb  8b542424             mov edx, dword ptr [esp + 0x24]
// 006407ef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006407f3  5f                   pop edi
// 006407f4  8910                 mov dword ptr [eax], edx
// 006407f6  894804               mov dword ptr [eax + 4], ecx
// 006407f9  5e                   pop esi
// 006407fa  59                   pop ecx
// 006407fb  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct Control {
    long unused;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared& other);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
{
    object = other.object;
    control = other.control;
    if (control) {
        volatile long* count = &control->references;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(count, 1);
    }
}

struct Iterator {
    void* owner;
    Shared* current;
};

struct Callback {
    void (__cdecl* function)(Shared, void*);
    void* context;
    Callback(const Callback& other);
};

__forceinline Callback::Callback(const Callback& other)
{
    function = other.function;
    context = other.context;
}

Callback __cdecl traverse(Iterator first, Iterator last, Callback callback)
{
    Shared* current = first.current;
    Shared* end = last.current;
    for (; current != end; ++current)
        callback.function(*current, callback.context);
    return callback;
}
