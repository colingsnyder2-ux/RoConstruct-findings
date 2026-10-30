// roc 2009-12 008a1e50  unit: CXTPReportInplaceEdit  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a1e50
//
// 008a1e50  56                   push esi
// 008a1e51  8bf1                 mov esi, ecx
// 008a1e53  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008a1e57  7439                 je 0x8a1e92
// 008a1e59  837e6400             cmp dword ptr [esi + 0x64], 0
// 008a1e5d  7440                 je 0x8a1e9f
// 008a1e5f  8b4658               mov eax, dword ptr [esi + 0x58]
// 008a1e62  85c0                 test eax, eax
// 008a1e64  7403                 je 0x8a1e69
// 008a1e66  8b4020               mov eax, dword ptr [eax + 0x20]
// 008a1e69  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a1e6c  6a01                 push 1
// 008a1e6e  8d4c2410             lea ecx, [esp + 0x10]
// 008a1e72  51                   push ecx
// 008a1e73  50                   push eax
// 008a1e74  52                   push edx
// 008a1e75  ff15c0ca9800         call dword ptr [0x98cac0]
// 008a1e7b  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a1e7f  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 008a1e82  8b01                 mov eax, dword ptr [ecx]
// 008a1e84  8b8098000000         mov eax, dword ptr [eax + 0x98]
// 008a1e8a  52                   push edx
// 008a1e8b  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a1e8f  52                   push edx
// 008a1e90  ffd0                 call eax
// 008a1e92  837e6400             cmp dword ptr [esi + 0x64], 0
// 008a1e96  7407                 je 0x8a1e9f
// 008a1e98  8bce                 mov ecx, esi
// 008a1e9a  e8911ff5ff           call 0x7f3e30
// 008a1e9f  5e                   pop esi
// 008a1ea0  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDblClk@CXTPReportInplaceEdit@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp