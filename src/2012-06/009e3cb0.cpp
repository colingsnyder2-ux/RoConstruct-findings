// roc 2012-06 009e3cb0  unit: CXTPDockingPane  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3cb0
//
// 009e3cb0  56                   push esi
// 009e3cb1  8bf1                 mov esi, ecx
// 009e3cb3  ff15e83bb200         call dword ptr [0xb23be8]
// 009e3cb9  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 009e3cbf  5e                   pop esi
// 009e3cc0  85c9                 test ecx, ecx
// 009e3cc2  7416                 je 0x9e3cda
// 009e3cc4  3bc1                 cmp eax, ecx
// 009e3cc6  740c                 je 0x9e3cd4
// 009e3cc8  50                   push eax
// 009e3cc9  51                   push ecx
// 009e3cca  ff15143db200         call dword ptr [0xb23d14]
// 009e3cd0  85c0                 test eax, eax
// 009e3cd2  7406                 je 0x9e3cda
// 009e3cd4  b801000000           mov eax, 1
// 009e3cd9  c3                   ret 
// 009e3cda  33c0                 xor eax, eax
// 009e3cdc  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?IsFocus@CXTPDockingPane@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
