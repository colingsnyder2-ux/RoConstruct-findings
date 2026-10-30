// from server: 100% by auto
// roc 2008-06 00707200  unit: CXTPDockingPane  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707200
//
// 00707200  56                   push esi
// 00707201  8bf1                 mov esi, ecx
// 00707203  ff15102e8000         call dword ptr [0x802e10]
// 00707209  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 0070720f  5e                   pop esi
// 00707210  85c9                 test ecx, ecx
// 00707212  7416                 je 0x70722a
// 00707214  3bc1                 cmp eax, ecx
// 00707216  740c                 je 0x707224
// 00707218  50                   push eax
// 00707219  51                   push ecx
// 0070721a  ff15742b8000         call dword ptr [0x802b74]
// 00707220  85c0                 test eax, eax
// 00707222  7406                 je 0x70722a
// 00707224  b801000000           mov eax, 1
// 00707229  c3                   ret 
// 0070722a  33c0                 xor eax, eax
// 0070722c  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsFocus@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
