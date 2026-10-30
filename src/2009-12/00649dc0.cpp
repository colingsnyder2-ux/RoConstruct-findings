// roc 2009-12 00649dc0  unit: RBX::Action::W4ActionType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00649dc0
//
// 00649dc0  b8fcc0b200           mov eax, 0xb2c0fc
// 00649dc5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
