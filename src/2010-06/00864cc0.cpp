// roc 2010-06 00864cc0  unit: CXTPDockingPaneTabbedContainer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00864cc0
//
// 00864cc0  83b9f400000000       cmp dword ptr [ecx + 0xf4], 0
// 00864cc7  750f                 jne 0x864cd8
// 00864cc9  83c1ac               add ecx, -0x54
// 00864ccc  e83ffcffff           call 0x864910
// 00864cd1  8bc8                 mov ecx, eax
// 00864cd3  e9d890f8ff           jmp 0x7eddb0
// 00864cd8  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?Reposition@CXTPDockingPaneTabbedContainer@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
