// roc 2007-03 0065ac70  unit: seg_00650000  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065ac70
//
// 0065ac70  837c240400           cmp dword ptr [esp + 4], 0
// 0065ac75  56                   push esi
// 0065ac76  57                   push edi
// 0065ac77  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0065ac7b  8bf1                 mov esi, ecx
// 0065ac7d  7452                 je 0x65acd1
// 0065ac7f  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0065ac85  3bc7                 cmp eax, edi
// 0065ac87  7471                 je 0x65acfa
// 0065ac89  85c0                 test eax, eax
// 0065ac8b  7417                 je 0x65aca4
// 0065ac8d  6a00                 push 0
// 0065ac8f  6a00                 push 0
// 0065ac91  50                   push eax
// 0065ac92  6a0f                 push 0xf
// 0065ac94  e827f3ffff           call 0x659fc0
// 0065ac99  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 0065ac9f  e8ce39fcff           call 0x61e672
// 0065aca4  85ff                 test edi, edi
// 0065aca6  89bed8000000         mov dword ptr [esi + 0xd8], edi
// 0065acac  744c                 je 0x65acfa
// 0065acae  83c704               add edi, 4
// 0065acb1  57                   push edi
// 0065acb2  ff15acd27700         call dword ptr [0x77d2ac]
// 0065acb8  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0065acbe  6a00                 push 0
// 0065acc0  6a00                 push 0
// 0065acc2  50                   push eax
// 0065acc3  6a0e                 push 0xe
// 0065acc5  8bce                 mov ecx, esi
// 0065acc7  e8f4f2ffff           call 0x659fc0
// 0065accc  5f                   pop edi
// 0065accd  5e                   pop esi
// 0065acce  c20800               ret 8
// 0065acd1  85ff                 test edi, edi
// 0065acd3  7425                 je 0x65acfa
// 0065acd5  39bed8000000         cmp dword ptr [esi + 0xd8], edi
// 0065acdb  751d                 jne 0x65acfa
// 0065acdd  6a00                 push 0
// 0065acdf  6a00                 push 0
// 0065ace1  57                   push edi
// 0065ace2  6a0f                 push 0xf
// 0065ace4  c786d800000000000000 mov dword ptr [esi + 0xd8], 0
// 0065acee  e8cdf2ffff           call 0x659fc0
// 0065acf3  8bcf                 mov ecx, edi
// 0065acf5  e87839fcff           call 0x61e672
// 0065acfa  5f                   pop edi
// 0065acfb  5e                   pop esi
// 0065acfc  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnActivatePane@CXTPDockingPaneManager@@MAEXHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
