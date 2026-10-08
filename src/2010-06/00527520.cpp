// roc 2010-06 00527520  unit: RBX::ViewG3D  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00527520
//
// 00527520  68f0ca5200           push 0x52caf0
// 00527525  6a01                 push 1
// 00527527  6a04                 push 4
// 00527529  83c10c               add ecx, 0xc
// 0052752c  51                   push ecx
// 0052752d  e8ac152800           call 0x7a8ade
// 00527532  c3                   ret 
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
