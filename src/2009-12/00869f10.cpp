// roc 2009-12 00869f10  unit: CXTPPropertyGridToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00869f10
//
// 00869f10  b888f29f00           mov eax, 0x9ff288
// 00869f15  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
