// roc 2009-06 005176a0  unit: RBX::VMaterialBase::?$WeakReferenceCountedPointer  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005176a0
//
// 005176a0  6860d14900           push 0x49d160
// 005176a5  6a01                 push 1
// 005176a7  6a04                 push 4
// 005176a9  83c10c               add ecx, 0xc
// 005176ac  51                   push ecx
// 005176ad  e8c4242000           call 0x719b76
// 005176b2  c3                   ret 
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
