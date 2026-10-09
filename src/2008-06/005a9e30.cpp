// roc 2008-06 005a9e30  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9e30
//
// 005a9e30  56                   push esi
// 005a9e31  8b742408             mov esi, dword ptr [esp + 8]
// 005a9e35  57                   push edi
// 005a9e36  6a00                 push 0
// 005a9e38  6a02                 push 2
// 005a9e3a  56                   push esi
// 005a9e3b  e880780600           call 0x6116c0
// 005a9e40  8bf8                 mov edi, eax
// 005a9e42  a1d4b19500           mov eax, dword ptr [0x95b1d4]
// 005a9e47  50                   push eax
// 005a9e48  6a01                 push 1
// 005a9e4a  56                   push esi
// 005a9e4b  e860770600           call 0x6115b0
// 005a9e50  56                   push esi
// 005a9e51  57                   push edi
// 005a9e52  50                   push eax
// 005a9e53  e8584f0700           call 0x61edb0
// 005a9e58  83c424               add esp, 0x24
// 005a9e5b  5f                   pop edi
// 005a9e5c  33c0                 xor eax, eax
// 005a9e5e  5e                   pop esi
// 005a9e5f  c3                   ret 
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
