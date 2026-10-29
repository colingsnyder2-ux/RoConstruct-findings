// roc 2009-06 0060bd00  unit: RBX::ClearBackpack  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0060bd00
//
// 0060bd00  51                   push ecx
// 0060bd01  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060bd05  56                   push esi
// 0060bd06  8b742414             mov esi, dword ptr [esp + 0x14]
// 0060bd0a  57                   push edi
// 0060bd0b  8bf8                 mov edi, eax
// 0060bd0d  3bf0                 cmp esi, eax
// 0060bd0f  7431                 je 0x60bd42
// 0060bd11  8b06                 mov eax, dword ptr [esi]
// 0060bd13  83ec08               sub esp, 8
// 0060bd16  8bcc                 mov ecx, esp
// 0060bd18  8901                 mov dword ptr [ecx], eax
// 0060bd1a  8b4604               mov eax, dword ptr [esi + 4]
// 0060bd1d  89642410             mov dword ptr [esp + 0x10], esp
// 0060bd21  894104               mov dword ptr [ecx + 4], eax
// 0060bd24  85c0                 test eax, eax
// 0060bd26  740c                 je 0x60bd34
// 0060bd28  83c004               add eax, 4
// 0060bd2b  b901000000           mov ecx, 1
// 0060bd30  f00fc108             lock xadd dword ptr [eax], ecx
// 0060bd34  ff54242c             call dword ptr [esp + 0x2c]
// 0060bd38  83c608               add esi, 8
// 0060bd3b  83c408               add esp, 8
// 0060bd3e  3bf7                 cmp esi, edi
// 0060bd40  75cf                 jne 0x60bd11
// 0060bd42  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060bd46  8b542424             mov edx, dword ptr [esp + 0x24]
// 0060bd4a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060bd4e  5f                   pop edi
// 0060bd4f  8910                 mov dword ptr [eax], edx
// 0060bd51  894804               mov dword ptr [eax + 4], ecx
// 0060bd54  5e                   pop esi
// 0060bd55  59                   pop ecx
// 0060bd56  c3                   ret 
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