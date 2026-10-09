// roc 2012-06 006a3a40  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3a40
//
// 006a3a40  56                   push esi
// 006a3a41  8b742408             mov esi, dword ptr [esp + 8]
// 006a3a45  57                   push edi
// 006a3a46  6a00                 push 0
// 006a3a48  6a02                 push 2
// 006a3a4a  56                   push esi
// 006a3a4b  e8d0fe1800           call 0x833920
// 006a3a50  8bf8                 mov edi, eax
// 006a3a52  a1c013de00           mov eax, dword ptr [0xde13c0]
// 006a3a57  50                   push eax
// 006a3a58  6a01                 push 1
// 006a3a5a  56                   push esi
// 006a3a5b  e8b0fd1800           call 0x833810
// 006a3a60  56                   push esi
// 006a3a61  57                   push edi
// 006a3a62  50                   push eax
// 006a3a63  e8786c1900           call 0x83a6e0
// 006a3a68  83c424               add esp, 0x24
// 006a3a6b  5f                   pop edi
// 006a3a6c  33c0                 xor eax, eax
// 006a3a6e  5e                   pop esi
// 006a3a6f  c3                   ret 
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
