// roc 2008-06 0075f520  unit: CXTPDockingPaneTabbedContainer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075f520
//
// 0075f520  56                   push esi
// 0075f521  8bf1                 mov esi, ecx
// 0075f523  e858feffff           call 0x75f380
// 0075f528  85c0                 test eax, eax
// 0075f52a  7502                 jne 0x75f52e
// 0075f52c  5e                   pop esi
// 0075f52d  c3                   ret 
// 0075f52e  33c0                 xor eax, eax
// 0075f530  3986c4010000         cmp dword ptr [esi + 0x1c4], eax
// 0075f536  5e                   pop esi
// 0075f537  0f94c0               sete al
// 0075f53a  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsPaneRestored@CXTPDockingPaneTabbedContainer@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
