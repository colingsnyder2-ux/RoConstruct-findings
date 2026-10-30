// roc 2009-06 0060c260  unit: RBX::ClearBackpack  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0060c260
//
// 0060c260  56                   push esi
// 0060c261  8b742408             mov esi, dword ptr [esp + 8]
// 0060c265  57                   push edi
// 0060c266  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0060c26a  3bf7                 cmp esi, edi
// 0060c26c  743c                 je 0x60c2aa
// 0060c26e  8bff                 mov edi, edi
// 0060c270  8b06                 mov eax, dword ptr [esi]
// 0060c272  83ec08               sub esp, 8
// 0060c275  8bcc                 mov ecx, esp
// 0060c277  8901                 mov dword ptr [ecx], eax
// 0060c279  8b4604               mov eax, dword ptr [esi + 4]
// 0060c27c  89642414             mov dword ptr [esp + 0x14], esp
// 0060c280  894104               mov dword ptr [ecx + 4], eax
// 0060c283  85c0                 test eax, eax
// 0060c285  740c                 je 0x60c293
// 0060c287  83c004               add eax, 4
// 0060c28a  b901000000           mov ecx, 1
// 0060c28f  f00fc108             lock xadd dword ptr [eax], ecx
// 0060c293  8b542420             mov edx, dword ptr [esp + 0x20]
// 0060c297  52                   push edx
// 0060c298  ff542420             call dword ptr [esp + 0x20]
// 0060c29c  83c40c               add esp, 0xc
// 0060c29f  84c0                 test al, al
// 0060c2a1  7507                 jne 0x60c2aa
// 0060c2a3  83c608               add esi, 8
// 0060c2a6  3bf7                 cmp esi, edi
// 0060c2a8  75c6                 jne 0x60c270
// 0060c2aa  5f                   pop edi
// 0060c2ab  8bc6                 mov eax, esi
// 0060c2ad  5e                   pop esi
// 0060c2ae  c3                   ret 
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