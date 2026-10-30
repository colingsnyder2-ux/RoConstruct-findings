// from server: 100% by auto
// roc 2007-08 0066e420  unit: CXTPDockingPaneManager  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e420
//
// 0066e420  e8abffffff           call 0x66e3d0
// 0066e425  33c0                 xor eax, eax
// 0066e427  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnIdleUpdateCmdUI@CXTPDockingPaneManager@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
