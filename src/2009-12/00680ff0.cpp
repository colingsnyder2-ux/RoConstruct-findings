// roc 2009-12 00680ff0  unit: RBX::VProtectedString::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00680ff0
//
// 00680ff0  b8d85db300           mov eax, 0xb35dd8
// 00680ff5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
