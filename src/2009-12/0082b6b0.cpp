// roc 2009-12 0082b6b0  unit: CXTPReportRecordItemPreview  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b6b0
//
// 0082b6b0  b8b864b600           mov eax, 0xb664b8
// 0082b6b5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
