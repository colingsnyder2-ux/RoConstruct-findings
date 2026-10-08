// roc 2010-06 00866960  unit: CXTPDockingPaneTabbedContainer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00866960
//
// 00866960  56                   push esi
// 00866961  8bf1                 mov esi, ecx
// 00866963  e858feffff           call 0x8667c0
// 00866968  85c0                 test eax, eax
// 0086696a  7502                 jne 0x86696e
// 0086696c  5e                   pop esi
// 0086696d  c3                   ret 
// 0086696e  33c0                 xor eax, eax
// 00866970  3986c4010000         cmp dword ptr [esi + 0x1c4], eax
// 00866976  5e                   pop esi
// 00866977  0f94c0               sete al
// 0086697a  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsPaneRestored@CXTPDockingPaneTabbedContainer@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
