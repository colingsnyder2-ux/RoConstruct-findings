// from server: 100% by auto
// roc 2011-06 008fca90  unit: CXTPRibbonGroupPopupToolBar  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fca90
//
// 008fca90  83ec10               sub esp, 0x10
// 008fca93  56                   push esi
// 008fca94  8bf1                 mov esi, ecx
// 008fca96  8b4618               mov eax, dword ptr [esi + 0x18]
// 008fca99  85c0                 test eax, eax
// 008fca9b  743f                 je 0x8fcadc
// 008fca9d  8b4834               mov ecx, dword ptr [eax + 0x34]
// 008fcaa0  894c2404             mov dword ptr [esp + 4], ecx
// 008fcaa4  8b5038               mov edx, dword ptr [eax + 0x38]
// 008fcaa7  89542408             mov dword ptr [esp + 8], edx
// 008fcaab  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008fcaae  894c240c             mov dword ptr [esp + 0xc], ecx
// 008fcab2  8b5040               mov edx, dword ptr [eax + 0x40]
// 008fcab5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008fcab9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008fcabd  50                   push eax
// 008fcabe  89542414             mov dword ptr [esp + 0x14], edx
// 008fcac2  51                   push ecx
// 008fcac3  8d54240c             lea edx, [esp + 0xc]
// 008fcac7  52                   push edx
// 008fcac8  ff15101ca400         call dword ptr [0xa41c10]
// 008fcace  85c0                 test eax, eax
// 008fcad0  740a                 je 0x8fcadc
// 008fcad2  8b4618               mov eax, dword ptr [esi + 0x18]
// 008fcad5  5e                   pop esi
// 008fcad6  83c410               add esp, 0x10
// 008fcad9  c20800               ret 8
// 008fcadc  33c0                 xor eax, eax
// 008fcade  5e                   pop esi
// 008fcadf  83c410               add esp, 0x10
// 008fcae2  c20800               ret 8
// library xtp-15.2.1/Source\Ribbon\XTPRibbonPopups.cpp (function ?HitTestGroup@CXTPRibbonGroupPopupToolBar@@UBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonPopups.cpp
