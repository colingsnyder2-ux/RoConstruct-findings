// from server: 100% by auto
// roc 2008-06 004d8830  unit: G3D::VVector3::?$Table  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8830
//
// 004d8830  83c104               add ecx, 4
// 004d8833  c7011c6c8200         mov dword ptr [ecx], 0x826c1c
// 004d8839  e9f2f5ffff           jmp 0x4d7e30
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ??1CXTPShadowsManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
