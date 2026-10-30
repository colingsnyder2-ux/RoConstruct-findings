// roc 2009-12 008bd9a0  unit: IIPAVCRgn::?$CMap  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bd9a0
//
// 008bd9a0  b8d086a000           mov eax, 0xa086d0
// 008bd9a5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
