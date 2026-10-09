// roc 2011-06 006196e0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006196e0
//
// 006196e0  56                   push esi
// 006196e1  8b742408             mov esi, dword ptr [esp + 8]
// 006196e5  57                   push edi
// 006196e6  6a00                 push 0
// 006196e8  6a02                 push 2
// 006196ea  56                   push esi
// 006196eb  e8a0aa1400           call 0x764190
// 006196f0  8bf8                 mov edi, eax
// 006196f2  a164d5c400           mov eax, dword ptr [0xc4d564]
// 006196f7  50                   push eax
// 006196f8  6a01                 push 1
// 006196fa  56                   push esi
// 006196fb  e880a91400           call 0x764080
// 00619700  56                   push esi
// 00619701  57                   push edi
// 00619702  50                   push eax
// 00619703  e818150100           call 0x62ac20
// 00619708  83c424               add esp, 0x24
// 0061970b  5f                   pop edi
// 0061970c  33c0                 xor eax, eax
// 0061970e  5e                   pop esi
// 0061970f  c3                   ret 
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
