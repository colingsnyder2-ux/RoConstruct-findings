// roc 2009-12 0064d800  unit: RBX::Handles::W4VisualStyle::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064d800
//
// 0064d800  b80cceb200           mov eax, 0xb2ce0c
// 0064d805  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
