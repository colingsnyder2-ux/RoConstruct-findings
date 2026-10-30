// roc 2012-06 00a3b3f0  unit: CXTPDockingPaneTabbedContainer  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3b3f0
//
// 00a3b3f0  56                   push esi
// 00a3b3f1  8bf1                 mov esi, ecx
// 00a3b3f3  83bea801000000       cmp dword ptr [esi + 0x1a8], 0
// 00a3b3fa  7420                 je 0xa3b41c
// 00a3b3fc  c786a801000000000000 mov dword ptr [esi + 0x1a8], 0
// 00a3b406  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a3b40c  50                   push eax
// 00a3b40d  e85472f4ff           call 0x982666
// 00a3b412  3bc6                 cmp eax, esi
// 00a3b414  7506                 jne 0xa3b41c
// 00a3b416  ff15743ab200         call dword ptr [0xb23a74]
// 00a3b41c  8bce                 mov ecx, esi
// 00a3b41e  e8bb72f4ff           call 0x9826de
// 00a3b423  5e                   pop esi
// 00a3b424  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnLButtonUp@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
