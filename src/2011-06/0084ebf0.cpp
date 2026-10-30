// roc 2011-06 0084ebf0  unit: CXTPDockingPaneManager  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084ebf0
//
// 0084ebf0  837c240400           cmp dword ptr [esp + 4], 0
// 0084ebf5  56                   push esi
// 0084ebf6  57                   push edi
// 0084ebf7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0084ebfb  8bf1                 mov esi, ecx
// 0084ebfd  7452                 je 0x84ec51
// 0084ebff  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0084ec05  3bc7                 cmp eax, edi
// 0084ec07  7471                 je 0x84ec7a
// 0084ec09  85c0                 test eax, eax
// 0084ec0b  7417                 je 0x84ec24
// 0084ec0d  6a00                 push 0
// 0084ec0f  6a00                 push 0
// 0084ec11  50                   push eax
// 0084ec12  6a0f                 push 0xf
// 0084ec14  e847f3ffff           call 0x84df60
// 0084ec19  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 0084ec1f  e8b6b9fbff           call 0x80a5da
// 0084ec24  89bed8000000         mov dword ptr [esi + 0xd8], edi
// 0084ec2a  85ff                 test edi, edi
// 0084ec2c  744c                 je 0x84ec7a
// 0084ec2e  83c704               add edi, 4
// 0084ec31  57                   push edi
// 0084ec32  ff154c03a400         call dword ptr [0xa4034c]
// 0084ec38  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0084ec3e  6a00                 push 0
// 0084ec40  6a00                 push 0
// 0084ec42  50                   push eax
// 0084ec43  6a0e                 push 0xe
// 0084ec45  8bce                 mov ecx, esi
// 0084ec47  e814f3ffff           call 0x84df60
// 0084ec4c  5f                   pop edi
// 0084ec4d  5e                   pop esi
// 0084ec4e  c20800               ret 8
// 0084ec51  85ff                 test edi, edi
// 0084ec53  7425                 je 0x84ec7a
// 0084ec55  39bed8000000         cmp dword ptr [esi + 0xd8], edi
// 0084ec5b  751d                 jne 0x84ec7a
// 0084ec5d  6a00                 push 0
// 0084ec5f  6a00                 push 0
// 0084ec61  57                   push edi
// 0084ec62  6a0f                 push 0xf
// 0084ec64  c786d800000000000000 mov dword ptr [esi + 0xd8], 0
// 0084ec6e  e8edf2ffff           call 0x84df60
// 0084ec73  8bcf                 mov ecx, edi
// 0084ec75  e860b9fbff           call 0x80a5da
// 0084ec7a  5f                   pop edi
// 0084ec7b  5e                   pop esi
// 0084ec7c  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnActivatePane@CXTPDockingPaneManager@@MAEXHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
