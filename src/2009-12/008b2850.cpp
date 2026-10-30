// roc 2009-12 008b2850  unit: CXTPDockingPaneTabbedContainer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b2850
//
// 008b2850  56                   push esi
// 008b2851  8bf1                 mov esi, ecx
// 008b2853  e878feffff           call 0x8b26d0
// 008b2858  85c0                 test eax, eax
// 008b285a  7502                 jne 0x8b285e
// 008b285c  5e                   pop esi
// 008b285d  c3                   ret 
// 008b285e  8b86c4010000         mov eax, dword ptr [esi + 0x1c4]
// 008b2864  5e                   pop esi
// 008b2865  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsPaneMaximized@CXTPDockingPaneTabbedContainer@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
