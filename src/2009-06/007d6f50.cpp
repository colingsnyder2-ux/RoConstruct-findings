// roc 2009-06 007d6f50  unit: CXTPDockingPaneTabbedContainer  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d6f50
//
// 007d6f50  56                   push esi
// 007d6f51  8bf1                 mov esi, ecx
// 007d6f53  83bea801000000       cmp dword ptr [esi + 0x1a8], 0
// 007d6f5a  7420                 je 0x7d6f7c
// 007d6f5c  c786a801000000000000 mov dword ptr [esi + 0x1a8], 0
// 007d6f66  ff153cee8900         call dword ptr [0x89ee3c]
// 007d6f6c  50                   push eax
// 007d6f6d  e8901df4ff           call 0x718d02
// 007d6f72  3bc6                 cmp eax, esi
// 007d6f74  7506                 jne 0x7d6f7c
// 007d6f76  ff1544ee8900         call dword ptr [0x89ee44]
// 007d6f7c  8bce                 mov ecx, esi
// 007d6f7e  e88520f4ff           call 0x719008
// 007d6f83  5e                   pop esi
// 007d6f84  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnLButtonUp@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
