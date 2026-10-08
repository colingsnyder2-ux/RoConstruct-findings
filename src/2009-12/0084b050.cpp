// roc 2009-12 0084b050  unit: CXTPPrintOptions  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084b050
//
// 0084b050  b800040000           mov eax, 0x400
// 0084b055  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
