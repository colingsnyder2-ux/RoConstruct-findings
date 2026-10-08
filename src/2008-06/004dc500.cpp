// roc 2008-06 004dc500  unit: RBX::ViewNew::ViewG3D  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004dc500
//
// 004dc500  68702a5000           push 0x502a70
// 004dc505  6a04                 push 4
// 004dc507  6a04                 push 4
// 004dc509  83c104               add ecx, 4
// 004dc50c  51                   push ecx
// 004dc50d  e849511c00           call 0x6a165b
// 004dc512  c3                   ret 
// library rbxgs-view/BrickMesh.cpp (function ??1Variations@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
