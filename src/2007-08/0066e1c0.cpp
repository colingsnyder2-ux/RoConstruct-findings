// roc 2007-08 0066e1c0  unit: CXTPControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e1c0
//
// 0066e1c0  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 0066e1c6  e857a10c00           call 0x738322
// 0066e1cb  c1e816               shr eax, 0x16
// 0066e1ce  83e001               and eax, 1
// 0066e1d1  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsLayoutRTL@CXTPDockingPaneManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
