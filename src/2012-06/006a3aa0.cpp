// roc 2012-06 006a3aa0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3aa0
//
// 006a3aa0  56                   push esi
// 006a3aa1  8b742408             mov esi, dword ptr [esp + 8]
// 006a3aa5  57                   push edi
// 006a3aa6  6a00                 push 0
// 006a3aa8  6a02                 push 2
// 006a3aaa  56                   push esi
// 006a3aab  e870fe1800           call 0x833920
// 006a3ab0  8bf8                 mov edi, eax
// 006a3ab2  a1c413de00           mov eax, dword ptr [0xde13c4]
// 006a3ab7  50                   push eax
// 006a3ab8  6a01                 push 1
// 006a3aba  56                   push esi
// 006a3abb  e850fd1800           call 0x833810
// 006a3ac0  56                   push esi
// 006a3ac1  57                   push edi
// 006a3ac2  50                   push eax
// 006a3ac3  e8186c1900           call 0x83a6e0
// 006a3ac8  83c424               add esp, 0x24
// 006a3acb  5f                   pop edi
// 006a3acc  33c0                 xor eax, eax
// 006a3ace  5e                   pop esi
// 006a3acf  c3                   ret 
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
