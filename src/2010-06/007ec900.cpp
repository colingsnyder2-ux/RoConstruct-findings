// roc 2010-06 007ec900  unit: CXTPControls  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ec900
//
// 007ec900  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 007ec906  e8d9041900           call 0x97cde4
// 007ec90b  c1e816               shr eax, 0x16
// 007ec90e  83e001               and eax, 1
// 007ec911  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsLayoutRTL@CXTPDockingPaneManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
