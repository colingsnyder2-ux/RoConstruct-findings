// roc 2009-12 0061cbf0  unit: seg_00610000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061cbf0
//
// 0061cbf0  b8808d5b00           mov eax, 0x5b8d80
// 0061cbf5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
