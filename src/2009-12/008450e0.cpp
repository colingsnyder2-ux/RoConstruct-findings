// roc 2009-12 008450e0  unit: CXTPOriginalControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008450e0
//
// 008450e0  b8d8a59f00           mov eax, 0x9fa5d8
// 008450e5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
