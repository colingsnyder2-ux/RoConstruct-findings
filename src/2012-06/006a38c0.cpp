// roc 2012-06 006a38c0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a38c0
//
// 006a38c0  56                   push esi
// 006a38c1  8b742408             mov esi, dword ptr [esp + 8]
// 006a38c5  57                   push edi
// 006a38c6  6a00                 push 0
// 006a38c8  6a02                 push 2
// 006a38ca  56                   push esi
// 006a38cb  e850001900           call 0x833920
// 006a38d0  8bf8                 mov edi, eax
// 006a38d2  a10414de00           mov eax, dword ptr [0xde1404]
// 006a38d7  50                   push eax
// 006a38d8  6a01                 push 1
// 006a38da  56                   push esi
// 006a38db  e830ff1800           call 0x833810
// 006a38e0  56                   push esi
// 006a38e1  57                   push edi
// 006a38e2  50                   push eax
// 006a38e3  e8f86d1900           call 0x83a6e0
// 006a38e8  83c424               add esp, 0x24
// 006a38eb  5f                   pop edi
// 006a38ec  33c0                 xor eax, eax
// 006a38ee  5e                   pop esi
// 006a38ef  c3                   ret 
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
