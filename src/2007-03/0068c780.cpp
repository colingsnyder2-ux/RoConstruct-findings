// roc 2007-03 0068c780  unit: seg_00680000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068c780
//
// 0068c780  8b442408             mov eax, dword ptr [esp + 8]
// 0068c784  85c0                 test eax, eax
// 0068c786  56                   push esi
// 0068c787  7505                 jne 0x68c78e
// 0068c789  8b7104               mov esi, dword ptr [ecx + 4]
// 0068c78c  eb02                 jmp 0x68c790
// 0068c78e  8b30                 mov esi, dword ptr [eax]
// 0068c790  85f6                 test esi, esi
// 0068c792  7418                 je 0x68c7ac
// 0068c794  8d442408             lea eax, [esp + 8]
// 0068c798  50                   push eax
// 0068c799  8d4e08               lea ecx, [esi + 8]
// 0068c79c  51                   push ecx
// 0068c79d  e87e470300           call 0x6c0f20
// 0068c7a2  85c0                 test eax, eax
// 0068c7a4  750c                 jne 0x68c7b2
// 0068c7a6  8b36                 mov esi, dword ptr [esi]
// 0068c7a8  85f6                 test esi, esi
// 0068c7aa  75e8                 jne 0x68c794
// 0068c7ac  33c0                 xor eax, eax
// 0068c7ae  5e                   pop esi
// 0068c7af  c20800               ret 8
// 0068c7b2  8bc6                 mov eax, esi
// 0068c7b4  5e                   pop esi
// 0068c7b5  c20800               ret 8
// copied from an identical function in another client (function ?find@CXTPHookManagerHookAble@ns_ROCX00001e@@QAEHPAX0@Z)

namespace ns_ROCX00001e {
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
