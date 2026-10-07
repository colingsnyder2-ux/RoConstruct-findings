// roc 2012-06 00a31640  unit: CXTRegistryManager  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a31640
//
// 00a31640  83792000             cmp dword ptr [ecx + 0x20], 0
// 00a31644  741c                 je 0xa31662
// 00a31646  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00a31649  85c0                 test eax, eax
// 00a3164b  7415                 je 0xa31662
// 00a3164d  83781804             cmp dword ptr [eax + 0x18], 4
// 00a31651  750f                 jne 0xa31662
// 00a31653  83b98400000000       cmp dword ptr [ecx + 0x84], 0
// 00a3165a  7406                 je 0xa31662
// 00a3165c  b801000000           mov eax, 1
// 00a31661  c3                   ret 
// 00a31662  33c0                 xor eax, eax
// 00a31664  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?IsValid@CXTPDockingPaneLayout@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneLayout.cpp
