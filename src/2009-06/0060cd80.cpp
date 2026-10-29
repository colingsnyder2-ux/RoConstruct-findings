// roc 2009-06 0060cd80  unit: RBX::VInstance::?$FilteredSelection  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0060cd80
//
// 0060cd80  51                   push ecx
// 0060cd81  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060cd85  56                   push esi
// 0060cd86  8b742414             mov esi, dword ptr [esp + 0x14]
// 0060cd8a  57                   push edi
// 0060cd8b  8bf8                 mov edi, eax
// 0060cd8d  3bf0                 cmp esi, eax
// 0060cd8f  7433                 je 0x60cdc4
// 0060cd91  8b06                 mov eax, dword ptr [esi]
// 0060cd93  83ec08               sub esp, 8
// 0060cd96  8bcc                 mov ecx, esp
// 0060cd98  8901                 mov dword ptr [ecx], eax
// 0060cd9a  8b4604               mov eax, dword ptr [esi + 4]
// 0060cd9d  89642410             mov dword ptr [esp + 0x10], esp
// 0060cda1  894104               mov dword ptr [ecx + 4], eax
// 0060cda4  85c0                 test eax, eax
// 0060cda6  740c                 je 0x60cdb4
// 0060cda8  83c004               add eax, 4
// 0060cdab  b901000000           mov ecx, 1
// 0060cdb0  f00fc108             lock xadd dword ptr [eax], ecx
// 0060cdb4  8d4c242c             lea ecx, [esp + 0x2c]
// 0060cdb8  e873feffff           call 0x60cc30
// 0060cdbd  83c608               add esi, 8
// 0060cdc0  3bf7                 cmp esi, edi
// 0060cdc2  75cd                 jne 0x60cd91
// 0060cdc4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060cdc8  8b542424             mov edx, dword ptr [esp + 0x24]
// 0060cdcc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060cdd0  5f                   pop edi
// 0060cdd1  8910                 mov dword ptr [eax], edx
// 0060cdd3  894804               mov dword ptr [eax + 4], ecx
// 0060cdd6  5e                   pop esi
// 0060cdd7  59                   pop ecx
// 0060cdd8  c3                   ret 
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