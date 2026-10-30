// roc 2009-12 0064d220  unit: RBX::BasicPartInstance::W4LegacyPartType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064d220
//
// 0064d220  b85cccb200           mov eax, 0xb2cc5c
// 0064d225  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
