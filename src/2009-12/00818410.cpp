// roc 2009-12 00818410  unit: CXTPReportViewPrintOptions  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00818410
//
// 00818410  b84c419f00           mov eax, 0x9f414c
// 00818415  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
