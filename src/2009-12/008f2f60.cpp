// roc 2009-12 008f2f60  unit: CXTPDockingPaneAutoHidePanel  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f2f60
//
// 008f2f60  8b442408             mov eax, dword ptr [esp + 8]
// 008f2f64  56                   push esi
// 008f2f65  8bf1                 mov esi, ecx
// 008f2f67  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f2f6b  50                   push eax
// 008f2f6c  51                   push ecx
// 008f2f6d  8bce                 mov ecx, esi
// 008f2f6f  e8bcdafbff           call 0x8b0a30
// 008f2f74  6a0a                 push 0xa
// 008f2f76  8d4e38               lea ecx, [esi + 0x38]
// 008f2f79  c706acf8a000         mov dword ptr [esi], 0xa0f8ac
// 008f2f7f  e83c67f4ff           call 0x8396c0
// 008f2f84  8bc6                 mov eax, esi
// 008f2f86  5e                   pop esi
// 008f2f87  c20800               ret 8
// copied from an identical function in another client (function ??0CXTPDockingPaneBaseContainer@@IAE@W4XTPDockingPaneType@@PAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneBaseContainer.cpp