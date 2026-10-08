// roc 2009-12 007ec8a0  unit: W4_D3DFORMAT::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ec8a0
//
// 007ec8a0  b88451b600           mov eax, 0xb65184
// 007ec8a5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
