// roc 2009-06 00633410  unit: std::strstream  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633410
//
// 00633410  56                   push esi
// 00633411  8b742408             mov esi, dword ptr [esp + 8]
// 00633415  57                   push edi
// 00633416  6a00                 push 0
// 00633418  6a02                 push 2
// 0063341a  56                   push esi
// 0063341b  e8a0780800           call 0x6bacc0
// 00633420  8bf8                 mov edi, eax
// 00633422  a1a428a200           mov eax, dword ptr [0xa228a4]
// 00633427  50                   push eax
// 00633428  6a01                 push 1
// 0063342a  56                   push esi
// 0063342b  e880770800           call 0x6babb0
// 00633430  56                   push esi
// 00633431  57                   push edi
// 00633432  50                   push eax
// 00633433  e848950800           call 0x6bc980
// 00633438  83c424               add esp, 0x24
// 0063343b  5f                   pop edi
// 0063343c  33c0                 xor eax, eax
// 0063343e  5e                   pop esi
// 0063343f  c3                   ret 
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
