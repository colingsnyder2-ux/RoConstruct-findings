// roc 2009-06 00634d70  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634d70
//
// 00634d70  56                   push esi
// 00634d71  8b742408             mov esi, dword ptr [esp + 8]
// 00634d75  57                   push edi
// 00634d76  6a00                 push 0
// 00634d78  6a02                 push 2
// 00634d7a  56                   push esi
// 00634d7b  e8405f0800           call 0x6bacc0
// 00634d80  8bf8                 mov edi, eax
// 00634d82  a1082ba200           mov eax, dword ptr [0xa22b08]
// 00634d87  50                   push eax
// 00634d88  6a01                 push 1
// 00634d8a  56                   push esi
// 00634d8b  e8205e0800           call 0x6babb0
// 00634d90  56                   push esi
// 00634d91  57                   push edi
// 00634d92  50                   push eax
// 00634d93  e808b20800           call 0x6bffa0
// 00634d98  83c424               add esp, 0x24
// 00634d9b  5f                   pop edi
// 00634d9c  33c0                 xor eax, eax
// 00634d9e  5e                   pop esi
// 00634d9f  c3                   ret 
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
