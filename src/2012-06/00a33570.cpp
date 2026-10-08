// roc 2012-06 00a33570  unit: CXTPDockingPaneAutoHidePanel  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a33570
//
// 00a33570  33c0                 xor eax, eax
// 00a33572  56                   push esi
// 00a33573  8b742408             mov esi, dword ptr [esp + 8]
// 00a33577  8906                 mov dword ptr [esi], eax
// 00a33579  894604               mov dword ptr [esi + 4], eax
// 00a3357c  894608               mov dword ptr [esi + 8], eax
// 00a3357f  89460c               mov dword ptr [esi + 0xc], eax
// 00a33582  894610               mov dword ptr [esi + 0x10], eax
// 00a33585  894614               mov dword ptr [esi + 0x14], eax
// 00a33588  894618               mov dword ptr [esi + 0x18], eax
// 00a3358b  89461c               mov dword ptr [esi + 0x1c], eax
// 00a3358e  b8007d0000           mov eax, 0x7d00
// 00a33593  57                   push edi
// 00a33594  8bf9                 mov edi, ecx
// 00a33596  8bc8                 mov ecx, eax
// 00a33598  894620               mov dword ptr [esi + 0x20], eax
// 00a3359b  894e24               mov dword ptr [esi + 0x24], ecx
// 00a3359e  8b87f8000000         mov eax, dword ptr [edi + 0xf8]
// 00a335a4  85c0                 test eax, eax
// 00a335a6  745a                 je 0xa33602
// 00a335a8  83b8a401000000       cmp dword ptr [eax + 0x1a4], 0
// 00a335af  7451                 je 0xa33602
// 00a335b1  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 00a335b7  8b5020               mov edx, dword ptr [eax + 0x20]
// 00a335ba  8d4820               lea ecx, [eax + 0x20]
// 00a335bd  8b4210               mov eax, dword ptr [edx + 0x10]
// 00a335c0  56                   push esi
// 00a335c1  ffd0                 call eax
// 00a335c3  8b8ff8000000         mov ecx, dword ptr [edi + 0xf8]
// 00a335c9  6a01                 push 1
// 00a335cb  56                   push esi
// 00a335cc  e83f810000           call 0xa3b710
// 00a335d1  837c241000           cmp dword ptr [esp + 0x10], 0
// 00a335d6  742a                 je 0xa33602
// 00a335d8  8bbf00010000         mov edi, dword ptr [edi + 0x100]
// 00a335de  85ff                 test edi, edi
// 00a335e0  7415                 je 0xa335f7
// 00a335e2  83ff01               cmp edi, 1
// 00a335e5  7410                 je 0xa335f7
// 00a335e7  b804000000           mov eax, 4
// 00a335ec  01461c               add dword ptr [esi + 0x1c], eax
// 00a335ef  014624               add dword ptr [esi + 0x24], eax
// 00a335f2  5f                   pop edi
// 00a335f3  5e                   pop esi
// 00a335f4  c20800               ret 8
// 00a335f7  b804000000           mov eax, 4
// 00a335fc  014618               add dword ptr [esi + 0x18], eax
// 00a335ff  014620               add dword ptr [esi + 0x20], eax
// 00a33602  5f                   pop edi
// 00a33603  5e                   pop esi
// 00a33604  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetMinMaxInfo@CXTPDockingPaneAutoHideWnd@@ABEXPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
