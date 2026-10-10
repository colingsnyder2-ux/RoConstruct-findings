// roc 2008-06 0075dfc0  unit: CXTPDockingPaneTabbedContainer  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075dfc0
//
// 0075dfc0  56                   push esi
// 0075dfc1  8bf1                 mov esi, ecx
// 0075dfc3  8b4620               mov eax, dword ptr [esi + 0x20]
// 0075dfc6  85c0                 test eax, eax
// 0075dfc8  743e                 je 0x75e008
// 0075dfca  50                   push eax
// 0075dfcb  ff15f82d8000         call dword ptr [0x802df8]
// 0075dfd1  50                   push eax
// 0075dfd2  e8072cf4ff           call 0x6a0bde
// 0075dfd7  50                   push eax
// 0075dfd8  e8f387ffff           call 0x7567d0
// 0075dfdd  50                   push eax
// 0075dfde  e8432cf4ff           call 0x6a0c26
// 0075dfe3  83c408               add esp, 8
// 0075dfe6  85c0                 test eax, eax
// 0075dfe8  751e                 jne 0x75e008
// 0075dfea  83be0401000001       cmp dword ptr [esi + 0x104], 1
// 0075dff1  7f0e                 jg 0x75e001
// 0075dff3  8d4e54               lea ecx, [esi + 0x54]
// 0075dff6  e8b5f4ffff           call 0x75d4b0
// 0075dffb  83783000             cmp dword ptr [eax + 0x30], 0
// 0075dfff  7407                 je 0x75e008
// 0075e001  b801000000           mov eax, 1
// 0075e006  5e                   pop esi
// 0075e007  c3                   ret 
// 0075e008  33c0                 xor eax, eax
// 0075e00a  5e                   pop esi
// 0075e00b  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsTabsVisible@CXTPDockingPaneTabbedContainer@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
