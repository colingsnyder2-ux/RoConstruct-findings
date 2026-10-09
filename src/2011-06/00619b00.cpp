// roc 2011-06 00619b00  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619b00
//
// 00619b00  56                   push esi
// 00619b01  8b742408             mov esi, dword ptr [esp + 8]
// 00619b05  57                   push edi
// 00619b06  6a00                 push 0
// 00619b08  6a02                 push 2
// 00619b0a  56                   push esi
// 00619b0b  e880a61400           call 0x764190
// 00619b10  8bf8                 mov edi, eax
// 00619b12  a1ecefc800           mov eax, dword ptr [0xc8efec]
// 00619b17  50                   push eax
// 00619b18  6a01                 push 1
// 00619b1a  56                   push esi
// 00619b1b  e860a51400           call 0x764080
// 00619b20  56                   push esi
// 00619b21  57                   push edi
// 00619b22  50                   push eax
// 00619b23  e8f8100100           call 0x62ac20
// 00619b28  83c424               add esp, 0x24
// 00619b2b  5f                   pop edi
// 00619b2c  33c0                 xor eax, eax
// 00619b2e  5e                   pop esi
// 00619b2f  c3                   ret 
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
