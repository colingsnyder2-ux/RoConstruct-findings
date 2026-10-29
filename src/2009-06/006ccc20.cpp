// roc 2009-06 006ccc20  unit: RBX::AxisMoveTool  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ccc20
//
// 006ccc20  51                   push ecx
// 006ccc21  8b442418             mov eax, dword ptr [esp + 0x18]
// 006ccc25  56                   push esi
// 006ccc26  8b742414             mov esi, dword ptr [esp + 0x14]
// 006ccc2a  57                   push edi
// 006ccc2b  8bf8                 mov edi, eax
// 006ccc2d  3bf0                 cmp esi, eax
// 006ccc2f  7436                 je 0x6ccc67
// 006ccc31  8b442428             mov eax, dword ptr [esp + 0x28]
// 006ccc35  8b16                 mov edx, dword ptr [esi]
// 006ccc37  50                   push eax
// 006ccc38  83ec08               sub esp, 8
// 006ccc3b  8bcc                 mov ecx, esp
// 006ccc3d  8911                 mov dword ptr [ecx], edx
// 006ccc3f  8b4604               mov eax, dword ptr [esi + 4]
// 006ccc42  89642414             mov dword ptr [esp + 0x14], esp
// 006ccc46  894104               mov dword ptr [ecx + 4], eax
// 006ccc49  85c0                 test eax, eax
// 006ccc4b  740c                 je 0x6ccc59
// 006ccc4d  83c004               add eax, 4
// 006ccc50  b901000000           mov ecx, 1
// 006ccc55  f00fc108             lock xadd dword ptr [eax], ecx
// 006ccc59  ff542430             call dword ptr [esp + 0x30]
// 006ccc5d  83c608               add esi, 8
// 006ccc60  83c40c               add esp, 0xc
// 006ccc63  3bf7                 cmp esi, edi
// 006ccc65  75ca                 jne 0x6ccc31
// 006ccc67  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ccc6b  8b542424             mov edx, dword ptr [esp + 0x24]
// 006ccc6f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006ccc73  5f                   pop edi
// 006ccc74  8910                 mov dword ptr [eax], edx
// 006ccc76  894804               mov dword ptr [eax + 4], ecx
// 006ccc79  5e                   pop esi
// 006ccc7a  59                   pop ecx
// 006ccc7b  c3                   ret 
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