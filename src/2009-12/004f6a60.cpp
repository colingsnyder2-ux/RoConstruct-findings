// roc 2009-12 004f6a60  unit: G3D::VVector3::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f6a60
//
// 004f6a60  b8d030b100           mov eax, 0xb130d0
// 004f6a65  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
