// roc 2011-06 008c3db0  unit: CXTPDockingPaneTabbedContainer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c3db0
//
// 008c3db0  56                   push esi
// 008c3db1  8bf1                 mov esi, ecx
// 008c3db3  e858feffff           call 0x8c3c10
// 008c3db8  85c0                 test eax, eax
// 008c3dba  7502                 jne 0x8c3dbe
// 008c3dbc  5e                   pop esi
// 008c3dbd  c3                   ret 
// 008c3dbe  33c0                 xor eax, eax
// 008c3dc0  3986c4010000         cmp dword ptr [esi + 0x1c4], eax
// 008c3dc6  5e                   pop esi
// 008c3dc7  0f94c0               sete al
// 008c3dca  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsPaneRestored@CXTPDockingPaneTabbedContainer@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
