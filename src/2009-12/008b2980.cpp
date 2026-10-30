// roc 2009-12 008b2980  unit: CXTPDockingPaneTabbedContainer  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b2980
//
// 008b2980  56                   push esi
// 008b2981  8b742408             mov esi, dword ptr [esp + 8]
// 008b2985  8b4614               mov eax, dword ptr [esi + 0x14]
// 008b2988  3df1240000           cmp eax, 0x24f1
// 008b298d  7519                 jne 0x8b29a8
// 008b298f  8b8950010000         mov ecx, dword ptr [ecx + 0x150]
// 008b2995  85c9                 test ecx, ecx
// 008b2997  7409                 je 0x8b29a2
// 008b2999  e8e2a1faff           call 0x85cb80
// 008b299e  a801                 test al, 1
// 008b29a0  7466                 je 0x8b2a08
// 008b29a2  33c0                 xor eax, eax
// 008b29a4  5e                   pop esi
// 008b29a5  c20400               ret 4
// 008b29a8  3df0240000           cmp eax, 0x24f0
// 008b29ad  7519                 jne 0x8b29c8
// 008b29af  8b8950010000         mov ecx, dword ptr [ecx + 0x150]
// 008b29b5  85c9                 test ecx, ecx
// 008b29b7  74e9                 je 0x8b29a2
// 008b29b9  e8c2a1faff           call 0x85cb80
// 008b29be  a802                 test al, 2
// 008b29c0  75e0                 jne 0x8b29a2
// 008b29c2  f6462001             test byte ptr [esi + 0x20], 1
// 008b29c6  eb3e                 jmp 0x8b2a06
// 008b29c8  3df2240000           cmp eax, 0x24f2
// 008b29cd  750c                 jne 0x8b29db
// 008b29cf  83c1ac               add ecx, -0x54
// 008b29d2  e899feffff           call 0x8b2870
// 008b29d7  5e                   pop esi
// 008b29d8  c20400               ret 4
// 008b29db  3df3240000           cmp eax, 0x24f3
// 008b29e0  750c                 jne 0x8b29ee
// 008b29e2  83c1ac               add ecx, -0x54
// 008b29e5  e866feffff           call 0x8b2850
// 008b29ea  5e                   pop esi
// 008b29eb  c20400               ret 4
// 008b29ee  3df4240000           cmp eax, 0x24f4
// 008b29f3  7513                 jne 0x8b2a08
// 008b29f5  8b8950010000         mov ecx, dword ptr [ecx + 0x150]
// 008b29fb  85c9                 test ecx, ecx
// 008b29fd  74a3                 je 0x8b29a2
// 008b29ff  e87ca1faff           call 0x85cb80
// 008b2a04  a810                 test al, 0x10
// 008b2a06  749a                 je 0x8b29a2
// 008b2a08  b801000000           mov eax, 1
// 008b2a0d  5e                   pop esi
// 008b2a0e  c20400               ret 4
// copied from an identical function in another client (function ?IsCaptionButtonVisible@CXTPDockingPaneTabbedContainer@@MAEHPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp