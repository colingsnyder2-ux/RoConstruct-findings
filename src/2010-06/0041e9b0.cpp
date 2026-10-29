// roc 2010-06 0041e9b0  unit: CSelectionTreeCtrl  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041e9b0
//
// 0041e9b0  51                   push ecx
// 0041e9b1  8b442418             mov eax, dword ptr [esp + 0x18]
// 0041e9b5  56                   push esi
// 0041e9b6  8b742414             mov esi, dword ptr [esp + 0x14]
// 0041e9ba  57                   push edi
// 0041e9bb  8bf8                 mov edi, eax
// 0041e9bd  3bf0                 cmp esi, eax
// 0041e9bf  7436                 je 0x41e9f7
// 0041e9c1  8b06                 mov eax, dword ptr [esi]
// 0041e9c3  83ec08               sub esp, 8
// 0041e9c6  8bcc                 mov ecx, esp
// 0041e9c8  8901                 mov dword ptr [ecx], eax
// 0041e9ca  8b4604               mov eax, dword ptr [esi + 4]
// 0041e9cd  89642410             mov dword ptr [esp + 0x10], esp
// 0041e9d1  894104               mov dword ptr [ecx + 4], eax
// 0041e9d4  85c0                 test eax, eax
// 0041e9d6  740c                 je 0x41e9e4
// 0041e9d8  83c004               add eax, 4
// 0041e9db  b901000000           mov ecx, 1
// 0041e9e0  f00fc108             lock xadd dword ptr [eax], ecx
// 0041e9e4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0041e9e8  52                   push edx
// 0041e9e9  ff542430             call dword ptr [esp + 0x30]
// 0041e9ed  83c608               add esi, 8
// 0041e9f0  83c40c               add esp, 0xc
// 0041e9f3  3bf7                 cmp esi, edi
// 0041e9f5  75ca                 jne 0x41e9c1
// 0041e9f7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0041e9fb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0041e9ff  8b542428             mov edx, dword ptr [esp + 0x28]
// 0041ea03  5f                   pop edi
// 0041ea04  8908                 mov dword ptr [eax], ecx
// 0041ea06  895004               mov dword ptr [eax + 4], edx
// 0041ea09  5e                   pop esi
// 0041ea0a  59                   pop ecx
// 0041ea0b  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_00423ba0@@YA?AUFunction@@UIterator@@0U1@@Z)

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