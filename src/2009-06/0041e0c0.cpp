// roc 2009-06 0041e0c0  unit: CSelectionTreeCtrl  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041e0c0
//
// 0041e0c0  51                   push ecx
// 0041e0c1  8b442418             mov eax, dword ptr [esp + 0x18]
// 0041e0c5  56                   push esi
// 0041e0c6  8b742414             mov esi, dword ptr [esp + 0x14]
// 0041e0ca  57                   push edi
// 0041e0cb  8bf8                 mov edi, eax
// 0041e0cd  3bf0                 cmp esi, eax
// 0041e0cf  7436                 je 0x41e107
// 0041e0d1  8b06                 mov eax, dword ptr [esi]
// 0041e0d3  83ec08               sub esp, 8
// 0041e0d6  8bcc                 mov ecx, esp
// 0041e0d8  8901                 mov dword ptr [ecx], eax
// 0041e0da  8b4604               mov eax, dword ptr [esi + 4]
// 0041e0dd  89642410             mov dword ptr [esp + 0x10], esp
// 0041e0e1  894104               mov dword ptr [ecx + 4], eax
// 0041e0e4  85c0                 test eax, eax
// 0041e0e6  740c                 je 0x41e0f4
// 0041e0e8  83c004               add eax, 4
// 0041e0eb  b901000000           mov ecx, 1
// 0041e0f0  f00fc108             lock xadd dword ptr [eax], ecx
// 0041e0f4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0041e0f8  52                   push edx
// 0041e0f9  ff542430             call dword ptr [esp + 0x30]
// 0041e0fd  83c608               add esi, 8
// 0041e100  83c40c               add esp, 0xc
// 0041e103  3bf7                 cmp esi, edi
// 0041e105  75ca                 jne 0x41e0d1
// 0041e107  8b442410             mov eax, dword ptr [esp + 0x10]
// 0041e10b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0041e10f  8b542428             mov edx, dword ptr [esp + 0x28]
// 0041e113  5f                   pop edi
// 0041e114  8908                 mov dword ptr [eax], ecx
// 0041e116  895004               mov dword ptr [eax + 4], edx
// 0041e119  5e                   pop esi
// 0041e11a  59                   pop ecx
// 0041e11b  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YA?AUFunction@@UIterator@@0U1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

struct Control
{
    long reserved;
    volatile long references;
};

struct Shared
{
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
    {
        volatile long* references = &control->references;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(references, 1);
    }
}

struct Iterator
{
    void* reserved;
    Shared* current;
};

struct Function
{
    void (__cdecl *callback)(void*, Shared);
    void* context;

    Function(const Function&);
};

inline Function::Function(const Function& other)
    : callback(other.callback), context(other.context)
{
}

Function __cdecl func_00423ba0(Iterator first, Iterator last, Function function)
{
    Shared* current = first.current;
    Shared* end = last.current;
    for (; current != end; ++current)
        function.callback(function.context, *current);
    return function;
}