// roc 2009-12 0064daf0  unit: RBX::W4SoundType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064daf0
//
// 0064daf0  b8b0ceb200           mov eax, 0xb2ceb0
// 0064daf5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
