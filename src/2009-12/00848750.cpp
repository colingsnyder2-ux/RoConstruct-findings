// roc 2009-12 00848750  unit: CXTPControlRecentFileList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00848750
//
// 00848750  b8046db600           mov eax, 0xb66d04
// 00848755  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
