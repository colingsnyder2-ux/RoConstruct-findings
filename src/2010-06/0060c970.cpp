// roc 2010-06 0060c970  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c970
//
// 0060c970  56                   push esi
// 0060c971  8b742408             mov esi, dword ptr [esp + 8]
// 0060c975  57                   push edi
// 0060c976  6a00                 push 0
// 0060c978  6a02                 push 2
// 0060c97a  56                   push esi
// 0060c97b  e8a0651100           call 0x722f20
// 0060c980  8bf8                 mov edi, eax
// 0060c982  a1482abe00           mov eax, dword ptr [0xbe2a48]
// 0060c987  50                   push eax
// 0060c988  6a01                 push 1
// 0060c98a  56                   push esi
// 0060c98b  e880641100           call 0x722e10
// 0060c990  56                   push esi
// 0060c991  57                   push edi
// 0060c992  50                   push eax
// 0060c993  e808c21100           call 0x728ba0
// 0060c998  83c424               add esp, 0x24
// 0060c99b  5f                   pop edi
// 0060c99c  33c0                 xor eax, eax
// 0060c99e  5e                   pop esi
// 0060c99f  c3                   ret 
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
