// roc 2009-12 0040c910  unit: CIDEBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040c910
//
// 0040c910  b854089a00           mov eax, 0x9a0854
// 0040c915  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
