// roc 2010-06 005e2f60  unit: RBX::VInstance::?$FilteredSelection  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e2f60
//
// 005e2f60  51                   push ecx
// 005e2f61  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e2f65  56                   push esi
// 005e2f66  8b742414             mov esi, dword ptr [esp + 0x14]
// 005e2f6a  57                   push edi
// 005e2f6b  8bf8                 mov edi, eax
// 005e2f6d  3bf0                 cmp esi, eax
// 005e2f6f  7433                 je 0x5e2fa4
// 005e2f71  8b06                 mov eax, dword ptr [esi]
// 005e2f73  83ec08               sub esp, 8
// 005e2f76  8bcc                 mov ecx, esp
// 005e2f78  8901                 mov dword ptr [ecx], eax
// 005e2f7a  8b4604               mov eax, dword ptr [esi + 4]
// 005e2f7d  89642410             mov dword ptr [esp + 0x10], esp
// 005e2f81  894104               mov dword ptr [ecx + 4], eax
// 005e2f84  85c0                 test eax, eax
// 005e2f86  740c                 je 0x5e2f94
// 005e2f88  83c004               add eax, 4
// 005e2f8b  b901000000           mov ecx, 1
// 005e2f90  f00fc108             lock xadd dword ptr [eax], ecx
// 005e2f94  8d4c242c             lea ecx, [esp + 0x2c]
// 005e2f98  e873feffff           call 0x5e2e10
// 005e2f9d  83c608               add esi, 8
// 005e2fa0  3bf7                 cmp esi, edi
// 005e2fa2  75cd                 jne 0x5e2f71
// 005e2fa4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005e2fa8  8b542424             mov edx, dword ptr [esp + 0x24]
// 005e2fac  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e2fb0  5f                   pop edi
// 005e2fb1  8910                 mov dword ptr [eax], edx
// 005e2fb3  894804               mov dword ptr [eax + 4], ecx
// 005e2fb6  5e                   pop esi
// 005e2fb7  59                   pop ecx
// 005e2fb8  c3                   ret 
// copied from an identical function in another client (function ?apply@@YA?AUPredicate@@UIterator@@0U1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    long unused;
    volatile long references;
};

struct Shared {
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->references);
}

struct Iterator {
    void* owner;
    Shared* current;
};

struct Predicate {
    void* first;
    void* second;

    Predicate(const Predicate&);
    void operator()(Shared);
};

__forceinline Predicate::Predicate(const Predicate& other)
    : first(other.first), second(other.second)
{
}

Predicate __cdecl apply(Iterator begin, Iterator end, Predicate predicate)
{
    Shared* current = begin.current;
    Shared* finish = end.current;
    while (current != finish) {
        predicate(*current);
        ++current;
    }
    return predicate;
}