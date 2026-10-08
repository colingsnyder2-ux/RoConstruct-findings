// roc 2010-06 0085de80  unit: CXTPDockingPaneAutoHidePanel  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085de80
//
// 0085de80  33c0                 xor eax, eax
// 0085de82  56                   push esi
// 0085de83  8b742408             mov esi, dword ptr [esp + 8]
// 0085de87  8906                 mov dword ptr [esi], eax
// 0085de89  894604               mov dword ptr [esi + 4], eax
// 0085de8c  894608               mov dword ptr [esi + 8], eax
// 0085de8f  89460c               mov dword ptr [esi + 0xc], eax
// 0085de92  894610               mov dword ptr [esi + 0x10], eax
// 0085de95  894614               mov dword ptr [esi + 0x14], eax
// 0085de98  894618               mov dword ptr [esi + 0x18], eax
// 0085de9b  89461c               mov dword ptr [esi + 0x1c], eax
// 0085de9e  b8007d0000           mov eax, 0x7d00
// 0085dea3  57                   push edi
// 0085dea4  8bf9                 mov edi, ecx
// 0085dea6  8bc8                 mov ecx, eax
// 0085dea8  894620               mov dword ptr [esi + 0x20], eax
// 0085deab  894e24               mov dword ptr [esi + 0x24], ecx
// 0085deae  8b87f8000000         mov eax, dword ptr [edi + 0xf8]
// 0085deb4  85c0                 test eax, eax
// 0085deb6  745a                 je 0x85df12
// 0085deb8  83b8a401000000       cmp dword ptr [eax + 0x1a4], 0
// 0085debf  7451                 je 0x85df12
// 0085dec1  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 0085dec7  8b5020               mov edx, dword ptr [eax + 0x20]
// 0085deca  8d4820               lea ecx, [eax + 0x20]
// 0085decd  8b4210               mov eax, dword ptr [edx + 0x10]
// 0085ded0  56                   push esi
// 0085ded1  ffd0                 call eax
// 0085ded3  8b8ff8000000         mov ecx, dword ptr [edi + 0xf8]
// 0085ded9  6a01                 push 1
// 0085dedb  56                   push esi
// 0085dedc  e8af7f0000           call 0x865e90
// 0085dee1  837c241000           cmp dword ptr [esp + 0x10], 0
// 0085dee6  742a                 je 0x85df12
// 0085dee8  8bbf00010000         mov edi, dword ptr [edi + 0x100]
// 0085deee  85ff                 test edi, edi
// 0085def0  7415                 je 0x85df07
// 0085def2  83ff01               cmp edi, 1
// 0085def5  7410                 je 0x85df07
// 0085def7  b804000000           mov eax, 4
// 0085defc  01461c               add dword ptr [esi + 0x1c], eax
// 0085deff  014624               add dword ptr [esi + 0x24], eax
// 0085df02  5f                   pop edi
// 0085df03  5e                   pop esi
// 0085df04  c20800               ret 8
// 0085df07  b804000000           mov eax, 4
// 0085df0c  014618               add dword ptr [esi + 0x18], eax
// 0085df0f  014620               add dword ptr [esi + 0x20], eax
// 0085df12  5f                   pop edi
// 0085df13  5e                   pop esi
// 0085df14  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetMinMaxInfo@CXTPDockingPaneAutoHideWnd@@ABEXPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
