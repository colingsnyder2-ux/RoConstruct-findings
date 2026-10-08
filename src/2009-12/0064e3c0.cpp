// roc 2009-12 0064e3c0  unit: RBX::PartInstance::W4FormFactor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064e3c0
//
// 0064e3c0  b898d0b200           mov eax, 0xb2d098
// 0064e3c5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
