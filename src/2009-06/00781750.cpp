// roc 2009-06 00781750  unit: CXTPDockingPane  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00781750
//
// 00781750  56                   push esi
// 00781751  8bf1                 mov esi, ecx
// 00781753  ff1578ee8900         call dword ptr [0x89ee78]
// 00781759  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 0078175f  5e                   pop esi
// 00781760  85c9                 test ecx, ecx
// 00781762  7416                 je 0x78177a
// 00781764  3bc1                 cmp eax, ecx
// 00781766  740c                 je 0x781774
// 00781768  50                   push eax
// 00781769  51                   push ecx
// 0078176a  ff1508ef8900         call dword ptr [0x89ef08]
// 00781770  85c0                 test eax, eax
// 00781772  7406                 je 0x78177a
// 00781774  b801000000           mov eax, 1
// 00781779  c3                   ret 
// 0078177a  33c0                 xor eax, eax
// 0078177c  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsFocus@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
