// roc 2009-12 00538980  unit: RBX::VSystemAddress::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00538980
//
// 00538980  b8b0d3b100           mov eax, 0xb1d3b0
// 00538985  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
