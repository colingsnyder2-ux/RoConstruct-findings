// roc 2009-12 0074b4f0  unit: RBX::GroundStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0074b4f0
//
// 0074b4f0  b802000000           mov eax, 2
// 0074b4f5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
