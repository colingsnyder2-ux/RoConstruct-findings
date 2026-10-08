// roc 2009-06 007d62c0  unit: CXTPDockingPaneTabbedContainer  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d62c0
//
// 007d62c0  56                   push esi
// 007d62c1  8bf1                 mov esi, ecx
// 007d62c3  83be9801000000       cmp dword ptr [esi + 0x198], 0
// 007d62ca  7428                 je 0x7d62f4
// 007d62cc  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 007d62d2  85c9                 test ecx, ecx
// 007d62d4  741e                 je 0x7d62f4
// 007d62d6  e855b8faff           call 0x781b30
// 007d62db  a808                 test al, 8
// 007d62dd  7515                 jne 0x7d62f4
// 007d62df  8d4e54               lea ecx, [esi + 0x54]
// 007d62e2  e829faffff           call 0x7d5d10
// 007d62e7  83782c00             cmp dword ptr [eax + 0x2c], 0
// 007d62eb  7407                 je 0x7d62f4
// 007d62ed  b801000000           mov eax, 1
// 007d62f2  5e                   pop esi
// 007d62f3  c3                   ret 
// 007d62f4  33c0                 xor eax, eax
// 007d62f6  5e                   pop esi
// 007d62f7  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?IsTitleVisible@CXTPDockingPaneTabbedContainer@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
