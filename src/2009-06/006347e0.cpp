// roc 2009-06 006347e0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006347e0
//
// 006347e0  56                   push esi
// 006347e1  8b742408             mov esi, dword ptr [esp + 8]
// 006347e5  57                   push edi
// 006347e6  6a00                 push 0
// 006347e8  6a02                 push 2
// 006347ea  56                   push esi
// 006347eb  e8d0640800           call 0x6bacc0
// 006347f0  8bf8                 mov edi, eax
// 006347f2  a1182ba200           mov eax, dword ptr [0xa22b18]
// 006347f7  50                   push eax
// 006347f8  6a01                 push 1
// 006347fa  56                   push esi
// 006347fb  e8b0630800           call 0x6babb0
// 00634800  56                   push esi
// 00634801  57                   push edi
// 00634802  50                   push eax
// 00634803  e878ba0800           call 0x6c0280
// 00634808  83c424               add esp, 0x24
// 0063480b  5f                   pop edi
// 0063480c  33c0                 xor eax, eax
// 0063480e  5e                   pop esi
// 0063480f  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000004@@YAHH@Z)

namespace ns_ROCX000004 {
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
