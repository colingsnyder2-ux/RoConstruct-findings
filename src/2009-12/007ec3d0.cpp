// roc 2009-12 007ec3d0  unit: W4_D3DDEVTYPE::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ec3d0
//
// 007ec3d0  b8fc50b600           mov eax, 0xb650fc
// 007ec3d5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
