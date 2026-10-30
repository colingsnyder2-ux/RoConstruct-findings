// from server: 100% by auto
// roc 2008-06 00756980  unit: CXTPDockingPaneAutoHidePanel  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00756980
//
// 00756980  33c0                 xor eax, eax
// 00756982  56                   push esi
// 00756983  8b742408             mov esi, dword ptr [esp + 8]
// 00756987  8906                 mov dword ptr [esi], eax
// 00756989  894604               mov dword ptr [esi + 4], eax
// 0075698c  894608               mov dword ptr [esi + 8], eax
// 0075698f  89460c               mov dword ptr [esi + 0xc], eax
// 00756992  894610               mov dword ptr [esi + 0x10], eax
// 00756995  894614               mov dword ptr [esi + 0x14], eax
// 00756998  894618               mov dword ptr [esi + 0x18], eax
// 0075699b  89461c               mov dword ptr [esi + 0x1c], eax
// 0075699e  b8007d0000           mov eax, 0x7d00
// 007569a3  57                   push edi
// 007569a4  8bf9                 mov edi, ecx
// 007569a6  8bc8                 mov ecx, eax
// 007569a8  894620               mov dword ptr [esi + 0x20], eax
// 007569ab  894e24               mov dword ptr [esi + 0x24], ecx
// 007569ae  8b87f8000000         mov eax, dword ptr [edi + 0xf8]
// 007569b4  85c0                 test eax, eax
// 007569b6  745a                 je 0x756a12
// 007569b8  83b8a401000000       cmp dword ptr [eax + 0x1a4], 0
// 007569bf  7451                 je 0x756a12
// 007569c1  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 007569c7  8b5020               mov edx, dword ptr [eax + 0x20]
// 007569ca  8d4820               lea ecx, [eax + 0x20]
// 007569cd  8b4210               mov eax, dword ptr [edx + 0x10]
// 007569d0  56                   push esi
// 007569d1  ffd0                 call eax
// 007569d3  8b8ff8000000         mov ecx, dword ptr [edi + 0xf8]
// 007569d9  6a01                 push 1
// 007569db  56                   push esi
// 007569dc  e86f800000           call 0x75ea50
// 007569e1  837c241000           cmp dword ptr [esp + 0x10], 0
// 007569e6  742a                 je 0x756a12
// 007569e8  8bbf00010000         mov edi, dword ptr [edi + 0x100]
// 007569ee  85ff                 test edi, edi
// 007569f0  7415                 je 0x756a07
// 007569f2  83ff01               cmp edi, 1
// 007569f5  7410                 je 0x756a07
// 007569f7  b804000000           mov eax, 4
// 007569fc  01461c               add dword ptr [esi + 0x1c], eax
// 007569ff  014624               add dword ptr [esi + 0x24], eax
// 00756a02  5f                   pop edi
// 00756a03  5e                   pop esi
// 00756a04  c20800               ret 8
// 00756a07  b804000000           mov eax, 4
// 00756a0c  014618               add dword ptr [esi + 0x18], eax
// 00756a0f  014620               add dword ptr [esi + 0x20], eax
// 00756a12  5f                   pop edi
// 00756a13  5e                   pop esi
// 00756a14  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?GetMinMaxInfo@CXTPDockingPaneAutoHideWnd@@ABEXPAUtagMINMAXINFO@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
