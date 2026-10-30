// roc 2009-12 008ac360  unit: CXTPDockingPaneAutoHidePanel  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ac360
//
// 008ac360  b8246aa000           mov eax, 0xa06a24
// 008ac365  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
