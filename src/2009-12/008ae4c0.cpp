// roc 2009-12 008ae4c0  unit: CXTPDockingPaneMiniWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ae4c0
//
// 008ae4c0  b8586ea000           mov eax, 0xa06e58
// 008ae4c5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
