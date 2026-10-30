// roc 2011-06 008c2330  unit: CXTPDockingPaneAutoHidePanel  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c2330
//
// 008c2330  56                   push esi
// 008c2331  8bf1                 mov esi, ecx
// 008c2333  83be9801000000       cmp dword ptr [esi + 0x198], 0
// 008c233a  7428                 je 0x8c2364
// 008c233c  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 008c2342  85c9                 test ecx, ecx
// 008c2344  741e                 je 0x8c2364
// 008c2346  e815c0faff           call 0x86e360
// 008c234b  a808                 test al, 8
// 008c234d  7515                 jne 0x8c2364
// 008c234f  8d4e54               lea ecx, [esi + 0x54]
// 008c2352  e819faffff           call 0x8c1d70
// 008c2357  83782c00             cmp dword ptr [eax + 0x2c], 0
// 008c235b  7407                 je 0x8c2364
// 008c235d  b801000000           mov eax, 1
// 008c2362  5e                   pop esi
// 008c2363  c3                   ret 
// 008c2364  33c0                 xor eax, eax
// 008c2366  5e                   pop esi
// 008c2367  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsTitleVisible@CXTPDockingPaneTabbedContainer@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
