// roc 2011-06 006198c0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006198c0
//
// 006198c0  56                   push esi
// 006198c1  8b742408             mov esi, dword ptr [esp + 8]
// 006198c5  57                   push edi
// 006198c6  6a00                 push 0
// 006198c8  6a02                 push 2
// 006198ca  56                   push esi
// 006198cb  e8c0a81400           call 0x764190
// 006198d0  8bf8                 mov edi, eax
// 006198d2  a1c4efc800           mov eax, dword ptr [0xc8efc4]
// 006198d7  50                   push eax
// 006198d8  6a01                 push 1
// 006198da  56                   push esi
// 006198db  e8a0a71400           call 0x764080
// 006198e0  56                   push esi
// 006198e1  57                   push edi
// 006198e2  50                   push eax
// 006198e3  e838130100           call 0x62ac20
// 006198e8  83c424               add esp, 0x24
// 006198eb  5f                   pop edi
// 006198ec  33c0                 xor eax, eax
// 006198ee  5e                   pop esi
// 006198ef  c3                   ret 
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
