// roc 2011-06 00618390  unit: RBX::ScriptContext  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00618390
//
// 00618390  56                   push esi
// 00618391  8b742408             mov esi, dword ptr [esp + 8]
// 00618395  57                   push edi
// 00618396  6a00                 push 0
// 00618398  6a02                 push 2
// 0061839a  56                   push esi
// 0061839b  e8f0bd1400           call 0x764190
// 006183a0  8bf8                 mov edi, eax
// 006183a2  a100f0c800           mov eax, dword ptr [0xc8f000]
// 006183a7  50                   push eax
// 006183a8  6a01                 push 1
// 006183aa  56                   push esi
// 006183ab  e8d0bc1400           call 0x764080
// 006183b0  56                   push esi
// 006183b1  57                   push edi
// 006183b2  50                   push eax
// 006183b3  e8988c1500           call 0x771050
// 006183b8  83c424               add esp, 0x24
// 006183bb  5f                   pop edi
// 006183bc  33c0                 xor eax, eax
// 006183be  5e                   pop esi
// 006183bf  c3                   ret 
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
