// roc 2012-06 006a39e0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a39e0
//
// 006a39e0  56                   push esi
// 006a39e1  8b742408             mov esi, dword ptr [esp + 8]
// 006a39e5  57                   push edi
// 006a39e6  6a00                 push 0
// 006a39e8  6a02                 push 2
// 006a39ea  56                   push esi
// 006a39eb  e830ff1800           call 0x833920
// 006a39f0  8bf8                 mov edi, eax
// 006a39f2  a1bc13de00           mov eax, dword ptr [0xde13bc]
// 006a39f7  50                   push eax
// 006a39f8  6a01                 push 1
// 006a39fa  56                   push esi
// 006a39fb  e810fe1800           call 0x833810
// 006a3a00  56                   push esi
// 006a3a01  57                   push edi
// 006a3a02  50                   push eax
// 006a3a03  e8d86c1900           call 0x83a6e0
// 006a3a08  83c424               add esp, 0x24
// 006a3a0b  5f                   pop edi
// 006a3a0c  33c0                 xor eax, eax
// 006a3a0e  5e                   pop esi
// 006a3a0f  c3                   ret 
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
