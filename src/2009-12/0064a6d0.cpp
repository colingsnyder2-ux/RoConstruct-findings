// roc 2009-12 0064a6d0  unit: RBX::GuiObject::W4SizeConstraint::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064a6d0
//
// 0064a6d0  b8dcc2b200           mov eax, 0xb2c2dc
// 0064a6d5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
