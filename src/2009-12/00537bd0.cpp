// roc 2009-12 00537bd0  unit: RBX::VUDim::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00537bd0
//
// 00537bd0  b8b0d6b100           mov eax, 0xb1d6b0
// 00537bd5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
