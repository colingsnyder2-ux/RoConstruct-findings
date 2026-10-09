// roc 2011-06 00619b60  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619b60
//
// 00619b60  56                   push esi
// 00619b61  8b742408             mov esi, dword ptr [esp + 8]
// 00619b65  57                   push edi
// 00619b66  6a00                 push 0
// 00619b68  6a02                 push 2
// 00619b6a  56                   push esi
// 00619b6b  e820a61400           call 0x764190
// 00619b70  8bf8                 mov edi, eax
// 00619b72  a1d8efc800           mov eax, dword ptr [0xc8efd8]
// 00619b77  50                   push eax
// 00619b78  6a01                 push 1
// 00619b7a  56                   push esi
// 00619b7b  e800a51400           call 0x764080
// 00619b80  56                   push esi
// 00619b81  57                   push edi
// 00619b82  50                   push eax
// 00619b83  e898100100           call 0x62ac20
// 00619b88  83c424               add esp, 0x24
// 00619b8b  5f                   pop edi
// 00619b8c  33c0                 xor eax, eax
// 00619b8e  5e                   pop esi
// 00619b8f  c3                   ret 
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
