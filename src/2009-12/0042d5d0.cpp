// roc 2009-12 0042d5d0  unit: CBrowserFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042d5d0
//
// 0042d5d0  b88c519a00           mov eax, 0x9a518c
// 0042d5d5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
