// roc 2009-12 00505690  unit: boost::any::N::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00505690
//
// 00505690  b8dc33b000           mov eax, 0xb033dc
// 00505695  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
