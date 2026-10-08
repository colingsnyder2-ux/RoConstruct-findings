// roc 2009-12 007b40c0  unit: RBX::EdgeStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b40c0
//
// 007b40c0  b803000000           mov eax, 3
// 007b40c5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
