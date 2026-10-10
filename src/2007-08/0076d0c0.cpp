// from server: 99% by colin
// roc 2007-08 0076d0c0  unit: seg_00760000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d0c0
//
// 0076d0c0  56                   push esi
// 0076d0c1  6a05                 push 5
// 0076d0c3  33c9                 xor ecx, ecx
// 0076d0c5  51                   push ecx
// 0076d0c6  b870734400           mov eax, 0x447370
// 0076d0cb  50                   push eax
// 0076d0cc  33f6                 xor esi, esi
// 0076d0ce  56                   push esi
// 0076d0cf  ba704d4400           mov edx, 0x444d70
// 0076d0d4  52                   push edx
// 0076d0d5  6878017900           push 0x790178
// 0076d0da  6864017900           push 0x790164
// 0076d0df  b950bc8b00           mov ecx, 0x8bbc50
// 0076d0e4  e86798cdff           call 0x446950
// 0076d0e9  68607c7700           push 0x777c60
// 0076d0ee  e8303cecff           call 0x630d23
// 0076d0f3  83c404               add esp, 4
// 0076d0f6  5e                   pop esi
// 0076d0f7  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_minShadingQuality@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp

extern "C" void __cdecl sub_446950();
extern "C" void __cdecl sub_630D23();

void __cdecl sub_76D0C0()
{
    sub_446950();
    sub_630D23();
}
