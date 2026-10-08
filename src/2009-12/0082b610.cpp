// roc 2009-12 0082b610  unit: CXTPReportRecordItemDateTime  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b610
//
// 0082b610  b89c64b600           mov eax, 0xb6649c
// 0082b615  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
