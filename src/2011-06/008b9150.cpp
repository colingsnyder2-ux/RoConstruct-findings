// from server: 100% by auto
// roc 2011-06 008b9150  unit: CXTRegistryManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b9150
//
// 008b9150  83792000             cmp dword ptr [ecx + 0x20], 0
// 008b9154  741c                 je 0x8b9172
// 008b9156  8b4124               mov eax, dword ptr [ecx + 0x24]
// 008b9159  85c0                 test eax, eax
// 008b915b  7415                 je 0x8b9172
// 008b915d  83781804             cmp dword ptr [eax + 0x18], 4
// 008b9161  750f                 jne 0x8b9172
// 008b9163  83b98400000000       cmp dword ptr [ecx + 0x84], 0
// 008b916a  7406                 je 0x8b9172
// 008b916c  b801000000           mov eax, 1
// 008b9171  c3                   ret 
// 008b9172  33c0                 xor eax, eax
// 008b9174  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?IsValid@CXTPDockingPaneLayout@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneLayout.cpp
