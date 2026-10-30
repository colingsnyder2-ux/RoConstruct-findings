// from server: 100% by auto
// roc 2012-06 00a3d440  unit: CXTPDockingPaneTabbedContainer  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3d440
//
// 00a3d440  51                   push ecx
// 00a3d441  53                   push ebx
// 00a3d442  56                   push esi
// 00a3d443  8d7120               lea esi, [ecx + 0x20]
// 00a3d446  57                   push edi
// 00a3d447  8bce                 mov ecx, esi
// 00a3d449  e822cbfaff           call 0x9e9f70
// 00a3d44e  8944240c             mov dword ptr [esp + 0xc], eax
// 00a3d452  85c0                 test eax, eax
// 00a3d454  7426                 je 0xa3d47c
// 00a3d456  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a3d45a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a3d45e  8bff                 mov edi, edi
// 00a3d460  3bc7                 cmp eax, edi
// 00a3d462  7418                 je 0xa3d47c
// 00a3d464  8d44240c             lea eax, [esp + 0xc]
// 00a3d468  50                   push eax
// 00a3d469  8bce                 mov ecx, esi
// 00a3d46b  e8e0b40300           call 0xa78950
// 00a3d470  3bc3                 cmp eax, ebx
// 00a3d472  7411                 je 0xa3d485
// 00a3d474  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a3d478  85c0                 test eax, eax
// 00a3d47a  75e4                 jne 0xa3d460
// 00a3d47c  5f                   pop edi
// 00a3d47d  5e                   pop esi
// 00a3d47e  33c0                 xor eax, eax
// 00a3d480  5b                   pop ebx
// 00a3d481  59                   pop ecx
// 00a3d482  c20800               ret 8
// 00a3d485  5f                   pop edi
// 00a3d486  5e                   pop esi
// 00a3d487  b801000000           mov eax, 1
// 00a3d48c  5b                   pop ebx
// 00a3d48d  59                   pop ecx
// 00a3d48e  c20800               ret 8
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?_Before@CXTPDockingPaneSplitterContainer@@ABEHPBVCXTPDockingPaneBase@@PAU__POSITION@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
