// roc 2009-12 00537d00  unit: RBX::VAxes::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00537d00
//
// 00537d00  b8b4d7b100           mov eax, 0xb1d7b4
// 00537d05  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
