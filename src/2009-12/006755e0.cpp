// roc 2009-12 006755e0  unit: RBX::MechToAssemblyStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006755e0
//
// 006755e0  b808000000           mov eax, 8
// 006755e5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
