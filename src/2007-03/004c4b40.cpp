// roc 2007-03 004c4b40  unit: seg_004c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4b40
//
// 004c4b40  68c0594700           push 0x4759c0
// 004c4b45  6a01                 push 1
// 004c4b47  6a04                 push 4
// 004c4b49  83c10c               add ecx, 0xc
// 004c4b4c  51                   push ecx
// 004c4b4d  e833a41500           call 0x61ef85
// 004c4b52  c3                   ret 
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
