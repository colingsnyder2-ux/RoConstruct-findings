// roc 2008-06 004d7730  unit: RBX::ViewNew::ViewRbxGfx  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7730
//
// 004d7730  68702a5000           push 0x502a70
// 004d7735  6a04                 push 4
// 004d7737  6a04                 push 4
// 004d7739  83c10c               add ecx, 0xc
// 004d773c  51                   push ecx
// 004d773d  e8199f1c00           call 0x6a165b
// 004d7742  c3                   ret 
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
