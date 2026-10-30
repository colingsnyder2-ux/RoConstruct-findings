// roc 2009-12 0081c470  unit: CXTPReportControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081c470
//
// 0081c470  b8784b9f00           mov eax, 0x9f4b78
// 0081c475  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
