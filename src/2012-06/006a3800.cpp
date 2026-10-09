// roc 2012-06 006a3800  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3800
//
// 006a3800  56                   push esi
// 006a3801  8b742408             mov esi, dword ptr [esp + 8]
// 006a3805  57                   push edi
// 006a3806  6a00                 push 0
// 006a3808  6a02                 push 2
// 006a380a  56                   push esi
// 006a380b  e810011900           call 0x833920
// 006a3810  8bf8                 mov edi, eax
// 006a3812  a1589eda00           mov eax, dword ptr [0xda9e58]
// 006a3817  50                   push eax
// 006a3818  6a01                 push 1
// 006a381a  56                   push esi
// 006a381b  e8f0ff1800           call 0x833810
// 006a3820  56                   push esi
// 006a3821  57                   push edi
// 006a3822  50                   push eax
// 006a3823  e8b86e1900           call 0x83a6e0
// 006a3828  83c424               add esp, 0x24
// 006a382b  5f                   pop edi
// 006a382c  33c0                 xor eax, eax
// 006a382e  5e                   pop esi
// 006a382f  c3                   ret 
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
