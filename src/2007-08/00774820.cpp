// roc 2007-08 00774820  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774820
//
// 00774820  6a05                 push 5
// 00774822  6880935b00           push 0x5b9380
// 00774827  6890915b00           push 0x5b9190
// 0077482c  68fc897b00           push 0x7b89fc
// 00774831  68c48a7b00           push 0x7b8ac4
// 00774836  b91c648c00           mov ecx, 0x8c641c
// 0077483b  e8b032e4ff           call 0x5b7af0
// 00774840  6800ba7700           push 0x77ba00
// 00774845  e8d9c4ebff           call 0x630d23
// 0077484a  59                   pop ecx
// 0077484b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_RightParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
