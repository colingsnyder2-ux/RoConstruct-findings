// roc 2008-06 005a9840  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9840
//
// 005a9840  56                   push esi
// 005a9841  8b742408             mov esi, dword ptr [esp + 8]
// 005a9845  57                   push edi
// 005a9846  6a00                 push 0
// 005a9848  6a02                 push 2
// 005a984a  56                   push esi
// 005a984b  e8707e0600           call 0x6116c0
// 005a9850  8bf8                 mov edi, eax
// 005a9852  a130979400           mov eax, dword ptr [0x949730]
// 005a9857  50                   push eax
// 005a9858  6a01                 push 1
// 005a985a  56                   push esi
// 005a985b  e8507d0600           call 0x6115b0
// 005a9860  56                   push esi
// 005a9861  57                   push edi
// 005a9862  50                   push eax
// 005a9863  e898310700           call 0x61ca00
// 005a9868  83c424               add esp, 0x24
// 005a986b  5f                   pop edi
// 005a986c  33c0                 xor eax, eax
// 005a986e  5e                   pop esi
// 005a986f  c3                   ret 
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
