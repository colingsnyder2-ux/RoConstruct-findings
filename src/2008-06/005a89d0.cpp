// roc 2008-06 005a89d0  unit: RBX::ScriptContext  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a89d0
//
// 005a89d0  56                   push esi
// 005a89d1  8b742408             mov esi, dword ptr [esp + 8]
// 005a89d5  57                   push edi
// 005a89d6  6a00                 push 0
// 005a89d8  6a02                 push 2
// 005a89da  56                   push esi
// 005a89db  e8e08c0600           call 0x6116c0
// 005a89e0  8bf8                 mov edi, eax
// 005a89e2  a174af9500           mov eax, dword ptr [0x95af74]
// 005a89e7  50                   push eax
// 005a89e8  6a01                 push 1
// 005a89ea  56                   push esi
// 005a89eb  e8c08b0600           call 0x6115b0
// 005a89f0  56                   push esi
// 005a89f1  57                   push edi
// 005a89f2  50                   push eax
// 005a89f3  e8a8330700           call 0x61bda0
// 005a89f8  83c424               add esp, 0x24
// 005a89fb  5f                   pop edi
// 005a89fc  33c0                 xor eax, eax
// 005a89fe  5e                   pop esi
// 005a89ff  c3                   ret 
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
