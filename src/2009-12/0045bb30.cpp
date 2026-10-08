// roc 2009-12 0045bb30  unit: CRobloxReportPaneView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0045bb30
//
// 0045bb30  b8a8d49a00           mov eax, 0x9ad4a8
// 0045bb35  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
