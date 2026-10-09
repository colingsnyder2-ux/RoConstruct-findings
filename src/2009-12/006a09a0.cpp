// roc 2009-12 006a09a0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a09a0
//
// 006a09a0  56                   push esi
// 006a09a1  8b742408             mov esi, dword ptr [esp + 8]
// 006a09a5  57                   push edi
// 006a09a6  6a00                 push 0
// 006a09a8  6a02                 push 2
// 006a09aa  56                   push esi
// 006a09ab  e8c09d0e00           call 0x78a770
// 006a09b0  8bf8                 mov edi, eax
// 006a09b2  a1fc32b500           mov eax, dword ptr [0xb532fc]
// 006a09b7  50                   push eax
// 006a09b8  6a01                 push 1
// 006a09ba  56                   push esi
// 006a09bb  e8a09c0e00           call 0x78a660
// 006a09c0  56                   push esi
// 006a09c1  57                   push edi
// 006a09c2  50                   push eax
// 006a09c3  e828fe0e00           call 0x7907f0
// 006a09c8  83c424               add esp, 0x24
// 006a09cb  5f                   pop edi
// 006a09cc  33c0                 xor eax, eax
// 006a09ce  5e                   pop esi
// 006a09cf  c3                   ret 
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
