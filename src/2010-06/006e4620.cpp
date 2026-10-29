// roc 2010-06 006e4620  unit: RBX::VLuaDragger::?$FactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e4620
//
// 006e4620  51                   push ecx
// 006e4621  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e4625  56                   push esi
// 006e4626  8b742414             mov esi, dword ptr [esp + 0x14]
// 006e462a  57                   push edi
// 006e462b  8bf8                 mov edi, eax
// 006e462d  3bf0                 cmp esi, eax
// 006e462f  7436                 je 0x6e4667
// 006e4631  8b442428             mov eax, dword ptr [esp + 0x28]
// 006e4635  8b16                 mov edx, dword ptr [esi]
// 006e4637  50                   push eax
// 006e4638  83ec08               sub esp, 8
// 006e463b  8bcc                 mov ecx, esp
// 006e463d  8911                 mov dword ptr [ecx], edx
// 006e463f  8b4604               mov eax, dword ptr [esi + 4]
// 006e4642  89642414             mov dword ptr [esp + 0x14], esp
// 006e4646  894104               mov dword ptr [ecx + 4], eax
// 006e4649  85c0                 test eax, eax
// 006e464b  740c                 je 0x6e4659
// 006e464d  83c004               add eax, 4
// 006e4650  b901000000           mov ecx, 1
// 006e4655  f00fc108             lock xadd dword ptr [eax], ecx
// 006e4659  ff542430             call dword ptr [esp + 0x30]
// 006e465d  83c608               add esi, 8
// 006e4660  83c40c               add esp, 0xc
// 006e4663  3bf7                 cmp esi, edi
// 006e4665  75ca                 jne 0x6e4631
// 006e4667  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e466b  8b542424             mov edx, dword ptr [esp + 0x24]
// 006e466f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006e4673  5f                   pop edi
// 006e4674  8910                 mov dword ptr [eax], edx
// 006e4676  894804               mov dword ptr [eax + 4], ecx
// 006e4679  5e                   pop esi
// 006e467a  59                   pop ecx
// 006e467b  c3                   ret 
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