// roc 2009-12 006a15f0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a15f0
//
// 006a15f0  56                   push esi
// 006a15f1  8b742408             mov esi, dword ptr [esp + 8]
// 006a15f5  57                   push edi
// 006a15f6  6a00                 push 0
// 006a15f8  6a02                 push 2
// 006a15fa  56                   push esi
// 006a15fb  e870910e00           call 0x78a770
// 006a1600  8bf8                 mov edi, eax
// 006a1602  a1742bb600           mov eax, dword ptr [0xb62b74]
// 006a1607  50                   push eax
// 006a1608  6a01                 push 1
// 006a160a  56                   push esi
// 006a160b  e850900e00           call 0x78a660
// 006a1610  56                   push esi
// 006a1611  57                   push edi
// 006a1612  50                   push eax
// 006a1613  e8a83c0f00           call 0x7952c0
// 006a1618  83c424               add esp, 0x24
// 006a161b  5f                   pop edi
// 006a161c  33c0                 xor eax, eax
// 006a161e  5e                   pop esi
// 006a161f  c3                   ret 
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
