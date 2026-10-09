// roc 2009-12 008b0bf0  unit: CXTPDockingPaneTabbedContainer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0bf0
//
// 008b0bf0  83b9f400000000       cmp dword ptr [ecx + 0xf4], 0
// 008b0bf7  750f                 jne 0x8b0c08
// 008b0bf9  83c1ac               add ecx, -0x54
// 008b0bfc  e83ffcffff           call 0x8b0840
// 008b0c01  8bc8                 mov ecx, eax
// 008b0c03  e94890f8ff           jmp 0x839c50
// 008b0c08  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Reposition@CXTPDockingPaneTabbedContainer@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
