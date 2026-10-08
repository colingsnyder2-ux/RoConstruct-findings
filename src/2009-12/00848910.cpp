// roc 2009-12 00848910  unit: CXTPControlRadioButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00848910
//
// 00848910  b8906db600           mov eax, 0xb66d90
// 00848915  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
