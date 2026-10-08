// roc 2009-06 007d7d20  unit: CXTPDockingPaneTabbedContainer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d7d20
//
// 007d7d20  56                   push esi
// 007d7d21  8bf1                 mov esi, ecx
// 007d7d23  e878feffff           call 0x7d7ba0
// 007d7d28  85c0                 test eax, eax
// 007d7d2a  7502                 jne 0x7d7d2e
// 007d7d2c  5e                   pop esi
// 007d7d2d  c3                   ret 
// 007d7d2e  8b86c4010000         mov eax, dword ptr [esi + 0x1c4]
// 007d7d34  5e                   pop esi
// 007d7d35  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsPaneMaximized@CXTPDockingPaneTabbedContainer@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
