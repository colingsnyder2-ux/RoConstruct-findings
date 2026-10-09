// roc 2009-12 0069f6f0  unit: std::strstream  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f6f0
//
// 0069f6f0  56                   push esi
// 0069f6f1  8b742408             mov esi, dword ptr [esp + 8]
// 0069f6f5  57                   push edi
// 0069f6f6  6a00                 push 0
// 0069f6f8  6a02                 push 2
// 0069f6fa  56                   push esi
// 0069f6fb  e870b00e00           call 0x78a770
// 0069f700  8bf8                 mov edi, eax
// 0069f702  a1782bb600           mov eax, dword ptr [0xb62b78]
// 0069f707  50                   push eax
// 0069f708  6a01                 push 1
// 0069f70a  56                   push esi
// 0069f70b  e850af0e00           call 0x78a660
// 0069f710  56                   push esi
// 0069f711  57                   push edi
// 0069f712  50                   push eax
// 0069f713  e8c85c0f00           call 0x7953e0
// 0069f718  83c424               add esp, 0x24
// 0069f71b  5f                   pop edi
// 0069f71c  33c0                 xor eax, eax
// 0069f71e  5e                   pop esi
// 0069f71f  c3                   ret 
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
