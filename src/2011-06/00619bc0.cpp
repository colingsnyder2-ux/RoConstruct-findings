// roc 2011-06 00619bc0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619bc0
//
// 00619bc0  56                   push esi
// 00619bc1  8b742408             mov esi, dword ptr [esp + 8]
// 00619bc5  57                   push edi
// 00619bc6  6a00                 push 0
// 00619bc8  6a02                 push 2
// 00619bca  56                   push esi
// 00619bcb  e8c0a51400           call 0x764190
// 00619bd0  8bf8                 mov edi, eax
// 00619bd2  a1c0f4c800           mov eax, dword ptr [0xc8f4c0]
// 00619bd7  50                   push eax
// 00619bd8  6a01                 push 1
// 00619bda  56                   push esi
// 00619bdb  e8a0a41400           call 0x764080
// 00619be0  56                   push esi
// 00619be1  57                   push edi
// 00619be2  50                   push eax
// 00619be3  e838100100           call 0x62ac20
// 00619be8  83c424               add esp, 0x24
// 00619beb  5f                   pop edi
// 00619bec  33c0                 xor eax, eax
// 00619bee  5e                   pop esi
// 00619bef  c3                   ret 
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
