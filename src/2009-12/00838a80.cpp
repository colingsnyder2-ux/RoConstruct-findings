// roc 2009-12 00838a80  unit: CXTPDockingPaneManager  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838a80
//
// 00838a80  56                   push esi
// 00838a81  8bf1                 mov esi, ecx
// 00838a83  e828fcffff           call 0x8386b0
// 00838a88  85c0                 test eax, eax
// 00838a8a  7438                 je 0x838ac4
// 00838a8c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00838a90  50                   push eax
// 00838a91  83ec10               sub esp, 0x10
// 00838a94  8bcc                 mov ecx, esp
// 00838a96  83c004               add eax, 4
// 00838a99  50                   push eax
// 00838a9a  51                   push ecx
// 00838a9b  ff1564cc9800         call dword ptr [0x98cc64]
// 00838aa1  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00838aa7  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00838aad  50                   push eax
// 00838aae  e86df70600           call 0x8a8220
// 00838ab3  8bce                 mov ecx, esi
// 00838ab5  e856ffffff           call 0x838a10
// 00838aba  c7864001000001000000 mov dword ptr [esi + 0x140], 1
// 00838ac4  33c0                 xor eax, eax
// 00838ac6  5e                   pop esi
// 00838ac7  c20800               ret 8
// copied from an identical function in another client (function ?OnSizeParent@CXTPDockingPaneManager@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp