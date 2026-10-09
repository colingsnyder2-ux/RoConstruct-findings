// roc 2009-12 006a10b0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a10b0
//
// 006a10b0  56                   push esi
// 006a10b1  8b742408             mov esi, dword ptr [esp + 8]
// 006a10b5  57                   push edi
// 006a10b6  6a00                 push 0
// 006a10b8  6a02                 push 2
// 006a10ba  56                   push esi
// 006a10bb  e8b0960e00           call 0x78a770
// 006a10c0  8bf8                 mov edi, eax
// 006a10c2  a1642bb600           mov eax, dword ptr [0xb62b64]
// 006a10c7  50                   push eax
// 006a10c8  6a01                 push 1
// 006a10ca  56                   push esi
// 006a10cb  e890950e00           call 0x78a660
// 006a10d0  56                   push esi
// 006a10d1  57                   push edi
// 006a10d2  50                   push eax
// 006a10d3  e818f70e00           call 0x7907f0
// 006a10d8  83c424               add esp, 0x24
// 006a10db  5f                   pop edi
// 006a10dc  33c0                 xor eax, eax
// 006a10de  5e                   pop esi
// 006a10df  c3                   ret 
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
