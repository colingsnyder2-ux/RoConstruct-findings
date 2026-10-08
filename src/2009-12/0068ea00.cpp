// roc 2009-12 0068ea00  unit: RBX::VTextureId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068ea00
//
// 0068ea00  b89c72b300           mov eax, 0xb3729c
// 0068ea05  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
