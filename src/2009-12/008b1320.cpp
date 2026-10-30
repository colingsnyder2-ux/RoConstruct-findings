// roc 2009-12 008b1320  unit: CXTPDockingPaneTabbedContainer  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1320
//
// 008b1320  56                   push esi
// 008b1321  8bf1                 mov esi, ecx
// 008b1323  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b1326  85c0                 test eax, eax
// 008b1328  743e                 je 0x8b1368
// 008b132a  50                   push eax
// 008b132b  ff15bccb9800         call dword ptr [0x98cbbc]
// 008b1331  50                   push eax
// 008b1332  e8f327f4ff           call 0x7f3b2a
// 008b1337  50                   push eax
// 008b1338  e87388ffff           call 0x8a9bb0
// 008b133d  50                   push eax
// 008b133e  e8fb28f4ff           call 0x7f3c3e
// 008b1343  83c408               add esp, 8
// 008b1346  85c0                 test eax, eax
// 008b1348  751e                 jne 0x8b1368
// 008b134a  83be0401000001       cmp dword ptr [esi + 0x104], 1
// 008b1351  7f0e                 jg 0x8b1361
// 008b1353  8d4e54               lea ecx, [esi + 0x54]
// 008b1356  e8f5f4ffff           call 0x8b0850
// 008b135b  83783000             cmp dword ptr [eax + 0x30], 0
// 008b135f  7407                 je 0x8b1368
// 008b1361  b801000000           mov eax, 1
// 008b1366  5e                   pop esi
// 008b1367  c3                   ret 
// 008b1368  33c0                 xor eax, eax
// 008b136a  5e                   pop esi
// 008b136b  c3                   ret 
// copied from an identical function in another client (function ?IsTabsVisible@CXTPDockingPaneTabbedContainer@@UBEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp