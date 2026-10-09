// roc 2010-06 0060cc70  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060cc70
//
// 0060cc70  56                   push esi
// 0060cc71  8b742408             mov esi, dword ptr [esp + 8]
// 0060cc75  57                   push edi
// 0060cc76  6a00                 push 0
// 0060cc78  6a02                 push 2
// 0060cc7a  56                   push esi
// 0060cc7b  e8a0621100           call 0x722f20
// 0060cc80  8bf8                 mov edi, eax
// 0060cc82  a15c2abe00           mov eax, dword ptr [0xbe2a5c]
// 0060cc87  50                   push eax
// 0060cc88  6a01                 push 1
// 0060cc8a  56                   push esi
// 0060cc8b  e880611100           call 0x722e10
// 0060cc90  56                   push esi
// 0060cc91  57                   push edi
// 0060cc92  50                   push eax
// 0060cc93  e808bf1100           call 0x728ba0
// 0060cc98  83c424               add esp, 0x24
// 0060cc9b  5f                   pop edi
// 0060cc9c  33c0                 xor eax, eax
// 0060cc9e  5e                   pop esi
// 0060cc9f  c3                   ret 
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
