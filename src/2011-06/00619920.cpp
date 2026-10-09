// roc 2011-06 00619920  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619920
//
// 00619920  56                   push esi
// 00619921  8b742408             mov esi, dword ptr [esp + 8]
// 00619925  57                   push edi
// 00619926  6a00                 push 0
// 00619928  6a02                 push 2
// 0061992a  56                   push esi
// 0061992b  e860a81400           call 0x764190
// 00619930  8bf8                 mov edi, eax
// 00619932  a1d4efc800           mov eax, dword ptr [0xc8efd4]
// 00619937  50                   push eax
// 00619938  6a01                 push 1
// 0061993a  56                   push esi
// 0061993b  e840a71400           call 0x764080
// 00619940  56                   push esi
// 00619941  57                   push edi
// 00619942  50                   push eax
// 00619943  e8d8120100           call 0x62ac20
// 00619948  83c424               add esp, 0x24
// 0061994b  5f                   pop edi
// 0061994c  33c0                 xor eax, eax
// 0061994e  5e                   pop esi
// 0061994f  c3                   ret 
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
