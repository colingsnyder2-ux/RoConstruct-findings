// roc 2009-12 0064b290  unit: RBX::LegacyController::W4InputType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064b290
//
// 0064b290  b8acc5b200           mov eax, 0xb2c5ac
// 0064b295  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
