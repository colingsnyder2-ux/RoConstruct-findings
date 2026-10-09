// roc 2010-06 0060b060  unit: RBX::ScriptContext  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060b060
//
// 0060b060  56                   push esi
// 0060b061  8b742408             mov esi, dword ptr [esp + 8]
// 0060b065  57                   push edi
// 0060b066  6a00                 push 0
// 0060b068  6a02                 push 2
// 0060b06a  56                   push esi
// 0060b06b  e8b07e1100           call 0x722f20
// 0060b070  8bf8                 mov edi, eax
// 0060b072  a1842abe00           mov eax, dword ptr [0xbe2a84]
// 0060b077  50                   push eax
// 0060b078  6a01                 push 1
// 0060b07a  56                   push esi
// 0060b07b  e8907d1100           call 0x722e10
// 0060b080  56                   push esi
// 0060b081  57                   push edi
// 0060b082  50                   push eax
// 0060b083  e8d82a1200           call 0x72db60
// 0060b088  83c424               add esp, 0x24
// 0060b08b  5f                   pop edi
// 0060b08c  33c0                 xor eax, eax
// 0060b08e  5e                   pop esi
// 0060b08f  c3                   ret 
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
