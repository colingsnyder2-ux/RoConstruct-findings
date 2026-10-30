// roc 2009-12 0084f650  unit: CPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f650
//
// 0084f650  b808c19f00           mov eax, 0x9fc108
// 0084f655  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
