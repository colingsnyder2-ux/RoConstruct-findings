// roc 2009-06 00634360  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634360
//
// 00634360  56                   push esi
// 00634361  8b742408             mov esi, dword ptr [esp + 8]
// 00634365  57                   push edi
// 00634366  6a00                 push 0
// 00634368  6a02                 push 2
// 0063436a  56                   push esi
// 0063436b  e850690800           call 0x6bacc0
// 00634370  8bf8                 mov edi, eax
// 00634372  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 00634377  50                   push eax
// 00634378  6a01                 push 1
// 0063437a  56                   push esi
// 0063437b  e830680800           call 0x6babb0
// 00634380  56                   push esi
// 00634381  57                   push edi
// 00634382  50                   push eax
// 00634383  e8f8be0800           call 0x6c0280
// 00634388  83c424               add esp, 0x24
// 0063438b  5f                   pop edi
// 0063438c  33c0                 xor eax, eax
// 0063438e  5e                   pop esi
// 0063438f  c3                   ret 
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
