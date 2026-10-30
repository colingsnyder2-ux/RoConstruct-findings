// roc 2009-12 007a9e10  unit: RBX::AxisMoveTool  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a9e10
//
// 007a9e10  51                   push ecx
// 007a9e11  8b442418             mov eax, dword ptr [esp + 0x18]
// 007a9e15  56                   push esi
// 007a9e16  8b742414             mov esi, dword ptr [esp + 0x14]
// 007a9e1a  57                   push edi
// 007a9e1b  8bf8                 mov edi, eax
// 007a9e1d  3bf0                 cmp esi, eax
// 007a9e1f  7436                 je 0x7a9e57
// 007a9e21  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a9e25  8b16                 mov edx, dword ptr [esi]
// 007a9e27  50                   push eax
// 007a9e28  83ec08               sub esp, 8
// 007a9e2b  8bcc                 mov ecx, esp
// 007a9e2d  8911                 mov dword ptr [ecx], edx
// 007a9e2f  8b4604               mov eax, dword ptr [esi + 4]
// 007a9e32  89642414             mov dword ptr [esp + 0x14], esp
// 007a9e36  894104               mov dword ptr [ecx + 4], eax
// 007a9e39  85c0                 test eax, eax
// 007a9e3b  740c                 je 0x7a9e49
// 007a9e3d  83c004               add eax, 4
// 007a9e40  b901000000           mov ecx, 1
// 007a9e45  f00fc108             lock xadd dword ptr [eax], ecx
// 007a9e49  ff542430             call dword ptr [esp + 0x30]
// 007a9e4d  83c608               add esi, 8
// 007a9e50  83c40c               add esp, 0xc
// 007a9e53  3bf7                 cmp esi, edi
// 007a9e55  75ca                 jne 0x7a9e21
// 007a9e57  8b442410             mov eax, dword ptr [esp + 0x10]
// 007a9e5b  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a9e5f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007a9e63  5f                   pop edi
// 007a9e64  8910                 mov dword ptr [eax], edx
// 007a9e66  894804               mov dword ptr [eax + 4], ecx
// 007a9e69  5e                   pop esi
// 007a9e6a  59                   pop ecx
// 007a9e6b  c3                   ret 
// copied from an identical function in another client (function ?traverse@@YA?AUCallback@@UIterator@@0U1@@Z)

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