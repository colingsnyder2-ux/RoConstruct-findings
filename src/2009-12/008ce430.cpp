// roc 2009-12 008ce430  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ce430
//
// 008ce430  53                   push ebx
// 008ce431  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008ce435  56                   push esi
// 008ce436  8bf1                 mov esi, ecx
// 008ce438  57                   push edi
// 008ce439  8d7e54               lea edi, [esi + 0x54]
// 008ce43c  53                   push ebx
// 008ce43d  8bcf                 mov ecx, edi
// 008ce43f  ff1584de9800         call dword ptr [0x98de84]
// 008ce445  85c0                 test eax, eax
// 008ce447  7410                 je 0x8ce459
// 008ce449  53                   push ebx
// 008ce44a  8bcf                 mov ecx, edi
// 008ce44c  ff155cde9800         call dword ptr [0x98de5c]
// 008ce452  8bce                 mov ecx, esi
// 008ce454  e857fbffff           call 0x8cdfb0
// 008ce459  5f                   pop edi
// 008ce45a  5e                   pop esi
// 008ce45b  5b                   pop ebx
// 008ce45c  c20400               ret 4
// copied from an identical function in another client (function ?SetCaption@CXTPTabManagerItem@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp