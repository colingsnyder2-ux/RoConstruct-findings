// roc 2009-12 0064acb0  unit: RBX::GuiText::W4YAlignment::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064acb0
//
// 0064acb0  b83cc4b200           mov eax, 0xb2c43c
// 0064acb5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
