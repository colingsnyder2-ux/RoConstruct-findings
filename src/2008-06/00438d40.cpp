// from server: 100% by king_originala
// roc 2008-06 00438d40  unit: IIHAAH::?$CMap  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00438d40
//
// 00438d40  51                   push ecx
// 00438d41  8b442418             mov eax, dword ptr [esp + 0x18]
// 00438d45  56                   push esi
// 00438d46  8b742414             mov esi, dword ptr [esp + 0x14]
// 00438d4a  57                   push edi
// 00438d4b  8bf8                 mov edi, eax
// 00438d4d  3bf0                 cmp esi, eax
// 00438d4f  7438                 je 0x438d89
// 00438d51  8b06                 mov eax, dword ptr [esi]
// 00438d53  83ec08               sub esp, 8
// 00438d56  8bcc                 mov ecx, esp
// 00438d58  8901                 mov dword ptr [ecx], eax
// 00438d5a  8b4604               mov eax, dword ptr [esi + 4]
// 00438d5d  89642410             mov dword ptr [esp + 0x10], esp
// 00438d61  894104               mov dword ptr [ecx + 4], eax
// 00438d64  85c0                 test eax, eax
// 00438d66  740c                 je 0x438d74
// 00438d68  83c004               add eax, 4
// 00438d6b  b901000000           mov ecx, 1
// 00438d70  f00fc108             lock xadd dword ptr [eax], ecx
// 00438d74  8d542434             lea edx, [esp + 0x34]
// 00438d78  52                   push edx
// 00438d79  8d4c2430             lea ecx, [esp + 0x30]
// 00438d7d  e8aefcffff           call 0x438a30
// 00438d82  83c608               add esi, 8
// 00438d85  3bf7                 cmp esi, edi
// 00438d87  75c8                 jne 0x438d51
// 00438d89  8b442410             mov eax, dword ptr [esp + 0x10]
// 00438d8d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00438d91  8b542428             mov edx, dword ptr [esp + 0x28]
// 00438d95  8908                 mov dword ptr [eax], ecx
// 00438d97  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00438d9b  895004               mov dword ptr [eax + 4], edx
// 00438d9e  8b542430             mov edx, dword ptr [esp + 0x30]
// 00438da2  5f                   pop edi
// 00438da3  894808               mov dword ptr [eax + 8], ecx
// 00438da6  89500c               mov dword ptr [eax + 0xc], edx
// 00438da9  5e                   pop esi
// 00438daa  59                   pop ecx
// 00438dab  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct Control {
    int unused;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control) {
        volatile long* references = &control->references;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(references, 1);
    }
}

struct Iterator {
    void* unused;
    Shared* current;
};

struct Functor {
    int first;
    int second;
    int third;
    int fourth;

    void invoke(int*, Shared);
};

Functor apply(Iterator first, Iterator last, Functor function)
{
    Shared* current = first.current;
    Shared* end = last.current;
    for (; current != end; ++current)
        function.invoke(&function.third, *current);
    return function;
}
