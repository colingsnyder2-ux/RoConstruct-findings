// roc 2009-12 00409780  unit: boost::any::_N::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00409780
//
// 00409780  b83c03b000           mov eax, 0xb0033c
// 00409785  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
