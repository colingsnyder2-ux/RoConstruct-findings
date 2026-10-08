// roc 2009-12 008b0c20  unit: CXTPDockingPaneTabbedContainer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0c20
//
// 008b0c20  b89c73a000           mov eax, 0xa0739c
// 008b0c25  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
