// roc 2009-12 008a1330  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a1330
//
// 008a1330  b8d853a000           mov eax, 0xa053d8
// 008a1335  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
