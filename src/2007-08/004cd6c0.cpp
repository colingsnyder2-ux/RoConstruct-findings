// roc 2007-08 004cd6c0  unit: 0RBX::View  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd6c0
//
// 004cd6c0  68f0374600           push 0x4637f0
// 004cd6c5  6a04                 push 4
// 004cd6c7  6a04                 push 4
// 004cd6c9  51                   push ecx
// 004cd6ca  e828341600           call 0x630af7
// 004cd6cf  c3                   ret 
// library rbxgs-view/View.cpp (function ??1Variations@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
