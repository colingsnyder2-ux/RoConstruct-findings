// roc 2008-06 005a9f40  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9f40
//
// 005a9f40  56                   push esi
// 005a9f41  8b742408             mov esi, dword ptr [esp + 8]
// 005a9f45  57                   push edi
// 005a9f46  6a00                 push 0
// 005a9f48  6a02                 push 2
// 005a9f4a  56                   push esi
// 005a9f4b  e870770600           call 0x6116c0
// 005a9f50  8bf8                 mov edi, eax
// 005a9f52  a1d8b19500           mov eax, dword ptr [0x95b1d8]
// 005a9f57  50                   push eax
// 005a9f58  6a01                 push 1
// 005a9f5a  56                   push esi
// 005a9f5b  e850760600           call 0x6115b0
// 005a9f60  56                   push esi
// 005a9f61  57                   push edi
// 005a9f62  50                   push eax
// 005a9f63  e8984e0700           call 0x61ee00
// 005a9f68  83c424               add esp, 0x24
// 005a9f6b  5f                   pop edi
// 005a9f6c  33c0                 xor eax, eax
// 005a9f6e  5e                   pop esi
// 005a9f6f  c3                   ret 
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
