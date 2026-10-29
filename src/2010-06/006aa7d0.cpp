// roc 2010-06 006aa7d0  unit: boost::Vthread::?$sp_counted_impl_p  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006aa7d0
//
// 006aa7d0  51                   push ecx
// 006aa7d1  8b442418             mov eax, dword ptr [esp + 0x18]
// 006aa7d5  56                   push esi
// 006aa7d6  8b742414             mov esi, dword ptr [esp + 0x14]
// 006aa7da  57                   push edi
// 006aa7db  8bf8                 mov edi, eax
// 006aa7dd  3bf0                 cmp esi, eax
// 006aa7df  7431                 je 0x6aa812
// 006aa7e1  8b06                 mov eax, dword ptr [esi]
// 006aa7e3  83ec08               sub esp, 8
// 006aa7e6  8bcc                 mov ecx, esp
// 006aa7e8  8901                 mov dword ptr [ecx], eax
// 006aa7ea  8b4604               mov eax, dword ptr [esi + 4]
// 006aa7ed  89642410             mov dword ptr [esp + 0x10], esp
// 006aa7f1  894104               mov dword ptr [ecx + 4], eax
// 006aa7f4  85c0                 test eax, eax
// 006aa7f6  740c                 je 0x6aa804
// 006aa7f8  83c004               add eax, 4
// 006aa7fb  b901000000           mov ecx, 1
// 006aa800  f00fc108             lock xadd dword ptr [eax], ecx
// 006aa804  ff54242c             call dword ptr [esp + 0x2c]
// 006aa808  83c608               add esi, 8
// 006aa80b  83c408               add esp, 8
// 006aa80e  3bf7                 cmp esi, edi
// 006aa810  75cf                 jne 0x6aa7e1
// 006aa812  8b442410             mov eax, dword ptr [esp + 0x10]
// 006aa816  8b542424             mov edx, dword ptr [esp + 0x24]
// 006aa81a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006aa81e  5f                   pop edi
// 006aa81f  8910                 mov dword ptr [eax], edx
// 006aa821  894804               mov dword ptr [eax + 4], ecx
// 006aa824  5e                   pop esi
// 006aa825  59                   pop ecx
// 006aa826  c3                   ret 
// copied from an identical function in another client (function ?apply@@YA?AUFunction@@UIterator@@0U1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


struct Control {
    long reserved;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->references);
}

struct Iterator {
    void* owner;
    Shared* position;
};

struct Function {
    void (__cdecl *callback)(Shared);
    unsigned long state;
    Function(const Function&);
};

__forceinline Function::Function(const Function& other)
    : callback(other.callback), state(other.state)
{
}

Function __cdecl apply(Iterator first, Iterator last, Function function)
{
    Shared* current = first.position;
    Shared* end = last.position;
    for (; current != end; ++current)
        function.callback(*current);
    return function;
}