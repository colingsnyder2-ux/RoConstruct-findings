// roc 2009-12 0082b800  unit: CXTPReportRecordItemVariant  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b800
//
// 0082b800  b8d864b600           mov eax, 0xb664d8
// 0082b805  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
