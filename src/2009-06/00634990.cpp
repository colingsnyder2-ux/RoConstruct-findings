// roc 2009-06 00634990  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634990
//
// 00634990  56                   push esi
// 00634991  8b742408             mov esi, dword ptr [esp + 8]
// 00634995  57                   push edi
// 00634996  6a00                 push 0
// 00634998  6a02                 push 2
// 0063499a  56                   push esi
// 0063499b  e820630800           call 0x6bacc0
// 006349a0  8bf8                 mov edi, eax
// 006349a2  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 006349a7  50                   push eax
// 006349a8  6a01                 push 1
// 006349aa  56                   push esi
// 006349ab  e800620800           call 0x6babb0
// 006349b0  56                   push esi
// 006349b1  57                   push edi
// 006349b2  50                   push eax
// 006349b3  e8c8b80800           call 0x6c0280
// 006349b8  83c424               add esp, 0x24
// 006349bb  5f                   pop edi
// 006349bc  33c0                 xor eax, eax
// 006349be  5e                   pop esi
// 006349bf  c3                   ret 
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
