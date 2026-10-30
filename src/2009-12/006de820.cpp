// roc 2009-12 006de820  unit: RBX::ExtrudedPartInstance  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006de820
//
// 006de820  b8941ab400           mov eax, 0xb41a94
// 006de825  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
