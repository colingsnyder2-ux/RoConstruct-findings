// from server: 99% by colin
// roc 2007-08 0076d180  unit: seg_00760000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076d180
//
// 0076d180  56                   push esi
// 0076d181  6a05                 push 5
// 0076d183  33c9                 xor ecx, ecx
// 0076d185  51                   push ecx
// 0076d186  b820754400           mov eax, 0x447520
// 0076d18b  50                   push eax
// 0076d18c  33f6                 xor esi, esi
// 0076d18e  56                   push esi
// 0076d18f  baa04d4400           mov edx, 0x444da0
// 0076d194  52                   push edx
// 0076d195  6878017900           push 0x790178
// 0076d19a  68a4017900           push 0x7901a4
// 0076d19f  b9a4bc8b00           mov ecx, 0x8bbca4
// 0076d1a4  e8a797cdff           call 0x446950
// 0076d1a9  68a07b7700           push 0x777ba0
// 0076d1ae  e8703becff           call 0x630d23
// 0076d1b3  83c404               add esp, 4
// 0076d1b6  5e                   pop esi
// 0076d1b7  c3                   ret 
// library rbxgs-net/Player.cpp (function ??__Eprop_maxMeshDetail@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp

extern "C" int __cdecl sub_446950(int, int, int, int, int, int, int);
extern "C" int __cdecl sub_630D23(int);

int __cdecl sub_76D180()
{
    sub_446950(0x8bbca4, 0x7901a4, 0x790178, 0x444da0, 0, 0x447520, 5);
    sub_630D23(0x777ba0);
    return 0;
}
