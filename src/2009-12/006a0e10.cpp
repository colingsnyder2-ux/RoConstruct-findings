// roc 2009-12 006a0e10  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0e10
//
// 006a0e10  56                   push esi
// 006a0e11  8b742408             mov esi, dword ptr [esp + 8]
// 006a0e15  57                   push edi
// 006a0e16  6a00                 push 0
// 006a0e18  6a02                 push 2
// 006a0e1a  56                   push esi
// 006a0e1b  e850990e00           call 0x78a770
// 006a0e20  8bf8                 mov edi, eax
// 006a0e22  a13c2bb600           mov eax, dword ptr [0xb62b3c]
// 006a0e27  50                   push eax
// 006a0e28  6a01                 push 1
// 006a0e2a  56                   push esi
// 006a0e2b  e830980e00           call 0x78a660
// 006a0e30  56                   push esi
// 006a0e31  57                   push edi
// 006a0e32  50                   push eax
// 006a0e33  e8b8f90e00           call 0x7907f0
// 006a0e38  83c424               add esp, 0x24
// 006a0e3b  5f                   pop edi
// 006a0e3c  33c0                 xor eax, eax
// 006a0e3e  5e                   pop esi
// 006a0e3f  c3                   ret 
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
