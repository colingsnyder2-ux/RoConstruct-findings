// roc 2009-12 006b4180  unit: RBX::Soundscape::VSoundId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b4180
//
// 006b4180  b848a8b300           mov eax, 0xb3a848
// 006b4185  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
