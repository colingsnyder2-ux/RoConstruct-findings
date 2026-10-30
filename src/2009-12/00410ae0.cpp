// roc 2009-12 00410ae0  unit: CRbxChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00410ae0
//
// 00410ae0  b82c1c9a00           mov eax, 0x9a1c2c
// 00410ae5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
