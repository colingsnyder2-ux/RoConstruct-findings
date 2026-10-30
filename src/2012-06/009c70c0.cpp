// roc 2012-06 009c70c0  unit: CXTPDockingPaneManager  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c70c0
//
// 009c70c0  837c240400           cmp dword ptr [esp + 4], 0
// 009c70c5  56                   push esi
// 009c70c6  57                   push edi
// 009c70c7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009c70cb  8bf1                 mov esi, ecx
// 009c70cd  7452                 je 0x9c7121
// 009c70cf  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 009c70d5  3bc7                 cmp eax, edi
// 009c70d7  7471                 je 0x9c714a
// 009c70d9  85c0                 test eax, eax
// 009c70db  7417                 je 0x9c70f4
// 009c70dd  6a00                 push 0
// 009c70df  6a00                 push 0
// 009c70e1  50                   push eax
// 009c70e2  6a0f                 push 0xf
// 009c70e4  e827f3ffff           call 0x9c6410
// 009c70e9  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 009c70ef  e896b5fbff           call 0x98268a
// 009c70f4  89bed8000000         mov dword ptr [esi + 0xd8], edi
// 009c70fa  85ff                 test edi, edi
// 009c70fc  744c                 je 0x9c714a
// 009c70fe  83c704               add edi, 4
// 009c7101  57                   push edi
// 009c7102  ff159821b200         call dword ptr [0xb22198]
// 009c7108  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 009c710e  6a00                 push 0
// 009c7110  6a00                 push 0
// 009c7112  50                   push eax
// 009c7113  6a0e                 push 0xe
// 009c7115  8bce                 mov ecx, esi
// 009c7117  e8f4f2ffff           call 0x9c6410
// 009c711c  5f                   pop edi
// 009c711d  5e                   pop esi
// 009c711e  c20800               ret 8
// 009c7121  85ff                 test edi, edi
// 009c7123  7425                 je 0x9c714a
// 009c7125  39bed8000000         cmp dword ptr [esi + 0xd8], edi
// 009c712b  751d                 jne 0x9c714a
// 009c712d  6a00                 push 0
// 009c712f  6a00                 push 0
// 009c7131  57                   push edi
// 009c7132  6a0f                 push 0xf
// 009c7134  c786d800000000000000 mov dword ptr [esi + 0xd8], 0
// 009c713e  e8cdf2ffff           call 0x9c6410
// 009c7143  8bcf                 mov ecx, edi
// 009c7145  e840b5fbff           call 0x98268a
// 009c714a  5f                   pop edi
// 009c714b  5e                   pop esi
// 009c714c  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnActivatePane@CXTPDockingPaneManager@@MAEXHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
