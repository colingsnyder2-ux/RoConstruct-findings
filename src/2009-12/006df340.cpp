// roc 2009-12 006df340  unit: RBX::VMeshId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006df340
//
// 006df340  b8d01fb400           mov eax, 0xb41fd0
// 006df345  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
