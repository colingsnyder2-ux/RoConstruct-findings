// roc 2008-06 004d7750  unit: RBX::ViewNew::ViewRbxGfx  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7750
//
// 004d7750  68702a5000           push 0x502a70
// 004d7755  6a01                 push 1
// 004d7757  6a04                 push 4
// 004d7759  83c10c               add ecx, 0xc
// 004d775c  51                   push ecx
// 004d775d  e8f99e1c00           call 0x6a165b
// 004d7762  c3                   ret 
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
