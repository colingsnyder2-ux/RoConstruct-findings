// roc 2010-06 0060c560  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c560
//
// 0060c560  56                   push esi
// 0060c561  8b742408             mov esi, dword ptr [esp + 8]
// 0060c565  57                   push edi
// 0060c566  6a00                 push 0
// 0060c568  6a02                 push 2
// 0060c56a  56                   push esi
// 0060c56b  e8b0691100           call 0x722f20
// 0060c570  8bf8                 mov edi, eax
// 0060c572  a18c2abe00           mov eax, dword ptr [0xbe2a8c]
// 0060c577  50                   push eax
// 0060c578  6a01                 push 1
// 0060c57a  56                   push esi
// 0060c57b  e890681100           call 0x722e10
// 0060c580  56                   push esi
// 0060c581  57                   push edi
// 0060c582  50                   push eax
// 0060c583  e818c61100           call 0x728ba0
// 0060c588  83c424               add esp, 0x24
// 0060c58b  5f                   pop edi
// 0060c58c  33c0                 xor eax, eax
// 0060c58e  5e                   pop esi
// 0060c58f  c3                   ret 
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
