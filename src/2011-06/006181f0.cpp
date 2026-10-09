// roc 2011-06 006181f0  unit: RBX::ScriptContext  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006181f0
//
// 006181f0  56                   push esi
// 006181f1  8b742408             mov esi, dword ptr [esp + 8]
// 006181f5  57                   push edi
// 006181f6  6a00                 push 0
// 006181f8  6a02                 push 2
// 006181fa  56                   push esi
// 006181fb  e890bf1400           call 0x764190
// 00618200  8bf8                 mov edi, eax
// 00618202  a178e7c800           mov eax, dword ptr [0xc8e778]
// 00618207  50                   push eax
// 00618208  6a01                 push 1
// 0061820a  56                   push esi
// 0061820b  e870be1400           call 0x764080
// 00618210  56                   push esi
// 00618211  57                   push edi
// 00618212  50                   push eax
// 00618213  e8382e1500           call 0x76b050
// 00618218  83c424               add esp, 0x24
// 0061821b  5f                   pop edi
// 0061821c  33c0                 xor eax, eax
// 0061821e  5e                   pop esi
// 0061821f  c3                   ret 
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
