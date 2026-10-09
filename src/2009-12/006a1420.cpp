// roc 2009-12 006a1420  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1420
//
// 006a1420  56                   push esi
// 006a1421  8b742408             mov esi, dword ptr [esp + 8]
// 006a1425  57                   push edi
// 006a1426  6a00                 push 0
// 006a1428  6a02                 push 2
// 006a142a  56                   push esi
// 006a142b  e840930e00           call 0x78a770
// 006a1430  8bf8                 mov edi, eax
// 006a1432  a1702bb600           mov eax, dword ptr [0xb62b70]
// 006a1437  50                   push eax
// 006a1438  6a01                 push 1
// 006a143a  56                   push esi
// 006a143b  e820920e00           call 0x78a660
// 006a1440  56                   push esi
// 006a1441  57                   push edi
// 006a1442  50                   push eax
// 006a1443  e8483e0f00           call 0x795290
// 006a1448  83c424               add esp, 0x24
// 006a144b  5f                   pop edi
// 006a144c  33c0                 xor eax, eax
// 006a144e  5e                   pop esi
// 006a144f  c3                   ret 
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
