// roc 2009-12 008f1a80  unit: CXTPRibbonControlSystemPopupBarListItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1a80
//
// 008f1a80  b890afb600           mov eax, 0xb6af90
// 008f1a85  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
