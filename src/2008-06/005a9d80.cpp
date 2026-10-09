// roc 2008-06 005a9d80  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9d80
//
// 005a9d80  56                   push esi
// 005a9d81  8b742408             mov esi, dword ptr [esp + 8]
// 005a9d85  57                   push edi
// 005a9d86  6a00                 push 0
// 005a9d88  6a02                 push 2
// 005a9d8a  56                   push esi
// 005a9d8b  e830790600           call 0x6116c0
// 005a9d90  8bf8                 mov edi, eax
// 005a9d92  a1e4b19500           mov eax, dword ptr [0x95b1e4]
// 005a9d97  50                   push eax
// 005a9d98  6a01                 push 1
// 005a9d9a  56                   push esi
// 005a9d9b  e810780600           call 0x6115b0
// 005a9da0  56                   push esi
// 005a9da1  57                   push edi
// 005a9da2  50                   push eax
// 005a9da3  e878540700           call 0x61f220
// 005a9da8  83c424               add esp, 0x24
// 005a9dab  5f                   pop edi
// 005a9dac  33c0                 xor eax, eax
// 005a9dae  5e                   pop esi
// 005a9daf  c3                   ret 
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
