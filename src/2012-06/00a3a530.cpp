// roc 2012-06 00a3a530  unit: CXTPDockingPaneTabbedContainer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a530
//
// 00a3a530  83b9f400000000       cmp dword ptr [ecx + 0xf4], 0
// 00a3a537  750f                 jne 0xa3a548
// 00a3a539  83c1ac               add ecx, -0x54
// 00a3a53c  e82ffcffff           call 0xa3a170
// 00a3a541  8bc8                 mov ecx, eax
// 00a3a543  e988d5f8ff           jmp 0x9c7ad0
// 00a3a548  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Reposition@CXTPDockingPaneTabbedContainer@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
