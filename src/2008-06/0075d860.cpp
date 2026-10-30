// from server: 100% by auto
// roc 2008-06 0075d860  unit: CXTPDockingPaneTabbedContainer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d860
//
// 0075d860  83b9f400000000       cmp dword ptr [ecx + 0xf4], 0
// 0075d867  750f                 jne 0x75d878
// 0075d869  83c1ac               add ecx, -0x54
// 0075d86c  e82ffcffff           call 0x75d4a0
// 0075d871  8bc8                 mov ecx, eax
// 0075d873  e9f88cf8ff           jmp 0x6e6570
// 0075d878  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Reposition@CXTPDockingPaneTabbedContainer@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
