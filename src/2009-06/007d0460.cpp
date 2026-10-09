// roc 2009-06 007d0460  unit: CXTPDockingPaneAutoHidePanel  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d0460
//
// 007d0460  8b442408             mov eax, dword ptr [esp + 8]
// 007d0464  56                   push esi
// 007d0465  85c0                 test eax, eax
// 007d0467  7505                 jne 0x7d046e
// 007d0469  8b7104               mov esi, dword ptr [ecx + 4]
// 007d046c  eb02                 jmp 0x7d0470
// 007d046e  8b30                 mov esi, dword ptr [eax]
// 007d0470  85f6                 test esi, esi
// 007d0472  7418                 je 0x7d048c
// 007d0474  8d442408             lea eax, [esp + 8]
// 007d0478  50                   push eax
// 007d0479  8d4e08               lea ecx, [esi + 8]
// 007d047c  51                   push ecx
// 007d047d  e87e65f8ff           call 0x756a00
// 007d0482  85c0                 test eax, eax
// 007d0484  750c                 jne 0x7d0492
// 007d0486  8b36                 mov esi, dword ptr [esi]
// 007d0488  85f6                 test esi, esi
// 007d048a  75e8                 jne 0x7d0474
// 007d048c  33c0                 xor eax, eax
// 007d048e  5e                   pop esi
// 007d048f  c20800               ret 8
// 007d0492  8bc6                 mov eax, esi
// 007d0494  5e                   pop esi
// 007d0495  c20800               ret 8
// copied from an identical function in another client (function ?find@CXTPHookManagerHookAble@ns_ROCX00001d@@QAEHPAX0@Z)

namespace ns_ROCX00001d {
struct CXTPHookManagerHookAble {
    int find(void* unused, void* key);
};

extern "C" int __stdcall compare_key(void* a, void* b);

int CXTPHookManagerHookAble::find(void* unused, void* key)
{
    void* node;
    if (key == 0)
        node = *(void**)((char*)this + 4);
    else
        node = *(void**)key;

    while (node != 0) {
        if (compare_key((char*)node + 8, &unused) != 0)
            return (int)node;
        node = *(void**)node;
    }
    return 0;
}
}
