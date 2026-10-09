// roc 2009-12 006a0ca0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0ca0
//
// 006a0ca0  56                   push esi
// 006a0ca1  8b742408             mov esi, dword ptr [esp + 8]
// 006a0ca5  57                   push edi
// 006a0ca6  6a00                 push 0
// 006a0ca8  6a02                 push 2
// 006a0caa  56                   push esi
// 006a0cab  e8c09a0e00           call 0x78a770
// 006a0cb0  8bf8                 mov edi, eax
// 006a0cb2  a1402bb600           mov eax, dword ptr [0xb62b40]
// 006a0cb7  50                   push eax
// 006a0cb8  6a01                 push 1
// 006a0cba  56                   push esi
// 006a0cbb  e8a0990e00           call 0x78a660
// 006a0cc0  56                   push esi
// 006a0cc1  57                   push edi
// 006a0cc2  50                   push eax
// 006a0cc3  e828fb0e00           call 0x7907f0
// 006a0cc8  83c424               add esp, 0x24
// 006a0ccb  5f                   pop edi
// 006a0ccc  33c0                 xor eax, eax
// 006a0cce  5e                   pop esi
// 006a0ccf  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000012@@YAHH@Z)

namespace ns_ROCX000012 {
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
