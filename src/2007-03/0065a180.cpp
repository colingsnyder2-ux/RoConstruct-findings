// roc 2007-03 0065a180  unit: seg_00650000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a180
//
// 0065a180  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 0065a186  e8fb080e00           call 0x73aa86
// 0065a18b  c1e816               shr eax, 0x16
// 0065a18e  83e001               and eax, 1
// 0065a191  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?IsLayoutRTL@CXTPDockingPaneManager@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
