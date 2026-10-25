// from server: 100% by colin
// roc 2008-06 0057fab0  unit: RBX::VModelInstance::?$FilteredSelection  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057fab0
//
// 0057fab0  51                   push ecx
// 0057fab1  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057fab5  56                   push esi
// 0057fab6  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057faba  57                   push edi
// 0057fabb  8bf8                 mov edi, eax
// 0057fabd  3bf0                 cmp esi, eax
// 0057fabf  7433                 je 0x57faf4
// 0057fac1  8b06                 mov eax, dword ptr [esi]
// 0057fac3  83ec08               sub esp, 8
// 0057fac6  8bcc                 mov ecx, esp
// 0057fac8  8901                 mov dword ptr [ecx], eax
// 0057faca  8b4604               mov eax, dword ptr [esi + 4]
// 0057facd  89642410             mov dword ptr [esp + 0x10], esp
// 0057fad1  894104               mov dword ptr [ecx + 4], eax
// 0057fad4  85c0                 test eax, eax
// 0057fad6  740c                 je 0x57fae4
// 0057fad8  83c004               add eax, 4
// 0057fadb  b901000000           mov ecx, 1
// 0057fae0  f00fc108             lock xadd dword ptr [eax], ecx
// 0057fae4  8d4c242c             lea ecx, [esp + 0x2c]
// 0057fae8  e873feffff           call 0x57f960
// 0057faed  83c608               add esi, 8
// 0057faf0  3bf7                 cmp esi, edi
// 0057faf2  75cd                 jne 0x57fac1
// 0057faf4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057faf8  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057fafc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057fb00  5f                   pop edi
// 0057fb01  8910                 mov dword ptr [eax], edx
// 0057fb03  894804               mov dword ptr [eax + 4], ecx
// 0057fb06  5e                   pop esi
// 0057fb07  59                   pop ecx
// 0057fb08  c3                   ret 

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
