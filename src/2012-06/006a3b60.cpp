// roc 2012-06 006a3b60  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3b60
//
// 006a3b60  56                   push esi
// 006a3b61  8b742408             mov esi, dword ptr [esp + 8]
// 006a3b65  57                   push edi
// 006a3b66  6a00                 push 0
// 006a3b68  6a02                 push 2
// 006a3b6a  56                   push esi
// 006a3b6b  e8b0fd1800           call 0x833920
// 006a3b70  8bf8                 mov edi, eax
// 006a3b72  a1cc13de00           mov eax, dword ptr [0xde13cc]
// 006a3b77  50                   push eax
// 006a3b78  6a01                 push 1
// 006a3b7a  56                   push esi
// 006a3b7b  e890fc1800           call 0x833810
// 006a3b80  56                   push esi
// 006a3b81  57                   push edi
// 006a3b82  50                   push eax
// 006a3b83  e8586b1900           call 0x83a6e0
// 006a3b88  83c424               add esp, 0x24
// 006a3b8b  5f                   pop edi
// 006a3b8c  33c0                 xor eax, eax
// 006a3b8e  5e                   pop esi
// 006a3b8f  c3                   ret 
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
