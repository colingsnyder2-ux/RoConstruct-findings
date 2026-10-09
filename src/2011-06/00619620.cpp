// roc 2011-06 00619620  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619620
//
// 00619620  56                   push esi
// 00619621  8b742408             mov esi, dword ptr [esp + 8]
// 00619625  57                   push edi
// 00619626  6a00                 push 0
// 00619628  6a02                 push 2
// 0061962a  56                   push esi
// 0061962b  e860ab1400           call 0x764190
// 00619630  8bf8                 mov edi, eax
// 00619632  a15cd5c400           mov eax, dword ptr [0xc4d55c]
// 00619637  50                   push eax
// 00619638  6a01                 push 1
// 0061963a  56                   push esi
// 0061963b  e840aa1400           call 0x764080
// 00619640  56                   push esi
// 00619641  57                   push edi
// 00619642  50                   push eax
// 00619643  e8d8150100           call 0x62ac20
// 00619648  83c424               add esp, 0x24
// 0061964b  5f                   pop edi
// 0061964c  33c0                 xor eax, eax
// 0061964e  5e                   pop esi
// 0061964f  c3                   ret 
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
