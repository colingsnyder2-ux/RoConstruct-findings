// roc 2010-06 00866940  unit: CXTPDockingPaneTabbedContainer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00866940
//
// 00866940  56                   push esi
// 00866941  8bf1                 mov esi, ecx
// 00866943  e878feffff           call 0x8667c0
// 00866948  85c0                 test eax, eax
// 0086694a  7502                 jne 0x86694e
// 0086694c  5e                   pop esi
// 0086694d  c3                   ret 
// 0086694e  8b86c4010000         mov eax, dword ptr [esi + 0x1c4]
// 00866954  5e                   pop esi
// 00866955  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsPaneMaximized@CXTPDockingPaneTabbedContainer@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
