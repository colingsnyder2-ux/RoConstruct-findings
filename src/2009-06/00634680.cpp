// roc 2009-06 00634680  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634680
//
// 00634680  56                   push esi
// 00634681  8b742408             mov esi, dword ptr [esp + 8]
// 00634685  57                   push edi
// 00634686  6a00                 push 0
// 00634688  6a02                 push 2
// 0063468a  56                   push esi
// 0063468b  e830660800           call 0x6bacc0
// 00634690  8bf8                 mov edi, eax
// 00634692  a11c2ba200           mov eax, dword ptr [0xa22b1c]
// 00634697  50                   push eax
// 00634698  6a01                 push 1
// 0063469a  56                   push esi
// 0063469b  e810650800           call 0x6babb0
// 006346a0  56                   push esi
// 006346a1  57                   push edi
// 006346a2  50                   push eax
// 006346a3  e8d8bb0800           call 0x6c0280
// 006346a8  83c424               add esp, 0x24
// 006346ab  5f                   pop edi
// 006346ac  33c0                 xor eax, eax
// 006346ae  5e                   pop esi
// 006346af  c3                   ret 
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
