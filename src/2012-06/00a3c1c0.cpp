// roc 2012-06 00a3c1c0  unit: CXTPDockingPaneTabbedContainer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3c1c0
//
// 00a3c1c0  56                   push esi
// 00a3c1c1  8bf1                 mov esi, ecx
// 00a3c1c3  e878feffff           call 0xa3c040
// 00a3c1c8  85c0                 test eax, eax
// 00a3c1ca  7502                 jne 0xa3c1ce
// 00a3c1cc  5e                   pop esi
// 00a3c1cd  c3                   ret 
// 00a3c1ce  8b86c4010000         mov eax, dword ptr [esi + 0x1c4]
// 00a3c1d4  5e                   pop esi
// 00a3c1d5  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsPaneMaximized@CXTPDockingPaneTabbedContainer@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
