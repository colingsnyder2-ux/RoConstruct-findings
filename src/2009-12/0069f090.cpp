// roc 2009-12 0069f090  unit: std::strstream  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f090
//
// 0069f090  56                   push esi
// 0069f091  8b742408             mov esi, dword ptr [esp + 8]
// 0069f095  57                   push edi
// 0069f096  6a00                 push 0
// 0069f098  6a02                 push 2
// 0069f09a  56                   push esi
// 0069f09b  e8d0b60e00           call 0x78a770
// 0069f0a0  8bf8                 mov edi, eax
// 0069f0a2  a1cc24b600           mov eax, dword ptr [0xb624cc]
// 0069f0a7  50                   push eax
// 0069f0a8  6a01                 push 1
// 0069f0aa  56                   push esi
// 0069f0ab  e8b0b50e00           call 0x78a660
// 0069f0b0  56                   push esi
// 0069f0b1  57                   push edi
// 0069f0b2  50                   push eax
// 0069f0b3  e8880a0f00           call 0x78fb40
// 0069f0b8  83c424               add esp, 0x24
// 0069f0bb  5f                   pop edi
// 0069f0bc  33c0                 xor eax, eax
// 0069f0be  5e                   pop esi
// 0069f0bf  c3                   ret 
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
