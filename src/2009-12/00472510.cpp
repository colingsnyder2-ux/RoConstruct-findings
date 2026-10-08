// roc 2009-12 00472510  unit: CTaskSchedulerPaneView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00472510
//
// 00472510  b850159b00           mov eax, 0x9b1550
// 00472515  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
