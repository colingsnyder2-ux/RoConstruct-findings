// roc 2009-12 00630220  unit: RBX::EThrottle::W4EThrottleType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00630220
//
// 00630220  b88089b200           mov eax, 0xb28980
// 00630225  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
