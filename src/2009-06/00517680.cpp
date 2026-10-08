// roc 2009-06 00517680  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00517680
//
// 00517680  6860d14900           push 0x49d160
// 00517685  6a04                 push 4
// 00517687  6a04                 push 4
// 00517689  83c10c               add ecx, 0xc
// 0051768c  51                   push ecx
// 0051768d  e8e4242000           call 0x719b76
// 00517692  c3                   ret 
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
