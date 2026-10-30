// roc 2009-12 008a2b80  unit: CXTPReportInplaceEdit  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2b80
//
// 008a2b80  83ec10               sub esp, 0x10
// 008a2b83  56                   push esi
// 008a2b84  8bf1                 mov esi, ecx
// 008a2b86  56                   push esi
// 008a2b87  8d4c2408             lea ecx, [esp + 8]
// 008a2b8b  e84087faff           call 0x84b2d0
// 008a2b90  8b442420             mov eax, dword ptr [esp + 0x20]
// 008a2b94  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a2b98  50                   push eax
// 008a2b99  51                   push ecx
// 008a2b9a  8d54240c             lea edx, [esp + 0xc]
// 008a2b9e  52                   push edx
// 008a2b9f  ff155cca9800         call dword ptr [0x98ca5c]
// 008a2ba5  8bce                 mov ecx, esi
// 008a2ba7  85c0                 test eax, eax
// 008a2ba9  740c                 je 0x8a2bb7
// 008a2bab  e890f9ffff           call 0x8a2540
// 008a2bb0  5e                   pop esi
// 008a2bb1  83c410               add esp, 0x10
// 008a2bb4  c20c00               ret 0xc
// 008a2bb7  e8d4feffff           call 0x8a2a90
// 008a2bbc  5e                   pop esi
// 008a2bbd  83c410               add esp, 0x10
// 008a2bc0  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonUp@CXTPReportInplaceList@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportInplaceControls.cpp