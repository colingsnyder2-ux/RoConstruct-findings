// roc 2009-12 006796d0  unit: RBX::ClearBackpack  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006796d0
//
// 006796d0  56                   push esi
// 006796d1  8b742408             mov esi, dword ptr [esp + 8]
// 006796d5  57                   push edi
// 006796d6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006796da  3bf7                 cmp esi, edi
// 006796dc  743c                 je 0x67971a
// 006796de  8bff                 mov edi, edi
// 006796e0  8b06                 mov eax, dword ptr [esi]
// 006796e2  83ec08               sub esp, 8
// 006796e5  8bcc                 mov ecx, esp
// 006796e7  8901                 mov dword ptr [ecx], eax
// 006796e9  8b4604               mov eax, dword ptr [esi + 4]
// 006796ec  89642414             mov dword ptr [esp + 0x14], esp
// 006796f0  894104               mov dword ptr [ecx + 4], eax
// 006796f3  85c0                 test eax, eax
// 006796f5  740c                 je 0x679703
// 006796f7  83c004               add eax, 4
// 006796fa  b901000000           mov ecx, 1
// 006796ff  f00fc108             lock xadd dword ptr [eax], ecx
// 00679703  8b542420             mov edx, dword ptr [esp + 0x20]
// 00679707  52                   push edx
// 00679708  ff542420             call dword ptr [esp + 0x20]
// 0067970c  83c40c               add esp, 0xc
// 0067970f  84c0                 test al, al
// 00679711  7507                 jne 0x67971a
// 00679713  83c608               add esi, 8
// 00679716  3bf7                 cmp esi, edi
// 00679718  75c6                 jne 0x6796e0
// 0067971a  5f                   pop edi
// 0067971b  8bc6                 mov eax, esi
// 0067971d  5e                   pop esi
// 0067971e  c3                   ret 
// copied from an identical function in another client (function ?findPointer@@YAPAUPointer@@PAU1@0UPredicate@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    void* reserved;
    volatile long references;
};

struct Pointer {
    void* object;
    Control* control;

    Pointer(const Pointer&);
    ~Pointer();
};

__forceinline Pointer::Pointer(const Pointer& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->references);
}

struct Predicate {
    bool (__cdecl *function)(void*, Pointer);
    void* context;
};

Pointer* __cdecl findPointer(Pointer* first, Pointer* last,
                            Predicate predicate)
{
    while (first != last) {
        if (predicate.function(predicate.context, *first))
            break;
        ++first;
    }
    return first;
}