// roc 2011-06 00619a40  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619a40
//
// 00619a40  56                   push esi
// 00619a41  8b742408             mov esi, dword ptr [esp + 8]
// 00619a45  57                   push edi
// 00619a46  6a00                 push 0
// 00619a48  6a02                 push 2
// 00619a4a  56                   push esi
// 00619a4b  e840a71400           call 0x764190
// 00619a50  8bf8                 mov edi, eax
// 00619a52  a1e4efc800           mov eax, dword ptr [0xc8efe4]
// 00619a57  50                   push eax
// 00619a58  6a01                 push 1
// 00619a5a  56                   push esi
// 00619a5b  e820a61400           call 0x764080
// 00619a60  56                   push esi
// 00619a61  57                   push edi
// 00619a62  50                   push eax
// 00619a63  e8b8110100           call 0x62ac20
// 00619a68  83c424               add esp, 0x24
// 00619a6b  5f                   pop edi
// 00619a6c  33c0                 xor eax, eax
// 00619a6e  5e                   pop esi
// 00619a6f  c3                   ret 
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
