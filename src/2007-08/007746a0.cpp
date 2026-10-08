// roc 2007-08 007746a0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007746a0
//
// 007746a0  6a05                 push 5
// 007746a2  6880935b00           push 0x5b9380
// 007746a7  6890915b00           push 0x5b9190
// 007746ac  68fc897b00           push 0x7b89fc
// 007746b1  68488a7b00           push 0x7b8a48
// 007746b6  b9e0638c00           mov ecx, 0x8c63e0
// 007746bb  e8d032e4ff           call 0x5b7990
// 007746c0  6800b97700           push 0x77b900
// 007746c5  e859c6ebff           call 0x630d23
// 007746ca  59                   pop ecx
// 007746cb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BottomParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
