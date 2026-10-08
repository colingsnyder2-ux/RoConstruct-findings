// roc 2009-12 008adfc0  unit: CXTPDockingPaneKeyboardHook  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008adfc0
//
// 008adfc0  b8306da000           mov eax, 0xa06d30
// 008adfc5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
