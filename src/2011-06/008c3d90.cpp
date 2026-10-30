// roc 2011-06 008c3d90  unit: CXTPDockingPaneTabbedContainer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c3d90
//
// 008c3d90  56                   push esi
// 008c3d91  8bf1                 mov esi, ecx
// 008c3d93  e878feffff           call 0x8c3c10
// 008c3d98  85c0                 test eax, eax
// 008c3d9a  7502                 jne 0x8c3d9e
// 008c3d9c  5e                   pop esi
// 008c3d9d  c3                   ret 
// 008c3d9e  8b86c4010000         mov eax, dword ptr [esi + 0x1c4]
// 008c3da4  5e                   pop esi
// 008c3da5  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsPaneMaximized@CXTPDockingPaneTabbedContainer@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
