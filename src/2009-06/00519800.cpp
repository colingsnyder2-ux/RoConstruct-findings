// roc 2009-06 00519800  unit: G3D::VVector3::?$Table  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00519800
//
// 00519800  83c104               add ecx, 4
// 00519803  c701d09c8c00         mov dword ptr [ecx], 0x8c9cd0
// 00519809  e9a2f8ffff           jmp 0x5190b0
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
