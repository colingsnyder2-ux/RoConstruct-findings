// roc 2010-06 0060d150  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060d150
//
// 0060d150  56                   push esi
// 0060d151  8b742408             mov esi, dword ptr [esp + 8]
// 0060d155  57                   push edi
// 0060d156  6a00                 push 0
// 0060d158  6a02                 push 2
// 0060d15a  56                   push esi
// 0060d15b  e8c05d1100           call 0x722f20
// 0060d160  8bf8                 mov edi, eax
// 0060d162  a1802abe00           mov eax, dword ptr [0xbe2a80]
// 0060d167  50                   push eax
// 0060d168  6a01                 push 1
// 0060d16a  56                   push esi
// 0060d16b  e8a05c1100           call 0x722e10
// 0060d170  56                   push esi
// 0060d171  57                   push edi
// 0060d172  50                   push eax
// 0060d173  e8c8081200           call 0x72da40
// 0060d178  83c424               add esp, 0x24
// 0060d17b  5f                   pop edi
// 0060d17c  33c0                 xor eax, eax
// 0060d17e  5e                   pop esi
// 0060d17f  c3                   ret 
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
