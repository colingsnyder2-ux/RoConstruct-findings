// roc 2009-12 008636e0  unit: CXTPToolTipContextToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008636e0
//
// 008636e0  b880e79f00           mov eax, 0x9fe780
// 008636e5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
