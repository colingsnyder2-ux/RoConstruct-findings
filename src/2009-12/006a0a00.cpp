// roc 2009-12 006a0a00  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0a00
//
// 006a0a00  56                   push esi
// 006a0a01  8b742408             mov esi, dword ptr [esp + 8]
// 006a0a05  57                   push edi
// 006a0a06  6a00                 push 0
// 006a0a08  6a02                 push 2
// 006a0a0a  56                   push esi
// 006a0a0b  e8609d0e00           call 0x78a770
// 006a0a10  8bf8                 mov edi, eax
// 006a0a12  a1802bb600           mov eax, dword ptr [0xb62b80]
// 006a0a17  50                   push eax
// 006a0a18  6a01                 push 1
// 006a0a1a  56                   push esi
// 006a0a1b  e8409c0e00           call 0x78a660
// 006a0a20  56                   push esi
// 006a0a21  57                   push edi
// 006a0a22  50                   push eax
// 006a0a23  e8c8fd0e00           call 0x7907f0
// 006a0a28  83c424               add esp, 0x24
// 006a0a2b  5f                   pop edi
// 006a0a2c  33c0                 xor eax, eax
// 006a0a2e  5e                   pop esi
// 006a0a2f  c3                   ret 
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
