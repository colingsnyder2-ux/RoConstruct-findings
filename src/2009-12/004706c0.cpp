// roc 2009-12 004706c0  unit: CSettingsExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004706c0
//
// 004706c0  b82c0c9b00           mov eax, 0x9b0c2c
// 004706c5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
