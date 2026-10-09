// roc 2012-06 006a3e60  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3e60
//
// 006a3e60  56                   push esi
// 006a3e61  8b742408             mov esi, dword ptr [esp + 8]
// 006a3e65  57                   push edi
// 006a3e66  6a00                 push 0
// 006a3e68  6a02                 push 2
// 006a3e6a  56                   push esi
// 006a3e6b  e8b0fa1800           call 0x833920
// 006a3e70  8bf8                 mov edi, eax
// 006a3e72  a1e813de00           mov eax, dword ptr [0xde13e8]
// 006a3e77  50                   push eax
// 006a3e78  6a01                 push 1
// 006a3e7a  56                   push esi
// 006a3e7b  e890f91800           call 0x833810
// 006a3e80  56                   push esi
// 006a3e81  57                   push edi
// 006a3e82  50                   push eax
// 006a3e83  e858681900           call 0x83a6e0
// 006a3e88  83c424               add esp, 0x24
// 006a3e8b  5f                   pop edi
// 006a3e8c  33c0                 xor eax, eax
// 006a3e8e  5e                   pop esi
// 006a3e8f  c3                   ret 
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
