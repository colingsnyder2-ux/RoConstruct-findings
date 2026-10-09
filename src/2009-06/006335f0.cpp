// roc 2009-06 006335f0  unit: std::strstream  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006335f0
//
// 006335f0  56                   push esi
// 006335f1  8b742408             mov esi, dword ptr [esp + 8]
// 006335f5  57                   push edi
// 006335f6  6a00                 push 0
// 006335f8  6a02                 push 2
// 006335fa  56                   push esi
// 006335fb  e8c0760800           call 0x6bacc0
// 00633600  8bf8                 mov edi, eax
// 00633602  a1102ba200           mov eax, dword ptr [0xa22b10]
// 00633607  50                   push eax
// 00633608  6a01                 push 1
// 0063360a  56                   push esi
// 0063360b  e8a0750800           call 0x6babb0
// 00633610  56                   push esi
// 00633611  57                   push edi
// 00633612  50                   push eax
// 00633613  e8d8ca0800           call 0x6c00f0
// 00633618  83c424               add esp, 0x24
// 0063361b  5f                   pop edi
// 0063361c  33c0                 xor eax, eax
// 0063361e  5e                   pop esi
// 0063361f  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000004@@YAHH@Z)

namespace ns_ROCX000004 {
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
