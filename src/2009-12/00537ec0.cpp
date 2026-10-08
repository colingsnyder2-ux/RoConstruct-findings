// roc 2009-12 00537ec0  unit: RBX::VContentId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00537ec0
//
// 00537ec0  b83434b000           mov eax, 0xb03434
// 00537ec5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
