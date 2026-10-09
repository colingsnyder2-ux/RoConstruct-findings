// roc 2012-06 006a3860  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3860
//
// 006a3860  56                   push esi
// 006a3861  8b742408             mov esi, dword ptr [esp + 8]
// 006a3865  57                   push edi
// 006a3866  6a00                 push 0
// 006a3868  6a02                 push 2
// 006a386a  56                   push esi
// 006a386b  e8b0001900           call 0x833920
// 006a3870  8bf8                 mov edi, eax
// 006a3872  a15c9eda00           mov eax, dword ptr [0xda9e5c]
// 006a3877  50                   push eax
// 006a3878  6a01                 push 1
// 006a387a  56                   push esi
// 006a387b  e890ff1800           call 0x833810
// 006a3880  56                   push esi
// 006a3881  57                   push edi
// 006a3882  50                   push eax
// 006a3883  e8586e1900           call 0x83a6e0
// 006a3888  83c424               add esp, 0x24
// 006a388b  5f                   pop edi
// 006a388c  33c0                 xor eax, eax
// 006a388e  5e                   pop esi
// 006a388f  c3                   ret 
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
