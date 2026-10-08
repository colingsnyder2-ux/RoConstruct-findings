// roc 2011-06 008c2fc0  unit: CXTPDockingPaneTabbedContainer  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c2fc0
//
// 008c2fc0  56                   push esi
// 008c2fc1  8bf1                 mov esi, ecx
// 008c2fc3  83bea801000000       cmp dword ptr [esi + 0x1a8], 0
// 008c2fca  7420                 je 0x8c2fec
// 008c2fcc  c786a801000000000000 mov dword ptr [esi + 0x1a8], 0
// 008c2fd6  ff15381ba400         call dword ptr [0xa41b38]
// 008c2fdc  50                   push eax
// 008c2fdd  e84673f4ff           call 0x80a328
// 008c2fe2  3bc6                 cmp eax, esi
// 008c2fe4  7506                 jne 0x8c2fec
// 008c2fe6  ff15401ba400         call dword ptr [0xa41b40]
// 008c2fec  8bce                 mov ecx, esi
// 008c2fee  e83b76f4ff           call 0x80a62e
// 008c2ff3  5e                   pop esi
// 008c2ff4  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnLButtonUp@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
