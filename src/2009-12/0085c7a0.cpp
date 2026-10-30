// roc 2009-12 0085c7a0  unit: CXTPDockingPane  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085c7a0
//
// 0085c7a0  56                   push esi
// 0085c7a1  8bf1                 mov esi, ecx
// 0085c7a3  ff15eccb9800         call dword ptr [0x98cbec]
// 0085c7a9  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 0085c7af  5e                   pop esi
// 0085c7b0  85c9                 test ecx, ecx
// 0085c7b2  7416                 je 0x85c7ca
// 0085c7b4  3bc1                 cmp eax, ecx
// 0085c7b6  740c                 je 0x85c7c4
// 0085c7b8  50                   push eax
// 0085c7b9  51                   push ecx
// 0085c7ba  ff15f4ca9800         call dword ptr [0x98caf4]
// 0085c7c0  85c0                 test eax, eax
// 0085c7c2  7406                 je 0x85c7ca
// 0085c7c4  b801000000           mov eax, 1
// 0085c7c9  c3                   ret 
// 0085c7ca  33c0                 xor eax, eax
// 0085c7cc  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsFocus@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
