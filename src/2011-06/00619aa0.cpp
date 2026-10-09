// roc 2011-06 00619aa0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619aa0
//
// 00619aa0  56                   push esi
// 00619aa1  8b742408             mov esi, dword ptr [esp + 8]
// 00619aa5  57                   push edi
// 00619aa6  6a00                 push 0
// 00619aa8  6a02                 push 2
// 00619aaa  56                   push esi
// 00619aab  e8e0a61400           call 0x764190
// 00619ab0  8bf8                 mov edi, eax
// 00619ab2  a1e8efc800           mov eax, dword ptr [0xc8efe8]
// 00619ab7  50                   push eax
// 00619ab8  6a01                 push 1
// 00619aba  56                   push esi
// 00619abb  e8c0a51400           call 0x764080
// 00619ac0  56                   push esi
// 00619ac1  57                   push edi
// 00619ac2  50                   push eax
// 00619ac3  e858110100           call 0x62ac20
// 00619ac8  83c424               add esp, 0x24
// 00619acb  5f                   pop edi
// 00619acc  33c0                 xor eax, eax
// 00619ace  5e                   pop esi
// 00619acf  c3                   ret 
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
