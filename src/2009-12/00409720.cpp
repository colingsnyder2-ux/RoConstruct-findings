// roc 2009-12 00409720  unit: boost::bad_any_cast  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00409720
//
// 00409720  b8a8fe9900           mov eax, 0x99fea8
// 00409725  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
