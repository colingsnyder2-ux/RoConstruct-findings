// roc 2012-06 006a4110  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a4110
//
// 006a4110  56                   push esi
// 006a4111  8b742408             mov esi, dword ptr [esp + 8]
// 006a4115  57                   push edi
// 006a4116  6a00                 push 0
// 006a4118  6a02                 push 2
// 006a411a  56                   push esi
// 006a411b  e800f81800           call 0x833920
// 006a4120  8bf8                 mov edi, eax
// 006a4122  a1f413de00           mov eax, dword ptr [0xde13f4]
// 006a4127  50                   push eax
// 006a4128  6a01                 push 1
// 006a412a  56                   push esi
// 006a412b  e8e0f61800           call 0x833810
// 006a4130  56                   push esi
// 006a4131  57                   push edi
// 006a4132  50                   push eax
// 006a4133  e878d21900           call 0x8413b0
// 006a4138  83c424               add esp, 0x24
// 006a413b  5f                   pop edi
// 006a413c  33c0                 xor eax, eax
// 006a413e  5e                   pop esi
// 006a413f  c3                   ret 
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
