// roc 2007-03 004c6900  unit: seg_004c0000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c6900
//
// 004c6900  83c104               add ecx, 4
// 004c6903  c70178e67900         mov dword ptr [ecx], 0x79e678
// 004c6909  e952fbffff           jmp 0x4c6460
// library rbxgs-view/View.cpp (function ??1Entry@?$Table@VRenderSurfaceTypes@View@RBX@@V?$Table@VVector3@G3D@@UVariations@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
