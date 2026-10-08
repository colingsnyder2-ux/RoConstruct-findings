// roc 2009-12 004764a0  unit: CWebToolbox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004764a0
//
// 004764a0  b8e4169b00           mov eax, 0x9b16e4
// 004764a5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
