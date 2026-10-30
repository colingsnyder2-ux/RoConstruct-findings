// roc 2011-06 008bb070  unit: CXTPDockingPaneAutoHidePanel  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bb070
//
// 008bb070  33c0                 xor eax, eax
// 008bb072  56                   push esi
// 008bb073  8b742408             mov esi, dword ptr [esp + 8]
// 008bb077  8906                 mov dword ptr [esi], eax
// 008bb079  894604               mov dword ptr [esi + 4], eax
// 008bb07c  894608               mov dword ptr [esi + 8], eax
// 008bb07f  89460c               mov dword ptr [esi + 0xc], eax
// 008bb082  894610               mov dword ptr [esi + 0x10], eax
// 008bb085  894614               mov dword ptr [esi + 0x14], eax
// 008bb088  894618               mov dword ptr [esi + 0x18], eax
// 008bb08b  89461c               mov dword ptr [esi + 0x1c], eax
// 008bb08e  b8007d0000           mov eax, 0x7d00
// 008bb093  57                   push edi
// 008bb094  8bf9                 mov edi, ecx
// 008bb096  8bc8                 mov ecx, eax
// 008bb098  894620               mov dword ptr [esi + 0x20], eax
// 008bb09b  894e24               mov dword ptr [esi + 0x24], ecx
// 008bb09e  8b87f8000000         mov eax, dword ptr [edi + 0xf8]
// 008bb0a4  85c0                 test eax, eax
// 008bb0a6  745a                 je 0x8bb102
// 008bb0a8  83b8a401000000       cmp dword ptr [eax + 0x1a4], 0
// 008bb0af  7451                 je 0x8bb102
// 008bb0b1  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 008bb0b7  8b5020               mov edx, dword ptr [eax + 0x20]
// 008bb0ba  8d4820               lea ecx, [eax + 0x20]
// 008bb0bd  8b4210               mov eax, dword ptr [edx + 0x10]
// 008bb0c0  56                   push esi
// 008bb0c1  ffd0                 call eax
// 008bb0c3  8b8ff8000000         mov ecx, dword ptr [edi + 0xf8]
// 008bb0c9  6a01                 push 1
// 008bb0cb  56                   push esi
// 008bb0cc  e80f820000           call 0x8c32e0
// 008bb0d1  837c241000           cmp dword ptr [esp + 0x10], 0
// 008bb0d6  742a                 je 0x8bb102
// 008bb0d8  8bbf00010000         mov edi, dword ptr [edi + 0x100]
// 008bb0de  85ff                 test edi, edi
// 008bb0e0  7415                 je 0x8bb0f7
// 008bb0e2  83ff01               cmp edi, 1
// 008bb0e5  7410                 je 0x8bb0f7
// 008bb0e7  b804000000           mov eax, 4
// 008bb0ec  01461c               add dword ptr [esi + 0x1c], eax
// 008bb0ef  014624               add dword ptr [esi + 0x24], eax
// 008bb0f2  5f                   pop edi
// 008bb0f3  5e                   pop esi
// 008bb0f4  c20800               ret 8
// 008bb0f7  b804000000           mov eax, 4
// 008bb0fc  014618               add dword ptr [esi + 0x18], eax
// 008bb0ff  014620               add dword ptr [esi + 0x20], eax
// 008bb102  5f                   pop edi
// 008bb103  5e                   pop esi
// 008bb104  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetMinMaxInfo@CXTPDockingPaneAutoHideWnd@@ABEXPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
