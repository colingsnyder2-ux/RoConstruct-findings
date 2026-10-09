// roc 2009-06 00634590  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634590
//
// 00634590  56                   push esi
// 00634591  8b742408             mov esi, dword ptr [esp + 8]
// 00634595  57                   push edi
// 00634596  6a00                 push 0
// 00634598  6a02                 push 2
// 0063459a  56                   push esi
// 0063459b  e820670800           call 0x6bacc0
// 006345a0  8bf8                 mov edi, eax
// 006345a2  a1f42aa200           mov eax, dword ptr [0xa22af4]
// 006345a7  50                   push eax
// 006345a8  6a01                 push 1
// 006345aa  56                   push esi
// 006345ab  e800660800           call 0x6babb0
// 006345b0  56                   push esi
// 006345b1  57                   push edi
// 006345b2  50                   push eax
// 006345b3  e8c8bc0800           call 0x6c0280
// 006345b8  83c424               add esp, 0x24
// 006345bb  5f                   pop edi
// 006345bc  33c0                 xor eax, eax
// 006345be  5e                   pop esi
// 006345bf  c3                   ret 
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
