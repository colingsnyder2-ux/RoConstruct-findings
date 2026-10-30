// roc 2009-12 0083a850  unit: CXTPDockingPaneManager  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083a850
//
// 0083a850  b8d0809f00           mov eax, 0x9f80d0
// 0083a855  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
