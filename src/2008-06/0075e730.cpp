// from server: 100% by auto
// roc 2008-06 0075e730  unit: CXTPDockingPaneTabbedContainer  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075e730
//
// 0075e730  56                   push esi
// 0075e731  8bf1                 mov esi, ecx
// 0075e733  83bea801000000       cmp dword ptr [esi + 0x1a8], 0
// 0075e73a  7420                 je 0x75e75c
// 0075e73c  c786a801000000000000 mov dword ptr [esi + 0x1a8], 0
// 0075e746  ff15ac2d8000         call dword ptr [0x802dac]
// 0075e74c  50                   push eax
// 0075e74d  e88c24f4ff           call 0x6a0bde
// 0075e752  3bc6                 cmp eax, esi
// 0075e754  7506                 jne 0x75e75c
// 0075e756  ff15b42d8000         call dword ptr [0x802db4]
// 0075e75c  8bce                 mov ecx, esi
// 0075e75e  e80525f4ff           call 0x6a0c68
// 0075e763  5e                   pop esi
// 0075e764  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnLButtonUp@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
