// roc 2007-03 004cd490  unit: seg_004c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cd490
//
// 004cd490  68c0594700           push 0x4759c0
// 004cd495  6a04                 push 4
// 004cd497  6a04                 push 4
// 004cd499  83c118               add ecx, 0x18
// 004cd49c  51                   push ecx
// 004cd49d  e8e31a1500           call 0x61ef85
// 004cd4a2  c3                   ret 
// library rbxgs-view/BrickMesh.cpp (function ??1?$pair@$$CBULookup@@UVariations@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
