// roc 2007-03 004c2e80  unit: seg_004c0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2e80
//
// 004c2e80  83c104               add ecx, 4
// 004c2e83  c701f0e57900         mov dword ptr [ecx], 0x79e5f0
// 004c2e89  e9a2fcffff           jmp 0x4c2b30
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
