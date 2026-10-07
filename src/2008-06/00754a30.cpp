// roc 2008-06 00754a30  unit: CXTRegistryManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00754a30
//
// 00754a30  83792000             cmp dword ptr [ecx + 0x20], 0
// 00754a34  741c                 je 0x754a52
// 00754a36  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00754a39  85c0                 test eax, eax
// 00754a3b  7415                 je 0x754a52
// 00754a3d  83781804             cmp dword ptr [eax + 0x18], 4
// 00754a41  750f                 jne 0x754a52
// 00754a43  83b98400000000       cmp dword ptr [ecx + 0x84], 0
// 00754a4a  7406                 je 0x754a52
// 00754a4c  b801000000           mov eax, 1
// 00754a51  c3                   ret 
// 00754a52  33c0                 xor eax, eax
// 00754a54  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?IsValid@CXTPDockingPaneLayout@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
