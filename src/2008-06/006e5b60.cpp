// roc 2008-06 006e5b60  unit: CXTPDockingPaneManager  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5b60
//
// 006e5b60  837c240400           cmp dword ptr [esp + 4], 0
// 006e5b65  56                   push esi
// 006e5b66  57                   push edi
// 006e5b67  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006e5b6b  8bf1                 mov esi, ecx
// 006e5b6d  7452                 je 0x6e5bc1
// 006e5b6f  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 006e5b75  3bc7                 cmp eax, edi
// 006e5b77  7471                 je 0x6e5bea
// 006e5b79  85c0                 test eax, eax
// 006e5b7b  7417                 je 0x6e5b94
// 006e5b7d  6a00                 push 0
// 006e5b7f  6a00                 push 0
// 006e5b81  50                   push eax
// 006e5b82  6a0f                 push 0xf
// 006e5b84  e847f3ffff           call 0x6e4ed0
// 006e5b89  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 006e5b8f  e850b0fbff           call 0x6a0be4
// 006e5b94  89bed8000000         mov dword ptr [esi + 0xd8], edi
// 006e5b9a  85ff                 test edi, edi
// 006e5b9c  744c                 je 0x6e5bea
// 006e5b9e  83c704               add edi, 4
// 006e5ba1  57                   push edi
// 006e5ba2  ff15b0218000         call dword ptr [0x8021b0]
// 006e5ba8  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 006e5bae  6a00                 push 0
// 006e5bb0  6a00                 push 0
// 006e5bb2  50                   push eax
// 006e5bb3  6a0e                 push 0xe
// 006e5bb5  8bce                 mov ecx, esi
// 006e5bb7  e814f3ffff           call 0x6e4ed0
// 006e5bbc  5f                   pop edi
// 006e5bbd  5e                   pop esi
// 006e5bbe  c20800               ret 8
// 006e5bc1  85ff                 test edi, edi
// 006e5bc3  7425                 je 0x6e5bea
// 006e5bc5  39bed8000000         cmp dword ptr [esi + 0xd8], edi
// 006e5bcb  751d                 jne 0x6e5bea
// 006e5bcd  6a00                 push 0
// 006e5bcf  6a00                 push 0
// 006e5bd1  57                   push edi
// 006e5bd2  6a0f                 push 0xf
// 006e5bd4  c786d800000000000000 mov dword ptr [esi + 0xd8], 0
// 006e5bde  e8edf2ffff           call 0x6e4ed0
// 006e5be3  8bcf                 mov ecx, edi
// 006e5be5  e8faaffbff           call 0x6a0be4
// 006e5bea  5f                   pop edi
// 006e5beb  5e                   pop esi
// 006e5bec  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnActivatePane@CXTPDockingPaneManager@@MAEXHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
