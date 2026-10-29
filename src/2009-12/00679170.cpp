// roc 2009-12 00679170  unit: RBX::ClearBackpack  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00679170
//
// 00679170  51                   push ecx
// 00679171  8b442418             mov eax, dword ptr [esp + 0x18]
// 00679175  56                   push esi
// 00679176  8b742414             mov esi, dword ptr [esp + 0x14]
// 0067917a  57                   push edi
// 0067917b  8bf8                 mov edi, eax
// 0067917d  3bf0                 cmp esi, eax
// 0067917f  7431                 je 0x6791b2
// 00679181  8b06                 mov eax, dword ptr [esi]
// 00679183  83ec08               sub esp, 8
// 00679186  8bcc                 mov ecx, esp
// 00679188  8901                 mov dword ptr [ecx], eax
// 0067918a  8b4604               mov eax, dword ptr [esi + 4]
// 0067918d  89642410             mov dword ptr [esp + 0x10], esp
// 00679191  894104               mov dword ptr [ecx + 4], eax
// 00679194  85c0                 test eax, eax
// 00679196  740c                 je 0x6791a4
// 00679198  83c004               add eax, 4
// 0067919b  b901000000           mov ecx, 1
// 006791a0  f00fc108             lock xadd dword ptr [eax], ecx
// 006791a4  ff54242c             call dword ptr [esp + 0x2c]
// 006791a8  83c608               add esi, 8
// 006791ab  83c408               add esp, 8
// 006791ae  3bf7                 cmp esi, edi
// 006791b0  75cf                 jne 0x679181
// 006791b2  8b442410             mov eax, dword ptr [esp + 0x10]
// 006791b6  8b542424             mov edx, dword ptr [esp + 0x24]
// 006791ba  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006791be  5f                   pop edi
// 006791bf  8910                 mov dword ptr [eax], edx
// 006791c1  894804               mov dword ptr [eax + 4], ecx
// 006791c4  5e                   pop esi
// 006791c5  59                   pop ecx
// 006791c6  c3                   ret 
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