// roc 2009-12 0062d9d0  unit: RBX::TaskScheduler::W4PriorityMethod::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062d9d0
//
// 0062d9d0  b84083b200           mov eax, 0xb28340
// 0062d9d5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
