// roc 2009-12 008c4920  unit: CXTPImageEditorDlg  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c4920
//
// 008c4920  b8b092a000           mov eax, 0xa092b0
// 008c4925  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
