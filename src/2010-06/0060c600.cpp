// roc 2010-06 0060c600  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c600
//
// 0060c600  56                   push esi
// 0060c601  8b742408             mov esi, dword ptr [esp + 8]
// 0060c605  57                   push edi
// 0060c606  6a00                 push 0
// 0060c608  6a02                 push 2
// 0060c60a  56                   push esi
// 0060c60b  e810691100           call 0x722f20
// 0060c610  8bf8                 mov edi, eax
// 0060c612  a1602abe00           mov eax, dword ptr [0xbe2a60]
// 0060c617  50                   push eax
// 0060c618  6a01                 push 1
// 0060c61a  56                   push esi
// 0060c61b  e8f0671100           call 0x722e10
// 0060c620  56                   push esi
// 0060c621  57                   push edi
// 0060c622  50                   push eax
// 0060c623  e878c51100           call 0x728ba0
// 0060c628  83c424               add esp, 0x24
// 0060c62b  5f                   pop edi
// 0060c62c  33c0                 xor eax, eax
// 0060c62e  5e                   pop esi
// 0060c62f  c3                   ret 
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
