// roc 2008-06 00760750  unit: CXTPPropertyGridToolTip  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00760750
//
// 00760750  8b442404             mov eax, dword ptr [esp + 4]
// 00760754  56                   push esi
// 00760755  50                   push eax
// 00760756  8bf1                 mov esi, ecx
// 00760758  e8cbb80500           call 0x7bc028
// 0076075d  85c0                 test eax, eax
// 0076075f  7416                 je 0x760777
// 00760761  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00760764  85c9                 test ecx, ecx
// 00760766  740f                 je 0x760777
// 00760768  8b89d4000000         mov ecx, dword ptr [ecx + 0xd4]
// 0076076e  8b11                 mov edx, dword ptr [ecx]
// 00760770  56                   push esi
// 00760771  50                   push eax
// 00760772  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00760775  ffd0                 call eax
// 00760777  b801000000           mov eax, 1
// 0076077c  5e                   pop esi
// 0076077d  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?OnPrintClient@CXTPDockingPaneSplitterWnd@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
