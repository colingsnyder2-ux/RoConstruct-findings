// roc 2009-12 006a1050  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1050
//
// 006a1050  56                   push esi
// 006a1051  8b742408             mov esi, dword ptr [esp + 8]
// 006a1055  57                   push edi
// 006a1056  6a00                 push 0
// 006a1058  6a02                 push 2
// 006a105a  56                   push esi
// 006a105b  e810970e00           call 0x78a770
// 006a1060  8bf8                 mov edi, eax
// 006a1062  a1602bb600           mov eax, dword ptr [0xb62b60]
// 006a1067  50                   push eax
// 006a1068  6a01                 push 1
// 006a106a  56                   push esi
// 006a106b  e8f0950e00           call 0x78a660
// 006a1070  56                   push esi
// 006a1071  57                   push edi
// 006a1072  50                   push eax
// 006a1073  e878f70e00           call 0x7907f0
// 006a1078  83c424               add esp, 0x24
// 006a107b  5f                   pop edi
// 006a107c  33c0                 xor eax, eax
// 006a107e  5e                   pop esi
// 006a107f  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000012@@YAHH@Z)

namespace ns_ROCX000012 {
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
