// roc 2011-06 006195c0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006195c0
//
// 006195c0  56                   push esi
// 006195c1  8b742408             mov esi, dword ptr [esp + 8]
// 006195c5  57                   push edi
// 006195c6  6a00                 push 0
// 006195c8  6a02                 push 2
// 006195ca  56                   push esi
// 006195cb  e8c0ab1400           call 0x764190
// 006195d0  8bf8                 mov edi, eax
// 006195d2  a10cf0c800           mov eax, dword ptr [0xc8f00c]
// 006195d7  50                   push eax
// 006195d8  6a01                 push 1
// 006195da  56                   push esi
// 006195db  e8a0aa1400           call 0x764080
// 006195e0  56                   push esi
// 006195e1  57                   push edi
// 006195e2  50                   push eax
// 006195e3  e838160100           call 0x62ac20
// 006195e8  83c424               add esp, 0x24
// 006195eb  5f                   pop edi
// 006195ec  33c0                 xor eax, eax
// 006195ee  5e                   pop esi
// 006195ef  c3                   ret 
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
