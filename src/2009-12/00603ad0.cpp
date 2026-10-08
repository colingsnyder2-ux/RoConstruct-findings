// roc 2009-12 00603ad0  unit: seg_00600000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00603ad0
//
// 00603ad0  b8d8219c00           mov eax, 0x9c21d8
// 00603ad5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
