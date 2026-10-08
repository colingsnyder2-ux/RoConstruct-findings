// roc 2012-06 00a3c1e0  unit: CXTPDockingPaneTabbedContainer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3c1e0
//
// 00a3c1e0  56                   push esi
// 00a3c1e1  8bf1                 mov esi, ecx
// 00a3c1e3  e858feffff           call 0xa3c040
// 00a3c1e8  85c0                 test eax, eax
// 00a3c1ea  7502                 jne 0xa3c1ee
// 00a3c1ec  5e                   pop esi
// 00a3c1ed  c3                   ret 
// 00a3c1ee  33c0                 xor eax, eax
// 00a3c1f0  3986c4010000         cmp dword ptr [esi + 0x1c4], eax
// 00a3c1f6  5e                   pop esi
// 00a3c1f7  0f94c0               sete al
// 00a3c1fa  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsPaneRestored@CXTPDockingPaneTabbedContainer@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
