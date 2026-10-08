// roc 2009-12 00444810  unit: G3D::VVector2int16::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00444810
//
// 00444810  b88480b000           mov eax, 0xb08084
// 00444815  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
