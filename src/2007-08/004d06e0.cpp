// roc 2007-08 004d06e0  unit: RBX::View::PartChunk  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d06e0
//
// 004d06e0  68f0374600           push 0x4637f0
// 004d06e5  6a01                 push 1
// 004d06e7  6a04                 push 4
// 004d06e9  83c10c               add ecx, 0xc
// 004d06ec  51                   push ecx
// 004d06ed  e805041600           call 0x630af7
// 004d06f2  c3                   ret 
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
