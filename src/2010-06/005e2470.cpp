// roc 2010-06 005e2470  unit: RBX::ClearBackpack  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e2470
//
// 005e2470  56                   push esi
// 005e2471  8b742408             mov esi, dword ptr [esp + 8]
// 005e2475  57                   push edi
// 005e2476  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005e247a  3bf7                 cmp esi, edi
// 005e247c  743c                 je 0x5e24ba
// 005e247e  8bff                 mov edi, edi
// 005e2480  8b06                 mov eax, dword ptr [esi]
// 005e2482  83ec08               sub esp, 8
// 005e2485  8bcc                 mov ecx, esp
// 005e2487  8901                 mov dword ptr [ecx], eax
// 005e2489  8b4604               mov eax, dword ptr [esi + 4]
// 005e248c  89642414             mov dword ptr [esp + 0x14], esp
// 005e2490  894104               mov dword ptr [ecx + 4], eax
// 005e2493  85c0                 test eax, eax
// 005e2495  740c                 je 0x5e24a3
// 005e2497  83c004               add eax, 4
// 005e249a  b901000000           mov ecx, 1
// 005e249f  f00fc108             lock xadd dword ptr [eax], ecx
// 005e24a3  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e24a7  52                   push edx
// 005e24a8  ff542420             call dword ptr [esp + 0x20]
// 005e24ac  83c40c               add esp, 0xc
// 005e24af  84c0                 test al, al
// 005e24b1  7507                 jne 0x5e24ba
// 005e24b3  83c608               add esi, 8
// 005e24b6  3bf7                 cmp esi, edi
// 005e24b8  75c6                 jne 0x5e2480
// 005e24ba  5f                   pop edi
// 005e24bb  8bc6                 mov eax, esi
// 005e24bd  5e                   pop esi
// 005e24be  c3                   ret 
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