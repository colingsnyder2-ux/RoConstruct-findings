// roc 2010-06 0060cbb0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060cbb0
//
// 0060cbb0  56                   push esi
// 0060cbb1  8b742408             mov esi, dword ptr [esp + 8]
// 0060cbb5  57                   push edi
// 0060cbb6  6a00                 push 0
// 0060cbb8  6a02                 push 2
// 0060cbba  56                   push esi
// 0060cbbb  e860631100           call 0x722f20
// 0060cbc0  8bf8                 mov edi, eax
// 0060cbc2  a16c2abe00           mov eax, dword ptr [0xbe2a6c]
// 0060cbc7  50                   push eax
// 0060cbc8  6a01                 push 1
// 0060cbca  56                   push esi
// 0060cbcb  e840621100           call 0x722e10
// 0060cbd0  56                   push esi
// 0060cbd1  57                   push edi
// 0060cbd2  50                   push eax
// 0060cbd3  e8c8bf1100           call 0x728ba0
// 0060cbd8  83c424               add esp, 0x24
// 0060cbdb  5f                   pop edi
// 0060cbdc  33c0                 xor eax, eax
// 0060cbde  5e                   pop esi
// 0060cbdf  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX00000e@@YAHH@Z)

namespace ns_ROCX00000e {
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
