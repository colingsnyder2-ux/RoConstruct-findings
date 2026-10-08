// roc 2007-03 004c24e0  unit: seg_004c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c24e0
//
// 004c24e0  68c0594700           push 0x4759c0
// 004c24e5  6a04                 push 4
// 004c24e7  6a04                 push 4
// 004c24e9  83c10c               add ecx, 0xc
// 004c24ec  51                   push ecx
// 004c24ed  e893ca1500           call 0x61ef85
// 004c24f2  c3                   ret 
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
