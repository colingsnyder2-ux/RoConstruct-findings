// roc 2009-06 00634480  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634480
//
// 00634480  56                   push esi
// 00634481  8b742408             mov esi, dword ptr [esp + 8]
// 00634485  57                   push edi
// 00634486  6a00                 push 0
// 00634488  6a02                 push 2
// 0063448a  56                   push esi
// 0063448b  e830680800           call 0x6bacc0
// 00634490  8bf8                 mov edi, eax
// 00634492  a1f02aa200           mov eax, dword ptr [0xa22af0]
// 00634497  50                   push eax
// 00634498  6a01                 push 1
// 0063449a  56                   push esi
// 0063449b  e810670800           call 0x6babb0
// 006344a0  56                   push esi
// 006344a1  57                   push edi
// 006344a2  50                   push eax
// 006344a3  e8d8bd0800           call 0x6c0280
// 006344a8  83c424               add esp, 0x24
// 006344ab  5f                   pop edi
// 006344ac  33c0                 xor eax, eax
// 006344ae  5e                   pop esi
// 006344af  c3                   ret 
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
