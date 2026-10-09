// roc 2009-12 005cd120  unit: RBX::VRbxTextureProxy::?$sp_counted_impl_p  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cd120
//
// 005cd120  68204d4e00           push 0x4e4d20
// 005cd125  6a01                 push 1
// 005cd127  6a04                 push 4
// 005cd129  83c10c               add ecx, 0xc
// 005cd12c  51                   push ecx
// 005cd12d  e872782200           call 0x7f49a4
// 005cd132  c3                   ret 
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
