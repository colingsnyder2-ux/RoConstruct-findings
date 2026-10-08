// from server: 100% by auto
// roc 2008-06 0075f500  unit: CXTPDockingPaneTabbedContainer  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075f500
//
// 0075f500  56                   push esi
// 0075f501  8bf1                 mov esi, ecx
// 0075f503  e878feffff           call 0x75f380
// 0075f508  85c0                 test eax, eax
// 0075f50a  7502                 jne 0x75f50e
// 0075f50c  5e                   pop esi
// 0075f50d  c3                   ret 
// 0075f50e  8b86c4010000         mov eax, dword ptr [esi + 0x1c4]
// 0075f514  5e                   pop esi
// 0075f515  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsPaneMaximized@CXTPDockingPaneTabbedContainer@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
