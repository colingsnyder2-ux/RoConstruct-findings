// roc 2009-12 00642c50  unit: RBX::W4NormalId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00642c50
//
// 00642c50  b85cb8b200           mov eax, 0xb2b85c
// 00642c55  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
