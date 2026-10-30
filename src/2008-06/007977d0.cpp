// from server: 100% by auto
// roc 2008-06 007977d0  unit: CXTPRibbonGroupPopupToolBar  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007977d0
//
// 007977d0  83ec10               sub esp, 0x10
// 007977d3  56                   push esi
// 007977d4  8bf1                 mov esi, ecx
// 007977d6  8b4618               mov eax, dword ptr [esi + 0x18]
// 007977d9  85c0                 test eax, eax
// 007977db  743f                 je 0x79781c
// 007977dd  8b4834               mov ecx, dword ptr [eax + 0x34]
// 007977e0  894c2404             mov dword ptr [esp + 4], ecx
// 007977e4  8b5038               mov edx, dword ptr [eax + 0x38]
// 007977e7  89542408             mov dword ptr [esp + 8], edx
// 007977eb  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 007977ee  894c240c             mov dword ptr [esp + 0xc], ecx
// 007977f2  8b5040               mov edx, dword ptr [eax + 0x40]
// 007977f5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007977f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007977fd  50                   push eax
// 007977fe  89542414             mov dword ptr [esp + 0x14], edx
// 00797802  51                   push ecx
// 00797803  8d54240c             lea edx, [esp + 0xc]
// 00797807  52                   push edx
// 00797808  ff152c2d8000         call dword ptr [0x802d2c]
// 0079780e  85c0                 test eax, eax
// 00797810  740a                 je 0x79781c
// 00797812  8b4618               mov eax, dword ptr [esi + 0x18]
// 00797815  5e                   pop esi
// 00797816  83c410               add esp, 0x10
// 00797819  c20800               ret 8
// 0079781c  33c0                 xor eax, eax
// 0079781e  5e                   pop esi
// 0079781f  83c410               add esp, 0x10
// 00797822  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?HitTestGroup@CXTPRibbonGroupPopupToolBar@@UBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
