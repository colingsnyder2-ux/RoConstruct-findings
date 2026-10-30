// from server: 100% by auto
// roc 2008-06 006e6b30  unit: CXTPDockingPaneManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e6b30
//
// 006e6b30  56                   push esi
// 006e6b31  8bf1                 mov esi, ecx
// 006e6b33  8b4608               mov eax, dword ptr [esi + 8]
// 006e6b36  6a00                 push 0
// 006e6b38  50                   push eax
// 006e6b39  e802f5ffff           call 0x6e6040
// 006e6b3e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e6b42  8b11                 mov edx, dword ptr [ecx]
// 006e6b44  895008               mov dword ptr [eax + 8], edx
// 006e6b47  8b5104               mov edx, dword ptr [ecx + 4]
// 006e6b4a  89500c               mov dword ptr [eax + 0xc], edx
// 006e6b4d  8b5108               mov edx, dword ptr [ecx + 8]
// 006e6b50  895010               mov dword ptr [eax + 0x10], edx
// 006e6b53  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006e6b56  894814               mov dword ptr [eax + 0x14], ecx
// 006e6b59  8b4e08               mov ecx, dword ptr [esi + 8]
// 006e6b5c  85c9                 test ecx, ecx
// 006e6b5e  7409                 je 0x6e6b69
// 006e6b60  8901                 mov dword ptr [ecx], eax
// 006e6b62  894608               mov dword ptr [esi + 8], eax
// 006e6b65  5e                   pop esi
// 006e6b66  c20400               ret 4
// 006e6b69  894604               mov dword ptr [esi + 4], eax
// 006e6b6c  894608               mov dword ptr [esi + 8], eax
// 006e6b6f  5e                   pop esi
// 006e6b70  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?AddTail@?$CList@UXTP_DOCKINGPANE_INFO@@AAU1@@@QAEPAU__POSITION@@AAUXTP_DOCKINGPANE_INFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneLayout.cpp
