// roc 2010-06 0060c9f0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c9f0
//
// 0060c9f0  56                   push esi
// 0060c9f1  8b742408             mov esi, dword ptr [esp + 8]
// 0060c9f5  57                   push edi
// 0060c9f6  6a00                 push 0
// 0060c9f8  6a02                 push 2
// 0060c9fa  56                   push esi
// 0060c9fb  e820651100           call 0x722f20
// 0060ca00  8bf8                 mov edi, eax
// 0060ca02  a1642abe00           mov eax, dword ptr [0xbe2a64]
// 0060ca07  50                   push eax
// 0060ca08  6a01                 push 1
// 0060ca0a  56                   push esi
// 0060ca0b  e800641100           call 0x722e10
// 0060ca10  56                   push esi
// 0060ca11  57                   push edi
// 0060ca12  50                   push eax
// 0060ca13  e888c11100           call 0x728ba0
// 0060ca18  83c424               add esp, 0x24
// 0060ca1b  5f                   pop edi
// 0060ca1c  33c0                 xor eax, eax
// 0060ca1e  5e                   pop esi
// 0060ca1f  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX00000e@@YAHH@Z)

namespace ns_ROCX00000e {
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
