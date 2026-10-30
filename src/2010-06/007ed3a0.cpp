// roc 2010-06 007ed3a0  unit: CXTPDockingPaneManager  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ed3a0
//
// 007ed3a0  837c240400           cmp dword ptr [esp + 4], 0
// 007ed3a5  56                   push esi
// 007ed3a6  57                   push edi
// 007ed3a7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007ed3ab  8bf1                 mov esi, ecx
// 007ed3ad  7452                 je 0x7ed401
// 007ed3af  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 007ed3b5  3bc7                 cmp eax, edi
// 007ed3b7  7471                 je 0x7ed42a
// 007ed3b9  85c0                 test eax, eax
// 007ed3bb  7417                 je 0x7ed3d4
// 007ed3bd  6a00                 push 0
// 007ed3bf  6a00                 push 0
// 007ed3c1  50                   push eax
// 007ed3c2  6a0f                 push 0xf
// 007ed3c4  e877f3ffff           call 0x7ec740
// 007ed3c9  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 007ed3cf  e848abfbff           call 0x7a7f1c
// 007ed3d4  89bed8000000         mov dword ptr [esi + 0xd8], edi
// 007ed3da  85ff                 test edi, edi
// 007ed3dc  744c                 je 0x7ed42a
// 007ed3de  83c704               add edi, 4
// 007ed3e1  57                   push edi
// 007ed3e2  ff1580a39e00         call dword ptr [0x9ea380]
// 007ed3e8  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 007ed3ee  6a00                 push 0
// 007ed3f0  6a00                 push 0
// 007ed3f2  50                   push eax
// 007ed3f3  6a0e                 push 0xe
// 007ed3f5  8bce                 mov ecx, esi
// 007ed3f7  e844f3ffff           call 0x7ec740
// 007ed3fc  5f                   pop edi
// 007ed3fd  5e                   pop esi
// 007ed3fe  c20800               ret 8
// 007ed401  85ff                 test edi, edi
// 007ed403  7425                 je 0x7ed42a
// 007ed405  39bed8000000         cmp dword ptr [esi + 0xd8], edi
// 007ed40b  751d                 jne 0x7ed42a
// 007ed40d  6a00                 push 0
// 007ed40f  6a00                 push 0
// 007ed411  57                   push edi
// 007ed412  6a0f                 push 0xf
// 007ed414  c786d800000000000000 mov dword ptr [esi + 0xd8], 0
// 007ed41e  e81df3ffff           call 0x7ec740
// 007ed423  8bcf                 mov ecx, edi
// 007ed425  e8f2aafbff           call 0x7a7f1c
// 007ed42a  5f                   pop edi
// 007ed42b  5e                   pop esi
// 007ed42c  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnActivatePane@CXTPDockingPaneManager@@MAEXHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
