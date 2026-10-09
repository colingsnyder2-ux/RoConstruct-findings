// from server: 98% by colin
// roc 2007-08 006a2dd0  unit: CXTPHookManagerHookAble  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a2dd0
//
// 006a2dd0  8b442408             mov eax, dword ptr [esp + 8]
// 006a2dd4  85c0                 test eax, eax
// 006a2dd6  56                   push esi
// 006a2dd7  7505                 jne 0x6a2dde
// 006a2dd9  8b7104               mov esi, dword ptr [ecx + 4]
// 006a2ddc  eb02                 jmp 0x6a2de0
// 006a2dde  8b30                 mov esi, dword ptr [eax]
// 006a2de0  85f6                 test esi, esi
// 006a2de2  7418                 je 0x6a2dfc
// 006a2de4  8d442408             lea eax, [esp + 8]
// 006a2de8  50                   push eax
// 006a2de9  8d4e08               lea ecx, [esi + 8]
// 006a2dec  51                   push ecx
// 006a2ded  e84ecafeff           call 0x68f840
// 006a2df2  85c0                 test eax, eax
// 006a2df4  750c                 jne 0x6a2e02
// 006a2df6  8b36                 mov esi, dword ptr [esi]
// 006a2df8  85f6                 test esi, esi
// 006a2dfa  75e8                 jne 0x6a2de4
// 006a2dfc  33c0                 xor eax, eax
// 006a2dfe  5e                   pop esi
// 006a2dff  c20800               ret 8
// 006a2e02  8bc6                 mov eax, esi
// 006a2e04  5e                   pop esi
// 006a2e05  c20800               ret 8

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
