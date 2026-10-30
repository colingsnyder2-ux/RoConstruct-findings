// roc 2009-12 004f7580  unit: RBX::VBrickColor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f7580
//
// 004f7580  b86c31b100           mov eax, 0xb1316c
// 004f7585  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
