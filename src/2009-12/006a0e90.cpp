// roc 2009-12 006a0e90  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0e90
//
// 006a0e90  56                   push esi
// 006a0e91  8b742408             mov esi, dword ptr [esp + 8]
// 006a0e95  57                   push edi
// 006a0e96  6a00                 push 0
// 006a0e98  6a02                 push 2
// 006a0e9a  56                   push esi
// 006a0e9b  e8d0980e00           call 0x78a770
// 006a0ea0  8bf8                 mov edi, eax
// 006a0ea2  a1582bb600           mov eax, dword ptr [0xb62b58]
// 006a0ea7  50                   push eax
// 006a0ea8  6a01                 push 1
// 006a0eaa  56                   push esi
// 006a0eab  e8b0970e00           call 0x78a660
// 006a0eb0  56                   push esi
// 006a0eb1  57                   push edi
// 006a0eb2  50                   push eax
// 006a0eb3  e838f90e00           call 0x7907f0
// 006a0eb8  83c424               add esp, 0x24
// 006a0ebb  5f                   pop edi
// 006a0ebc  33c0                 xor eax, eax
// 006a0ebe  5e                   pop esi
// 006a0ebf  c3                   ret 
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
