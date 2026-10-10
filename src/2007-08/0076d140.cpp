// from server: 99% by colin
// roc 2007-08 0076d140  unit: seg_00760000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d140
//
// 0076d140  56                   push esi
// 0076d141  6a05                 push 5
// 0076d143  33c9                 xor ecx, ecx
// 0076d145  51                   push ecx
// 0076d146  b8b0744400           mov eax, 0x4474b0
// 0076d14b  50                   push eax
// 0076d14c  33f6                 xor esi, esi
// 0076d14e  56                   push esi
// 0076d14f  ba904d4400           mov edx, 0x444d90
// 0076d154  52                   push edx
// 0076d155  6878017900           push 0x790178
// 0076d15a  6894017900           push 0x790194
// 0076d15f  b988bc8b00           mov ecx, 0x8bbc88
// 0076d164  e8e797cdff           call 0x446950
// 0076d169  68807b7700           push 0x777b80
// 0076d16e  e8b03becff           call 0x630d23
// 0076d173  83c404               add esp, 4
// 0076d176  5e                   pop esi
// 0076d177  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_minMeshDetail@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp

extern "C" int __cdecl sub_446950(int, int, int, int, int, int, int);
extern "C" int __cdecl sub_630d23(int);

int __cdecl sub_76d140()
{
    sub_446950(0x8bbc88, 0x790194, 0x790178, 0x444d90, 0, 0x4474b0, 5);
    sub_630d23(0x777b80);
    return 0;
}
