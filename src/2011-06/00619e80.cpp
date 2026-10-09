// roc 2011-06 00619e80  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619e80
//
// 00619e80  56                   push esi
// 00619e81  8b742408             mov esi, dword ptr [esp + 8]
// 00619e85  57                   push edi
// 00619e86  6a00                 push 0
// 00619e88  6a02                 push 2
// 00619e8a  56                   push esi
// 00619e8b  e800a31400           call 0x764190
// 00619e90  8bf8                 mov edi, eax
// 00619e92  a1fcefc800           mov eax, dword ptr [0xc8effc]
// 00619e97  50                   push eax
// 00619e98  6a01                 push 1
// 00619e9a  56                   push esi
// 00619e9b  e8e0a11400           call 0x764080
// 00619ea0  56                   push esi
// 00619ea1  57                   push edi
// 00619ea2  50                   push eax
// 00619ea3  e888701500           call 0x770f30
// 00619ea8  83c424               add esp, 0x24
// 00619eab  5f                   pop edi
// 00619eac  33c0                 xor eax, eax
// 00619eae  5e                   pop esi
// 00619eaf  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000008@@YAHH@Z)

namespace ns_ROCX000008 {
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
