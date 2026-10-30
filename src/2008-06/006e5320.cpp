// from server: 100% by auto
// roc 2008-06 006e5320  unit: CXTPDockingPaneManager  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5320
//
// 006e5320  e8abffffff           call 0x6e52d0
// 006e5325  33c0                 xor eax, eax
// 006e5327  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnIdleUpdateCmdUI@CXTPDockingPaneManager@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
