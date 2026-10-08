// roc 2008-06 004dc520  unit: RBX::ViewNew::ViewG3D  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dc520
//
// 004dc520  68702a5000           push 0x502a70
// 004dc525  6a04                 push 4
// 004dc527  6a04                 push 4
// 004dc529  83c118               add ecx, 0x18
// 004dc52c  51                   push ecx
// 004dc52d  e829511c00           call 0x6a165b
// 004dc532  c3                   ret 
// library rbxgs-view/BrickMesh.cpp (function ??1?$pair@$$CBULookup@@UVariations@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
