// roc 2009-12 008b2870  unit: CXTPDockingPaneTabbedContainer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b2870
//
// 008b2870  56                   push esi
// 008b2871  8bf1                 mov esi, ecx
// 008b2873  e858feffff           call 0x8b26d0
// 008b2878  85c0                 test eax, eax
// 008b287a  7502                 jne 0x8b287e
// 008b287c  5e                   pop esi
// 008b287d  c3                   ret 
// 008b287e  33c0                 xor eax, eax
// 008b2880  3986c4010000         cmp dword ptr [esi + 0x1c4], eax
// 008b2886  5e                   pop esi
// 008b2887  0f94c0               sete al
// 008b288a  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsPaneRestored@CXTPDockingPaneTabbedContainer@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
