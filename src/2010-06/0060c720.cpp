// roc 2010-06 0060c720  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c720
//
// 0060c720  56                   push esi
// 0060c721  8b742408             mov esi, dword ptr [esp + 8]
// 0060c725  57                   push edi
// 0060c726  6a00                 push 0
// 0060c728  6a02                 push 2
// 0060c72a  56                   push esi
// 0060c72b  e8f0671100           call 0x722f20
// 0060c730  8bf8                 mov edi, eax
// 0060c732  a1502abe00           mov eax, dword ptr [0xbe2a50]
// 0060c737  50                   push eax
// 0060c738  6a01                 push 1
// 0060c73a  56                   push esi
// 0060c73b  e8d0661100           call 0x722e10
// 0060c740  56                   push esi
// 0060c741  57                   push edi
// 0060c742  50                   push eax
// 0060c743  e858c41100           call 0x728ba0
// 0060c748  83c424               add esp, 0x24
// 0060c74b  5f                   pop edi
// 0060c74c  33c0                 xor eax, eax
// 0060c74e  5e                   pop esi
// 0060c74f  c3                   ret 
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
