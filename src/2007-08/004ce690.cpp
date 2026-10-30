// from server: 100% by auto
// roc 2007-08 004ce690  unit: G3D::VVector3::?$Table  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ce690
//
// 004ce690  83c104               add ecx, 4
// 004ce693  c70158f07900         mov dword ptr [ecx], 0x79f058
// 004ce699  e9423a0000           jmp 0x4d20e0
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShadowsManager.cpp (function ??1CXTPShadowsManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShadowsManager.cpp
