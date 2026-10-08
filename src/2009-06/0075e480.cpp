// roc 2009-06 0075e480  unit: CXTPDockingPaneManager  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075e480
//
// 0075e480  837c240400           cmp dword ptr [esp + 4], 0
// 0075e485  56                   push esi
// 0075e486  57                   push edi
// 0075e487  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0075e48b  8bf1                 mov esi, ecx
// 0075e48d  7452                 je 0x75e4e1
// 0075e48f  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0075e495  3bc7                 cmp eax, edi
// 0075e497  7471                 je 0x75e50a
// 0075e499  85c0                 test eax, eax
// 0075e49b  7417                 je 0x75e4b4
// 0075e49d  6a00                 push 0
// 0075e49f  6a00                 push 0
// 0075e4a1  50                   push eax
// 0075e4a2  6a0f                 push 0xf
// 0075e4a4  e807f3ffff           call 0x75d7b0
// 0075e4a9  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 0075e4af  e8f4aafbff           call 0x718fa8
// 0075e4b4  89bed8000000         mov dword ptr [esi + 0xd8], edi
// 0075e4ba  85ff                 test edi, edi
// 0075e4bc  744c                 je 0x75e50a
// 0075e4be  83c704               add edi, 4
// 0075e4c1  57                   push edi
// 0075e4c2  ff15d0e18900         call dword ptr [0x89e1d0]
// 0075e4c8  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0075e4ce  6a00                 push 0
// 0075e4d0  6a00                 push 0
// 0075e4d2  50                   push eax
// 0075e4d3  6a0e                 push 0xe
// 0075e4d5  8bce                 mov ecx, esi
// 0075e4d7  e8d4f2ffff           call 0x75d7b0
// 0075e4dc  5f                   pop edi
// 0075e4dd  5e                   pop esi
// 0075e4de  c20800               ret 8
// 0075e4e1  85ff                 test edi, edi
// 0075e4e3  7425                 je 0x75e50a
// 0075e4e5  39bed8000000         cmp dword ptr [esi + 0xd8], edi
// 0075e4eb  751d                 jne 0x75e50a
// 0075e4ed  6a00                 push 0
// 0075e4ef  6a00                 push 0
// 0075e4f1  57                   push edi
// 0075e4f2  6a0f                 push 0xf
// 0075e4f4  c786d800000000000000 mov dword ptr [esi + 0xd8], 0
// 0075e4fe  e8adf2ffff           call 0x75d7b0
// 0075e503  8bcf                 mov ecx, edi
// 0075e505  e89eaafbff           call 0x718fa8
// 0075e50a  5f                   pop edi
// 0075e50b  5e                   pop esi
// 0075e50c  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnActivatePane@CXTPDockingPaneManager@@MAEXHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
