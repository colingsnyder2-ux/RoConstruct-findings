// roc 2007-08 004d9610  unit: RBX::View::MegaTextureProxy  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d9610
//
// 004d9610  68f0374600           push 0x4637f0
// 004d9615  6a04                 push 4
// 004d9617  6a04                 push 4
// 004d9619  83c118               add ecx, 0x18
// 004d961c  51                   push ecx
// 004d961d  e8d5741500           call 0x630af7
// 004d9622  c3                   ret 
// library rbxgs-view/BrickMesh.cpp (function ??1?$pair@$$CBULookup@@UVariations@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
