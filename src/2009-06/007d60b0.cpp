// roc 2009-06 007d60b0  unit: CXTPDockingPaneTabbedContainer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d60b0
//
// 007d60b0  83b9f400000000       cmp dword ptr [ecx + 0xf4], 0
// 007d60b7  750f                 jne 0x7d60c8
// 007d60b9  83c1ac               add ecx, -0x54
// 007d60bc  e83ffcffff           call 0x7d5d00
// 007d60c1  8bc8                 mov ecx, eax
// 007d60c3  e9c88df8ff           jmp 0x75ee90
// 007d60c8  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Reposition@CXTPDockingPaneTabbedContainer@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
