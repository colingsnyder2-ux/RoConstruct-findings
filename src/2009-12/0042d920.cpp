// roc 2009-12 0042d920  unit: CNullDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042d920
//
// 0042d920  b8fc569a00           mov eax, 0x9a56fc
// 0042d925  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
