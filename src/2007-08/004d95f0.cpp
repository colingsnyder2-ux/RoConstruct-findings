// roc 2007-08 004d95f0  unit: RBX::View::MegaTextureProxy  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d95f0
//
// 004d95f0  68f0374600           push 0x4637f0
// 004d95f5  6a04                 push 4
// 004d95f7  6a04                 push 4
// 004d95f9  83c104               add ecx, 4
// 004d95fc  51                   push ecx
// 004d95fd  e8f5741500           call 0x630af7
// 004d9602  c3                   ret 
// library rbxgs-view/BrickMesh.cpp (function ??1Variations@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
