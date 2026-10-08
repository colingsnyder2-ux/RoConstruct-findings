// roc 2008-06 007f3280  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f3280
//
// 007f3280  56                   push esi
// 007f3281  6a05                 push 5
// 007f3283  33c9                 xor ecx, ecx
// 007f3285  51                   push ecx
// 007f3286  b800675600           mov eax, 0x566700
// 007f328b  50                   push eax
// 007f328c  33f6                 xor esi, esi
// 007f328e  56                   push esi
// 007f328f  ba405e5600           mov edx, 0x565e40
// 007f3294  52                   push edx
// 007f3295  6890248200           push 0x822490
// 007f329a  6848258200           push 0x822548
// 007f329f  b904499700           mov ecx, 0x974904
// 007f32a4  e82730d7ff           call 0x5662d0
// 007f32a9  6810d07f00           push 0x7fd010
// 007f32ae  e8fce4eaff           call 0x6a17af
// 007f32b3  83c404               add esp, 4
// 007f32b6  5e                   pop esi
// 007f32b7  c3                   ret 
// library rbxgs/v8datamodel\Team.cpp (function ??__Eprop_Color@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp
