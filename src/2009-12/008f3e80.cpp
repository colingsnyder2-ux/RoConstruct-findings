// roc 2009-12 008f3e80  unit: CXTButtonThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3e80
//
// 008f3e80  b824fba000           mov eax, 0xa0fb24
// 008f3e85  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
