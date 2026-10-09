// roc 2009-12 006a0f70  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0f70
//
// 006a0f70  56                   push esi
// 006a0f71  8b742408             mov esi, dword ptr [esp + 8]
// 006a0f75  57                   push edi
// 006a0f76  6a00                 push 0
// 006a0f78  6a02                 push 2
// 006a0f7a  56                   push esi
// 006a0f7b  e8f0970e00           call 0x78a770
// 006a0f80  8bf8                 mov edi, eax
// 006a0f82  a15c2bb600           mov eax, dword ptr [0xb62b5c]
// 006a0f87  50                   push eax
// 006a0f88  6a01                 push 1
// 006a0f8a  56                   push esi
// 006a0f8b  e8d0960e00           call 0x78a660
// 006a0f90  56                   push esi
// 006a0f91  57                   push edi
// 006a0f92  50                   push eax
// 006a0f93  e858f80e00           call 0x7907f0
// 006a0f98  83c424               add esp, 0x24
// 006a0f9b  5f                   pop edi
// 006a0f9c  33c0                 xor eax, eax
// 006a0f9e  5e                   pop esi
// 006a0f9f  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000012@@YAHH@Z)

namespace ns_ROCX000012 {
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
