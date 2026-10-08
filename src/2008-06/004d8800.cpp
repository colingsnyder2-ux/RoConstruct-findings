// from server: 100% by auto
// roc 2008-06 004d8800  unit: G3D::VVector3::?$Table  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8800
//
// 004d8800  83c104               add ecx, 4
// 004d8803  c701046c8200         mov dword ptr [ecx], 0x826c04
// 004d8809  e922f6ffff           jmp 0x4d7e30
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ??1CXTPShadowsManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
