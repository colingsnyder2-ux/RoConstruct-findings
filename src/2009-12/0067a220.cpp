// roc 2009-12 0067a220  unit: RBX::VInstance::?$FilteredSelection  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067a220
//
// 0067a220  51                   push ecx
// 0067a221  8b442418             mov eax, dword ptr [esp + 0x18]
// 0067a225  56                   push esi
// 0067a226  8b742414             mov esi, dword ptr [esp + 0x14]
// 0067a22a  57                   push edi
// 0067a22b  8bf8                 mov edi, eax
// 0067a22d  3bf0                 cmp esi, eax
// 0067a22f  7433                 je 0x67a264
// 0067a231  8b06                 mov eax, dword ptr [esi]
// 0067a233  83ec08               sub esp, 8
// 0067a236  8bcc                 mov ecx, esp
// 0067a238  8901                 mov dword ptr [ecx], eax
// 0067a23a  8b4604               mov eax, dword ptr [esi + 4]
// 0067a23d  89642410             mov dword ptr [esp + 0x10], esp
// 0067a241  894104               mov dword ptr [ecx + 4], eax
// 0067a244  85c0                 test eax, eax
// 0067a246  740c                 je 0x67a254
// 0067a248  83c004               add eax, 4
// 0067a24b  b901000000           mov ecx, 1
// 0067a250  f00fc108             lock xadd dword ptr [eax], ecx
// 0067a254  8d4c242c             lea ecx, [esp + 0x2c]
// 0067a258  e873feffff           call 0x67a0d0
// 0067a25d  83c608               add esi, 8
// 0067a260  3bf7                 cmp esi, edi
// 0067a262  75cd                 jne 0x67a231
// 0067a264  8b442410             mov eax, dword ptr [esp + 0x10]
// 0067a268  8b542424             mov edx, dword ptr [esp + 0x24]
// 0067a26c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0067a270  5f                   pop edi
// 0067a271  8910                 mov dword ptr [eax], edx
// 0067a273  894804               mov dword ptr [eax + 4], ecx
// 0067a276  5e                   pop esi
// 0067a277  59                   pop ecx
// 0067a278  c3                   ret 
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