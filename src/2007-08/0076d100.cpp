// from server: 99% by colin
// roc 2007-08 0076d100  unit: seg_00760000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d100
//
// 0076d100  56                   push esi
// 0076d101  6a05                 push 5
// 0076d103  33c9                 xor ecx, ecx
// 0076d105  51                   push ecx
// 0076d106  b810744400           mov eax, 0x447410
// 0076d10b  50                   push eax
// 0076d10c  33f6                 xor esi, esi
// 0076d10e  56                   push esi
// 0076d10f  ba804d4400           mov edx, 0x444d80
// 0076d114  52                   push edx
// 0076d115  6878017900           push 0x790178
// 0076d11a  6880017900           push 0x790180
// 0076d11f  b96cbc8b00           mov ecx, 0x8bbc6c
// 0076d124  e82798cdff           call 0x446950
// 0076d129  68407c7700           push 0x777c40
// 0076d12e  e8f03becff           call 0x630d23
// 0076d133  83c404               add esp, 4
// 0076d136  5e                   pop esi
// 0076d137  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__EpropMaxShadingQuality@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp

extern "C" int __cdecl sub_446950(int, int, int, int, int, int, int);
extern "C" int __cdecl sub_630D23(int);

int __cdecl sub_76D100()
{
    sub_446950(0x8bbc6c, 0x790180, 0x790178, 0x444d80, 0, 0x447410, 5);
    sub_630D23(0x777c40);
    return 0;
}
