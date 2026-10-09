// roc 2010-06 0060c8a0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c8a0
//
// 0060c8a0  56                   push esi
// 0060c8a1  8b742408             mov esi, dword ptr [esp + 8]
// 0060c8a5  57                   push edi
// 0060c8a6  6a00                 push 0
// 0060c8a8  6a02                 push 2
// 0060c8aa  56                   push esi
// 0060c8ab  e870661100           call 0x722f20
// 0060c8b0  8bf8                 mov edi, eax
// 0060c8b2  a1582abe00           mov eax, dword ptr [0xbe2a58]
// 0060c8b7  50                   push eax
// 0060c8b8  6a01                 push 1
// 0060c8ba  56                   push esi
// 0060c8bb  e850651100           call 0x722e10
// 0060c8c0  56                   push esi
// 0060c8c1  57                   push edi
// 0060c8c2  50                   push eax
// 0060c8c3  e8d8c21100           call 0x728ba0
// 0060c8c8  83c424               add esp, 0x24
// 0060c8cb  5f                   pop edi
// 0060c8cc  33c0                 xor eax, eax
// 0060c8ce  5e                   pop esi
// 0060c8cf  c3                   ret 
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
