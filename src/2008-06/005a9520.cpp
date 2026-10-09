// roc 2008-06 005a9520  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9520
//
// 005a9520  56                   push esi
// 005a9521  8b742408             mov esi, dword ptr [esp + 8]
// 005a9525  57                   push edi
// 005a9526  6a00                 push 0
// 005a9528  6a02                 push 2
// 005a952a  56                   push esi
// 005a952b  e890810600           call 0x6116c0
// 005a9530  8bf8                 mov edi, eax
// 005a9532  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 005a9537  50                   push eax
// 005a9538  6a01                 push 1
// 005a953a  56                   push esi
// 005a953b  e870800600           call 0x6115b0
// 005a9540  56                   push esi
// 005a9541  57                   push edi
// 005a9542  50                   push eax
// 005a9543  e8b8340700           call 0x61ca00
// 005a9548  83c424               add esp, 0x24
// 005a954b  5f                   pop edi
// 005a954c  33c0                 xor eax, eax
// 005a954e  5e                   pop esi
// 005a954f  c3                   ret 
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
