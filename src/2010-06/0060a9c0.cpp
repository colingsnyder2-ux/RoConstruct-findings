// roc 2010-06 0060a9c0  unit: RBX::ScriptContext  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060a9c0
//
// 0060a9c0  56                   push esi
// 0060a9c1  8b742408             mov esi, dword ptr [esp + 8]
// 0060a9c5  57                   push edi
// 0060a9c6  6a00                 push 0
// 0060a9c8  6a02                 push 2
// 0060a9ca  56                   push esi
// 0060a9cb  e850851100           call 0x722f20
// 0060a9d0  8bf8                 mov edi, eax
// 0060a9d2  a14c23be00           mov eax, dword ptr [0xbe234c]
// 0060a9d7  50                   push eax
// 0060a9d8  6a01                 push 1
// 0060a9da  56                   push esi
// 0060a9db  e830841100           call 0x722e10
// 0060a9e0  56                   push esi
// 0060a9e1  57                   push edi
// 0060a9e2  50                   push eax
// 0060a9e3  e8b8cb1100           call 0x7275a0
// 0060a9e8  83c424               add esp, 0x24
// 0060a9eb  5f                   pop edi
// 0060a9ec  33c0                 xor eax, eax
// 0060a9ee  5e                   pop esi
// 0060a9ef  c3                   ret 
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
