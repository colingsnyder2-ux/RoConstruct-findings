// roc 2010-06 00865b70  unit: CXTPDockingPaneTabbedContainer  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00865b70
//
// 00865b70  56                   push esi
// 00865b71  8bf1                 mov esi, ecx
// 00865b73  83bea801000000       cmp dword ptr [esi + 0x1a8], 0
// 00865b7a  7420                 je 0x865b9c
// 00865b7c  c786a801000000000000 mov dword ptr [esi + 0x1a8], 0
// 00865b86  ff1584bc9e00         call dword ptr [0x9ebc84]
// 00865b8c  50                   push eax
// 00865b8d  e8d820f4ff           call 0x7a7c6a
// 00865b92  3bc6                 cmp eax, esi
// 00865b94  7506                 jne 0x865b9c
// 00865b96  ff158cbc9e00         call dword ptr [0x9ebc8c]
// 00865b9c  8bce                 mov ecx, esi
// 00865b9e  e8cd23f4ff           call 0x7a7f70
// 00865ba3  5e                   pop esi
// 00865ba4  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnLButtonUp@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
