// roc 2011-06 008c2110  unit: CXTPDockingPaneTabbedContainer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c2110
//
// 008c2110  83b9f400000000       cmp dword ptr [ecx + 0xf4], 0
// 008c2117  750f                 jne 0x8c2128
// 008c2119  83c1ac               add ecx, -0x54
// 008c211c  e83ffcffff           call 0x8c1d60
// 008c2121  8bc8                 mov ecx, eax
// 008c2123  e9d8d4f8ff           jmp 0x84f600
// 008c2128  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Reposition@CXTPDockingPaneTabbedContainer@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
