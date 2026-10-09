// roc 2011-06 006199e0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006199e0
//
// 006199e0  56                   push esi
// 006199e1  8b742408             mov esi, dword ptr [esp + 8]
// 006199e5  57                   push edi
// 006199e6  6a00                 push 0
// 006199e8  6a02                 push 2
// 006199ea  56                   push esi
// 006199eb  e8a0a71400           call 0x764190
// 006199f0  8bf8                 mov edi, eax
// 006199f2  a1e0efc800           mov eax, dword ptr [0xc8efe0]
// 006199f7  50                   push eax
// 006199f8  6a01                 push 1
// 006199fa  56                   push esi
// 006199fb  e880a61400           call 0x764080
// 00619a00  56                   push esi
// 00619a01  57                   push edi
// 00619a02  50                   push eax
// 00619a03  e818120100           call 0x62ac20
// 00619a08  83c424               add esp, 0x24
// 00619a0b  5f                   pop edi
// 00619a0c  33c0                 xor eax, eax
// 00619a0e  5e                   pop esi
// 00619a0f  c3                   ret 
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
