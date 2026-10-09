// roc 2009-06 00634e80  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634e80
//
// 00634e80  56                   push esi
// 00634e81  8b742408             mov esi, dword ptr [esp + 8]
// 00634e85  57                   push edi
// 00634e86  6a00                 push 0
// 00634e88  6a02                 push 2
// 00634e8a  56                   push esi
// 00634e8b  e8305e0800           call 0x6bacc0
// 00634e90  8bf8                 mov edi, eax
// 00634e92  a10c2ba200           mov eax, dword ptr [0xa22b0c]
// 00634e97  50                   push eax
// 00634e98  6a01                 push 1
// 00634e9a  56                   push esi
// 00634e9b  e8105d0800           call 0x6babb0
// 00634ea0  56                   push esi
// 00634ea1  57                   push edi
// 00634ea2  50                   push eax
// 00634ea3  e828b10800           call 0x6bffd0
// 00634ea8  83c424               add esp, 0x24
// 00634eab  5f                   pop edi
// 00634eac  33c0                 xor eax, eax
// 00634eae  5e                   pop esi
// 00634eaf  c3                   ret 
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
