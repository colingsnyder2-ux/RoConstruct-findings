// roc 2009-12 00426a30  unit: boost::any::H::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00426a30
//
// 00426a30  b8c433b000           mov eax, 0xb033c4
// 00426a35  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
