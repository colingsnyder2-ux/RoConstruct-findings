// roc 2009-12 007b60e0  unit: RBX::SpatialFilter  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b60e0
//
// 007b60e0  b807000000           mov eax, 7
// 007b60e5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
