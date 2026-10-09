// roc 2008-06 005a98e0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a98e0
//
// 005a98e0  56                   push esi
// 005a98e1  8b742408             mov esi, dword ptr [esp + 8]
// 005a98e5  57                   push edi
// 005a98e6  6a00                 push 0
// 005a98e8  6a02                 push 2
// 005a98ea  56                   push esi
// 005a98eb  e8d07d0600           call 0x6116c0
// 005a98f0  8bf8                 mov edi, eax
// 005a98f2  a1bcb19500           mov eax, dword ptr [0x95b1bc]
// 005a98f7  50                   push eax
// 005a98f8  6a01                 push 1
// 005a98fa  56                   push esi
// 005a98fb  e8b07c0600           call 0x6115b0
// 005a9900  56                   push esi
// 005a9901  57                   push edi
// 005a9902  50                   push eax
// 005a9903  e8f8300700           call 0x61ca00
// 005a9908  83c424               add esp, 0x24
// 005a990b  5f                   pop edi
// 005a990c  33c0                 xor eax, eax
// 005a990e  5e                   pop esi
// 005a990f  c3                   ret 
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
