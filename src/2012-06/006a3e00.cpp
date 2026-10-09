// roc 2012-06 006a3e00  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3e00
//
// 006a3e00  56                   push esi
// 006a3e01  8b742408             mov esi, dword ptr [esp + 8]
// 006a3e05  57                   push edi
// 006a3e06  6a00                 push 0
// 006a3e08  6a02                 push 2
// 006a3e0a  56                   push esi
// 006a3e0b  e810fb1800           call 0x833920
// 006a3e10  8bf8                 mov edi, eax
// 006a3e12  a1d013de00           mov eax, dword ptr [0xde13d0]
// 006a3e17  50                   push eax
// 006a3e18  6a01                 push 1
// 006a3e1a  56                   push esi
// 006a3e1b  e8f0f91800           call 0x833810
// 006a3e20  56                   push esi
// 006a3e21  57                   push edi
// 006a3e22  50                   push eax
// 006a3e23  e8b8681900           call 0x83a6e0
// 006a3e28  83c424               add esp, 0x24
// 006a3e2b  5f                   pop edi
// 006a3e2c  33c0                 xor eax, eax
// 006a3e2e  5e                   pop esi
// 006a3e2f  c3                   ret 
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
