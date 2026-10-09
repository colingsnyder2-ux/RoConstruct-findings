// roc 2010-06 0060cf80  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060cf80
//
// 0060cf80  56                   push esi
// 0060cf81  8b742408             mov esi, dword ptr [esp + 8]
// 0060cf85  57                   push edi
// 0060cf86  6a00                 push 0
// 0060cf88  6a02                 push 2
// 0060cf8a  56                   push esi
// 0060cf8b  e8905f1100           call 0x722f20
// 0060cf90  8bf8                 mov edi, eax
// 0060cf92  a17c2abe00           mov eax, dword ptr [0xbe2a7c]
// 0060cf97  50                   push eax
// 0060cf98  6a01                 push 1
// 0060cf9a  56                   push esi
// 0060cf9b  e8705e1100           call 0x722e10
// 0060cfa0  56                   push esi
// 0060cfa1  57                   push edi
// 0060cfa2  50                   push eax
// 0060cfa3  e8680a1200           call 0x72da10
// 0060cfa8  83c424               add esp, 0x24
// 0060cfab  5f                   pop edi
// 0060cfac  33c0                 xor eax, eax
// 0060cfae  5e                   pop esi
// 0060cfaf  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX00000e@@YAHH@Z)

namespace ns_ROCX00000e {
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
