// roc 2008-06 0045aeb0  unit: G3D::TextureManager::TextureArgs  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045aeb0
//
// 0045aeb0  e8735b2400           call 0x6a0a28
// 0045aeb5  33c0                 xor eax, eax
// 0045aeb7  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnIdleUpdateCmdUI@CXTPDockingPaneManager@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
