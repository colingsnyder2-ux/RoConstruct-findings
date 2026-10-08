// roc 2009-12 00426930  unit: boost::any::M::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00426930
//
// 00426930  b8d033b000           mov eax, 0xb033d0
// 00426935  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
