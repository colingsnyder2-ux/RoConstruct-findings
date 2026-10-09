// roc 2009-12 008b1a90  unit: CXTPDockingPaneTabbedContainer  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1a90
//
// 008b1a90  56                   push esi
// 008b1a91  8bf1                 mov esi, ecx
// 008b1a93  83bea801000000       cmp dword ptr [esi + 0x1a8], 0
// 008b1a9a  7420                 je 0x8b1abc
// 008b1a9c  c786a801000000000000 mov dword ptr [esi + 0x1a8], 0
// 008b1aa6  ff1528cc9800         call dword ptr [0x98cc28]
// 008b1aac  50                   push eax
// 008b1aad  e87820f4ff           call 0x7f3b2a
// 008b1ab2  3bc6                 cmp eax, esi
// 008b1ab4  7506                 jne 0x8b1abc
// 008b1ab6  ff1520cc9800         call dword ptr [0x98cc20]
// 008b1abc  8bce                 mov ecx, esi
// 008b1abe  e86d23f4ff           call 0x7f3e30
// 008b1ac3  5e                   pop esi
// 008b1ac4  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnLButtonUp@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
