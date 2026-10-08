// roc 2007-03 004cd470  unit: seg_004c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cd470
//
// 004cd470  68c0594700           push 0x4759c0
// 004cd475  6a04                 push 4
// 004cd477  6a04                 push 4
// 004cd479  83c104               add ecx, 4
// 004cd47c  51                   push ecx
// 004cd47d  e8031b1500           call 0x61ef85
// 004cd482  c3                   ret 
// library rbxgs-view/BrickMesh.cpp (function ??1Variations@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
