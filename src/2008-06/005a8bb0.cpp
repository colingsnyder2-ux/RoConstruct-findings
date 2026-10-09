// roc 2008-06 005a8bb0  unit: RBX::ScriptContext  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8bb0
//
// 005a8bb0  56                   push esi
// 005a8bb1  8b742408             mov esi, dword ptr [esp + 8]
// 005a8bb5  57                   push edi
// 005a8bb6  6a00                 push 0
// 005a8bb8  6a02                 push 2
// 005a8bba  56                   push esi
// 005a8bbb  e8008b0600           call 0x6116c0
// 005a8bc0  8bf8                 mov edi, eax
// 005a8bc2  a1dcb19500           mov eax, dword ptr [0x95b1dc]
// 005a8bc7  50                   push eax
// 005a8bc8  6a01                 push 1
// 005a8bca  56                   push esi
// 005a8bcb  e8e0890600           call 0x6115b0
// 005a8bd0  56                   push esi
// 005a8bd1  57                   push edi
// 005a8bd2  50                   push eax
// 005a8bd3  e898630700           call 0x61ef70
// 005a8bd8  83c424               add esp, 0x24
// 005a8bdb  5f                   pop edi
// 005a8bdc  33c0                 xor eax, eax
// 005a8bde  5e                   pop esi
// 005a8bdf  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000005@@YAHH@Z)

namespace ns_ROCX000005 {
extern "C" int __cdecl sub_5BF350(int, int, int);
extern "C" int __cdecl sub_5BF240(int, int, int);
extern "C" int __cdecl sub_56C740(int, int, int);

extern int dword_8ABE80;

int __cdecl sub_535140(int a)
{
    int v1 = sub_5BF350(a, 2, 0);
    int v2 = sub_5BF240(a, 1, dword_8ABE80);
    sub_56C740(v2, v1, a);
    return 0;
}
}
