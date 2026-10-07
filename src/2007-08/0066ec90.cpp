// roc 2007-08 0066ec90  unit: CXTPDockingPaneManager  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066ec90
//
// 0066ec90  837c240400           cmp dword ptr [esp + 4], 0
// 0066ec95  56                   push esi
// 0066ec96  57                   push edi
// 0066ec97  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066ec9b  8bf1                 mov esi, ecx
// 0066ec9d  7452                 je 0x66ecf1
// 0066ec9f  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0066eca5  3bc7                 cmp eax, edi
// 0066eca7  7471                 je 0x66ed1a
// 0066eca9  85c0                 test eax, eax
// 0066ecab  7417                 je 0x66ecc4
// 0066ecad  6a00                 push 0
// 0066ecaf  6a00                 push 0
// 0066ecb1  50                   push eax
// 0066ecb2  6a0f                 push 0xf
// 0066ecb4  e847f3ffff           call 0x66e000
// 0066ecb9  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 0066ecbf  e82015fcff           call 0x6301e4
// 0066ecc4  85ff                 test edi, edi
// 0066ecc6  89bed8000000         mov dword ptr [esi + 0xd8], edi
// 0066eccc  744c                 je 0x66ed1a
// 0066ecce  83c704               add edi, 4
// 0066ecd1  57                   push edi
// 0066ecd2  ff15ecd27700         call dword ptr [0x77d2ec]
// 0066ecd8  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0066ecde  6a00                 push 0
// 0066ece0  6a00                 push 0
// 0066ece2  50                   push eax
// 0066ece3  6a0e                 push 0xe
// 0066ece5  8bce                 mov ecx, esi
// 0066ece7  e814f3ffff           call 0x66e000
// 0066ecec  5f                   pop edi
// 0066eced  5e                   pop esi
// 0066ecee  c20800               ret 8
// 0066ecf1  85ff                 test edi, edi
// 0066ecf3  7425                 je 0x66ed1a
// 0066ecf5  39bed8000000         cmp dword ptr [esi + 0xd8], edi
// 0066ecfb  751d                 jne 0x66ed1a
// 0066ecfd  6a00                 push 0
// 0066ecff  6a00                 push 0
// 0066ed01  57                   push edi
// 0066ed02  6a0f                 push 0xf
// 0066ed04  c786d800000000000000 mov dword ptr [esi + 0xd8], 0
// 0066ed0e  e8edf2ffff           call 0x66e000
// 0066ed13  8bcf                 mov ecx, edi
// 0066ed15  e8ca14fcff           call 0x6301e4
// 0066ed1a  5f                   pop edi
// 0066ed1b  5e                   pop esi
// 0066ed1c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnActivatePane@CXTPDockingPaneManager@@MAEXHPAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
