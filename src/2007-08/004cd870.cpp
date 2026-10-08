// roc 2007-08 004cd870  unit: 0RBX::View  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd870
//
// 004cd870  68f0374600           push 0x4637f0
// 004cd875  6a04                 push 4
// 004cd877  6a04                 push 4
// 004cd879  83c10c               add ecx, 0xc
// 004cd87c  51                   push ecx
// 004cd87d  e875321600           call 0x630af7
// 004cd882  c3                   ret 
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
