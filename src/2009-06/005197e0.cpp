// roc 2009-06 005197e0  unit: G3D::VVector3::?$Table  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005197e0
//
// 005197e0  83c104               add ecx, 4
// 005197e3  c701c09c8c00         mov dword ptr [ecx], 0x8c9cc0
// 005197e9  e952f8ffff           jmp 0x519040
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
