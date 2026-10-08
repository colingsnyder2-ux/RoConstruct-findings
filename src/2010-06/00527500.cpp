// roc 2010-06 00527500  unit: RBX::ViewG3D  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00527500
//
// 00527500  68f0ca5200           push 0x52caf0
// 00527505  6a04                 push 4
// 00527507  6a04                 push 4
// 00527509  83c10c               add ecx, 0xc
// 0052750c  51                   push ecx
// 0052750d  e8cc152800           call 0x7a8ade
// 00527512  c3                   ret 
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
