// roc 2012-06 006a3c20  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3c20
//
// 006a3c20  56                   push esi
// 006a3c21  8b742408             mov esi, dword ptr [esp + 8]
// 006a3c25  57                   push edi
// 006a3c26  6a00                 push 0
// 006a3c28  6a02                 push 2
// 006a3c2a  56                   push esi
// 006a3c2b  e8f0fc1800           call 0x833920
// 006a3c30  8bf8                 mov edi, eax
// 006a3c32  a1b013de00           mov eax, dword ptr [0xde13b0]
// 006a3c37  50                   push eax
// 006a3c38  6a01                 push 1
// 006a3c3a  56                   push esi
// 006a3c3b  e8d0fb1800           call 0x833810
// 006a3c40  56                   push esi
// 006a3c41  57                   push edi
// 006a3c42  50                   push eax
// 006a3c43  e8986a1900           call 0x83a6e0
// 006a3c48  83c424               add esp, 0x24
// 006a3c4b  5f                   pop edi
// 006a3c4c  33c0                 xor eax, eax
// 006a3c4e  5e                   pop esi
// 006a3c4f  c3                   ret 
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
