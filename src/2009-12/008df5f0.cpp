// roc 2009-12 008df5f0  unit: CXTColorBase  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008df5f0
//
// 008df5f0  b890bba000           mov eax, 0xa0bb90
// 008df5f5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
