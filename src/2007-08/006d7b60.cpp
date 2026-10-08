// from server: 100% by auto
// roc 2007-08 006d7b60  unit: CXTRegistryManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d7b60
//
// 006d7b60  83792000             cmp dword ptr [ecx + 0x20], 0
// 006d7b64  741c                 je 0x6d7b82
// 006d7b66  8b4124               mov eax, dword ptr [ecx + 0x24]
// 006d7b69  85c0                 test eax, eax
// 006d7b6b  7415                 je 0x6d7b82
// 006d7b6d  83781804             cmp dword ptr [eax + 0x18], 4
// 006d7b71  750f                 jne 0x6d7b82
// 006d7b73  83b98400000000       cmp dword ptr [ecx + 0x84], 0
// 006d7b7a  7406                 je 0x6d7b82
// 006d7b7c  b801000000           mov eax, 1
// 006d7b81  c3                   ret 
// 006d7b82  33c0                 xor eax, eax
// 006d7b84  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?IsValid@CXTPDockingPaneLayout@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneLayout.cpp
