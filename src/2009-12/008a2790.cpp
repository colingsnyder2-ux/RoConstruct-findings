// roc 2009-12 008a2790  unit: CXTPReportInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2790
//
// 008a2790  b8d056a000           mov eax, 0xa056d0
// 008a2795  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
