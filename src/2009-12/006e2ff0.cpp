// roc 2009-12 006e2ff0  unit: RBX::AssemblyStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e2ff0
//
// 006e2ff0  b809000000           mov eax, 9
// 006e2ff5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
