// roc 2012-06 00a3a760  unit: CXTPDockingPaneAutoHidePanel  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a760
//
// 00a3a760  56                   push esi
// 00a3a761  8bf1                 mov esi, ecx
// 00a3a763  83be9801000000       cmp dword ptr [esi + 0x198], 0
// 00a3a76a  7428                 je 0xa3a794
// 00a3a76c  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 00a3a772  85c9                 test ecx, ecx
// 00a3a774  741e                 je 0xa3a794
// 00a3a776  e81599faff           call 0x9e4090
// 00a3a77b  a808                 test al, 8
// 00a3a77d  7515                 jne 0xa3a794
// 00a3a77f  8d4e54               lea ecx, [esi + 0x54]
// 00a3a782  e8f9f9ffff           call 0xa3a180
// 00a3a787  83782c00             cmp dword ptr [eax + 0x2c], 0
// 00a3a78b  7407                 je 0xa3a794
// 00a3a78d  b801000000           mov eax, 1
// 00a3a792  5e                   pop esi
// 00a3a793  c3                   ret 
// 00a3a794  33c0                 xor eax, eax
// 00a3a796  5e                   pop esi
// 00a3a797  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsTitleVisible@CXTPDockingPaneTabbedContainer@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
