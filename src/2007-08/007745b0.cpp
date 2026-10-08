// roc 2007-08 007745b0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007745b0
//
// 007745b0  6a05                 push 5
// 007745b2  68c0925b00           push 0x5b92c0
// 007745b7  6830915b00           push 0x5b9130
// 007745bc  68fc897b00           push 0x7b89fc
// 007745c1  68ec897b00           push 0x7b89ec
// 007745c6  b9dc618c00           mov ecx, 0x8c61dc
// 007745cb  e8103ae4ff           call 0x5b7fe0
// 007745d0  68a0b87700           push 0x77b8a0
// 007745d5  e849c7ebff           call 0x630d23
// 007745da  59                   pop ecx
// 007745db  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_TopSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
