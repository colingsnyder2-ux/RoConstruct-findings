// roc 2007-08 007749a0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007749a0
//
// 007749a0  6a05                 push 5
// 007749a2  6880935b00           push 0x5b9380
// 007749a7  6890915b00           push 0x5b9190
// 007749ac  68fc897b00           push 0x7b89fc
// 007749b1  68388b7b00           push 0x7b8b38
// 007749b6  b9a0628c00           mov ecx, 0x8c62a0
// 007749bb  e89032e4ff           call 0x5b7c50
// 007749c0  6800bb7700           push 0x77bb00
// 007749c5  e859c3ebff           call 0x630d23
// 007749ca  59                   pop ecx
// 007749cb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BackParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
