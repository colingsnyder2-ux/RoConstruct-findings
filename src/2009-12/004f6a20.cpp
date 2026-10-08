// roc 2009-12 004f6a20  unit: RBX::Network::Player::W4BuildPermission::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f6a20
//
// 004f6a20  b86029b100           mov eax, 0xb12960
// 004f6a25  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
