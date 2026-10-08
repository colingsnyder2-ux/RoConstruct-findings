// roc 2009-12 00537c10  unit: RBX::VUDim2::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00537c10
//
// 00537c10  b8f8d6b100           mov eax, 0xb1d6f8
// 00537c15  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
