// roc 2009-12 004767f0  unit: CWebToolbox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004767f0
//
// 004767f0  b87c199b00           mov eax, 0x9b197c
// 004767f5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
