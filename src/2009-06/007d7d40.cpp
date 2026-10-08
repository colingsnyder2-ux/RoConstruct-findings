// roc 2009-06 007d7d40  unit: CXTPDockingPaneTabbedContainer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d7d40
//
// 007d7d40  56                   push esi
// 007d7d41  8bf1                 mov esi, ecx
// 007d7d43  e858feffff           call 0x7d7ba0
// 007d7d48  85c0                 test eax, eax
// 007d7d4a  7502                 jne 0x7d7d4e
// 007d7d4c  5e                   pop esi
// 007d7d4d  c3                   ret 
// 007d7d4e  33c0                 xor eax, eax
// 007d7d50  3986c4010000         cmp dword ptr [esi + 0x1c4], eax
// 007d7d56  5e                   pop esi
// 007d7d57  0f94c0               sete al
// 007d7d5a  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsPaneRestored@CXTPDockingPaneTabbedContainer@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
