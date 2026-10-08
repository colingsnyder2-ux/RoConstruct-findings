// roc 2010-06 00810770  unit: CXTPDockingPane  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00810770
//
// 00810770  56                   push esi
// 00810771  8bf1                 mov esi, ecx
// 00810773  ff1580ba9e00         call dword ptr [0x9eba80]
// 00810779  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 0081077f  5e                   pop esi
// 00810780  85c9                 test ecx, ecx
// 00810782  7416                 je 0x81079a
// 00810784  3bc1                 cmp eax, ecx
// 00810786  740c                 je 0x810794
// 00810788  50                   push eax
// 00810789  51                   push ecx
// 0081078a  ff15acba9e00         call dword ptr [0x9ebaac]
// 00810790  85c0                 test eax, eax
// 00810792  7406                 je 0x81079a
// 00810794  b801000000           mov eax, 1
// 00810799  c3                   ret 
// 0081079a  33c0                 xor eax, eax
// 0081079c  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsFocus@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
