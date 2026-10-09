// roc 2009-12 005cf2d0  unit: G3D::VVector3::?$Table  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cf2d0
//
// 005cf2d0  83c104               add ecx, 4
// 005cf2d3  c7015c119c00         mov dword ptr [ecx], 0x9c115c
// 005cf2d9  e982f8ffff           jmp 0x5ceb60
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
