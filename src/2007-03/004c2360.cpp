// roc 2007-03 004c2360  unit: seg_004c0000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2360
//
// 004c2360  68c0594700           push 0x4759c0
// 004c2365  6a04                 push 4
// 004c2367  6a04                 push 4
// 004c2369  51                   push ecx
// 004c236a  e816cc1500           call 0x61ef85
// 004c236f  c3                   ret 
// library rbxgs-view/View.cpp (function ??1Variations@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
