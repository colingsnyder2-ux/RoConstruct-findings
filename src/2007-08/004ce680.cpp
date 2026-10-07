// roc 2007-08 004ce680  unit: G3D::VVector3::?$Table  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ce680
//
// 004ce680  83c104               add ecx, 4
// 004ce683  c70150f07900         mov dword ptr [ecx], 0x79f050
// 004ce689  e992f8ffff           jmp 0x4cdf20
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShadowsManager.cpp (function ??1CXTPShadowsManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShadowsManager.cpp
