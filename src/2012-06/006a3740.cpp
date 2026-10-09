// roc 2012-06 006a3740  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3740
//
// 006a3740  56                   push esi
// 006a3741  8b742408             mov esi, dword ptr [esp + 8]
// 006a3745  57                   push edi
// 006a3746  6a00                 push 0
// 006a3748  6a02                 push 2
// 006a374a  56                   push esi
// 006a374b  e8d0011900           call 0x833920
// 006a3750  8bf8                 mov edi, eax
// 006a3752  a10814de00           mov eax, dword ptr [0xde1408]
// 006a3757  50                   push eax
// 006a3758  6a01                 push 1
// 006a375a  56                   push esi
// 006a375b  e8b0001900           call 0x833810
// 006a3760  56                   push esi
// 006a3761  57                   push edi
// 006a3762  50                   push eax
// 006a3763  e8786f1900           call 0x83a6e0
// 006a3768  83c424               add esp, 0x24
// 006a376b  5f                   pop edi
// 006a376c  33c0                 xor eax, eax
// 006a376e  5e                   pop esi
// 006a376f  c3                   ret 
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
