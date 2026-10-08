// roc 2009-12 007f5ea0  unit: CXTPControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5ea0
//
// 007f5ea0  b83852b600           mov eax, 0xb65238
// 007f5ea5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
