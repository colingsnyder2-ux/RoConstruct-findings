// roc 2008-06 005a99f0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a99f0
//
// 005a99f0  56                   push esi
// 005a99f1  8b742408             mov esi, dword ptr [esp + 8]
// 005a99f5  57                   push edi
// 005a99f6  6a00                 push 0
// 005a99f8  6a02                 push 2
// 005a99fa  56                   push esi
// 005a99fb  e8c07c0600           call 0x6116c0
// 005a9a00  8bf8                 mov edi, eax
// 005a9a02  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 005a9a07  50                   push eax
// 005a9a08  6a01                 push 1
// 005a9a0a  56                   push esi
// 005a9a0b  e8a07b0600           call 0x6115b0
// 005a9a10  56                   push esi
// 005a9a11  57                   push edi
// 005a9a12  50                   push eax
// 005a9a13  e8e82f0700           call 0x61ca00
// 005a9a18  83c424               add esp, 0x24
// 005a9a1b  5f                   pop edi
// 005a9a1c  33c0                 xor eax, eax
// 005a9a1e  5e                   pop esi
// 005a9a1f  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000005@@YAHH@Z)

namespace ns_ROCX000005 {
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
