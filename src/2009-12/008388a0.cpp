// roc 2009-12 008388a0  unit: CXTPDockingPaneManager  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008388a0
//
// 008388a0  b8407e9f00           mov eax, 0x9f7e40
// 008388a5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
