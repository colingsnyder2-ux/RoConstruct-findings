// roc 2008-06 004d8810  unit: G3D::VVector3::?$Table  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8810
//
// 004d8810  83c104               add ecx, 4
// 004d8813  c7010c6c8200         mov dword ptr [ecx], 0x826c0c
// 004d8819  e912f6ffff           jmp 0x4d7e30
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ??1CXTPShadowsManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
