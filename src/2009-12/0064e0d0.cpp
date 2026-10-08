// roc 2009-12 0064e0d0  unit: RBX::W4SurfaceType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064e0d0
//
// 0064e0d0  b8f8cfb200           mov eax, 0xb2cff8
// 0064e0d5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
