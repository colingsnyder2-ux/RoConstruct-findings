// from server: 66% by colin
// roc 2007-08 00560430  unit: RBX::VModelInstance::?$FilteredSelection  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00560430
//
// 00560430  53                   push ebx
// 00560431  55                   push ebp
// 00560432  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00560436  56                   push esi
// 00560437  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056043b  3bf5                 cmp esi, ebp
// 0056043d  57                   push edi
// 0056043e  743c                 je 0x56047c
// 00560440  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00560444  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00560448  8b06                 mov eax, dword ptr [esi]
// 0056044a  83ec08               sub esp, 8
// 0056044d  8bcc                 mov ecx, esp
// 0056044f  8901                 mov dword ptr [ecx], eax
// 00560451  8b4604               mov eax, dword ptr [esi + 4]
// 00560454  85c0                 test eax, eax
// 00560456  8964241c             mov dword ptr [esp + 0x1c], esp
// 0056045a  894104               mov dword ptr [ecx + 4], eax
// 0056045d  740c                 je 0x56046b
// 0056045f  83c004               add eax, 4
// 00560462  b901000000           mov ecx, 1
// 00560467  f00fc108             lock xadd dword ptr [eax], ecx
// 0056046b  57                   push edi
// 0056046c  ffd3                 call ebx
// 0056046e  83c40c               add esp, 0xc
// 00560471  84c0                 test al, al
// 00560473  7507                 jne 0x56047c
// 00560475  83c608               add esi, 8
// 00560478  3bf5                 cmp esi, ebp
// 0056047a  75cc                 jne 0x560448
// 0056047c  5f                   pop edi
// 0056047d  8bc6                 mov eax, esi
// 0056047f  5e                   pop esi
// 00560480  5d                   pop ebp
// 00560481  5b                   pop ebx
// 00560482  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
};

struct Element {
    void* ptr;
    RefCounted* ref;
};

typedef bool (__cdecl *PredFn)(void*);

Element* find_if(Element* first, Element* last, PredFn pred, void* arg) {
    while (first != last) {
        Element tmp;
        tmp.ptr = first->ptr;
        tmp.ref = first->ref;
        if (tmp.ref) {
            _InterlockedExchangeAdd(&tmp.ref->refCount, 1);
        }
        bool result = pred(arg);
        if (result) {
            return first;
        }
        ++first;
    }
    return first;
}
