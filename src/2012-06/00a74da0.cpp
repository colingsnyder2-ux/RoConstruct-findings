// roc 2012-06 00a74da0  unit: CXTPRibbonGroupPopupToolBar  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a74da0
//
// 00a74da0  83ec10               sub esp, 0x10
// 00a74da3  56                   push esi
// 00a74da4  8bf1                 mov esi, ecx
// 00a74da6  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a74da9  85c0                 test eax, eax
// 00a74dab  743f                 je 0xa74dec
// 00a74dad  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00a74db0  894c2404             mov dword ptr [esp + 4], ecx
// 00a74db4  8b5038               mov edx, dword ptr [eax + 0x38]
// 00a74db7  89542408             mov dword ptr [esp + 8], edx
// 00a74dbb  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00a74dbe  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a74dc2  8b5040               mov edx, dword ptr [eax + 0x40]
// 00a74dc5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a74dc9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a74dcd  50                   push eax
// 00a74dce  89542414             mov dword ptr [esp + 0x14], edx
// 00a74dd2  51                   push ecx
// 00a74dd3  8d54240c             lea edx, [esp + 0xc]
// 00a74dd7  52                   push edx
// 00a74dd8  ff15483bb200         call dword ptr [0xb23b48]
// 00a74dde  85c0                 test eax, eax
// 00a74de0  740a                 je 0xa74dec
// 00a74de2  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a74de5  5e                   pop esi
// 00a74de6  83c410               add esp, 0x10
// 00a74de9  c20800               ret 8
// 00a74dec  33c0                 xor eax, eax
// 00a74dee  5e                   pop esi
// 00a74def  83c410               add esp, 0x10
// 00a74df2  c20800               ret 8
// library xtp-15.2.1/Source\Ribbon\XTPRibbonPopups.cpp (function ?HitTestGroup@CXTPRibbonGroupPopupToolBar@@UBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonPopups.cpp
