// from server: 100% by auto
// roc 2007-08 0066fc80  unit: CXTPDockingPaneManager  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066fc80
//
// 0066fc80  56                   push esi
// 0066fc81  8bf1                 mov esi, ecx
// 0066fc83  8b4608               mov eax, dword ptr [esi + 8]
// 0066fc86  6a00                 push 0
// 0066fc88  50                   push eax
// 0066fc89  e8e2f4ffff           call 0x66f170
// 0066fc8e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066fc92  8b11                 mov edx, dword ptr [ecx]
// 0066fc94  895008               mov dword ptr [eax + 8], edx
// 0066fc97  8b5104               mov edx, dword ptr [ecx + 4]
// 0066fc9a  89500c               mov dword ptr [eax + 0xc], edx
// 0066fc9d  8b5108               mov edx, dword ptr [ecx + 8]
// 0066fca0  895010               mov dword ptr [eax + 0x10], edx
// 0066fca3  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0066fca6  894814               mov dword ptr [eax + 0x14], ecx
// 0066fca9  8b4e08               mov ecx, dword ptr [esi + 8]
// 0066fcac  85c9                 test ecx, ecx
// 0066fcae  7409                 je 0x66fcb9
// 0066fcb0  8901                 mov dword ptr [ecx], eax
// 0066fcb2  894608               mov dword ptr [esi + 8], eax
// 0066fcb5  5e                   pop esi
// 0066fcb6  c20400               ret 4
// 0066fcb9  894604               mov dword ptr [esi + 4], eax
// 0066fcbc  894608               mov dword ptr [esi + 8], eax
// 0066fcbf  5e                   pop esi
// 0066fcc0  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneLayout.cpp (function ?AddTail@?$CList@UXTP_DOCKINGPANE_INFO@@AAU1@@@QAEPAU__POSITION@@AAUXTP_DOCKINGPANE_INFO@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneLayout.cpp
