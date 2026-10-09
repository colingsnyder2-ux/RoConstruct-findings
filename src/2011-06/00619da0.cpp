// roc 2011-06 00619da0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619da0
//
// 00619da0  56                   push esi
// 00619da1  8b742408             mov esi, dword ptr [esp + 8]
// 00619da5  57                   push edi
// 00619da6  6a00                 push 0
// 00619da8  6a02                 push 2
// 00619daa  56                   push esi
// 00619dab  e8e0a31400           call 0x764190
// 00619db0  8bf8                 mov edi, eax
// 00619db2  a1f8efc800           mov eax, dword ptr [0xc8eff8]
// 00619db7  50                   push eax
// 00619db8  6a01                 push 1
// 00619dba  56                   push esi
// 00619dbb  e8c0a21400           call 0x764080
// 00619dc0  56                   push esi
// 00619dc1  57                   push edi
// 00619dc2  50                   push eax
// 00619dc3  e838711500           call 0x770f00
// 00619dc8  83c424               add esp, 0x24
// 00619dcb  5f                   pop edi
// 00619dcc  33c0                 xor eax, eax
// 00619dce  5e                   pop esi
// 00619dcf  c3                   ret 
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
