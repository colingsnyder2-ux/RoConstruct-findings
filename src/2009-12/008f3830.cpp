// roc 2009-12 008f3830  unit: CXTShadowHook  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3830
//
// 008f3830  b8e8f9a000           mov eax, 0xa0f9e8
// 008f3835  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
