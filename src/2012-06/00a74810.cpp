// roc 2012-06 00a74810  unit: CXTPRibbonTabPopupToolBar  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a74810
//
// 00a74810  83ec10               sub esp, 0x10
// 00a74813  56                   push esi
// 00a74814  8bf1                 mov esi, ecx
// 00a74816  8b4614               mov eax, dword ptr [esi + 0x14]
// 00a74819  85c0                 test eax, eax
// 00a7481b  7437                 je 0xa74854
// 00a7481d  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00a74820  894c2404             mov dword ptr [esp + 4], ecx
// 00a74824  8b5038               mov edx, dword ptr [eax + 0x38]
// 00a74827  89542408             mov dword ptr [esp + 8], edx
// 00a7482b  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00a7482e  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a74832  8b5040               mov edx, dword ptr [eax + 0x40]
// 00a74835  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a74838  89542410             mov dword ptr [esp + 0x10], edx
// 00a7483c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00a74843  8b01                 mov eax, dword ptr [ecx]
// 00a74845  8b80ac010000         mov eax, dword ptr [eax + 0x1ac]
// 00a7484b  6a01                 push 1
// 00a7484d  8d542408             lea edx, [esp + 8]
// 00a74851  52                   push edx
// 00a74852  ffd0                 call eax
// 00a74854  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a74858  894614               mov dword ptr [esi + 0x14], eax
// 00a7485b  85c0                 test eax, eax
// 00a7485d  7430                 je 0xa7488f
// 00a7485f  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00a74862  894c2404             mov dword ptr [esp + 4], ecx
// 00a74866  8b5038               mov edx, dword ptr [eax + 0x38]
// 00a74869  89542408             mov dword ptr [esp + 8], edx
// 00a7486d  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00a74870  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a74874  8b5040               mov edx, dword ptr [eax + 0x40]
// 00a74877  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a7487a  89542410             mov dword ptr [esp + 0x10], edx
// 00a7487e  8b01                 mov eax, dword ptr [ecx]
// 00a74880  8b80ac010000         mov eax, dword ptr [eax + 0x1ac]
// 00a74886  6a01                 push 1
// 00a74888  8d542408             lea edx, [esp + 8]
// 00a7488c  52                   push edx
// 00a7488d  ffd0                 call eax
// 00a7488f  5e                   pop esi
// 00a74890  83c410               add esp, 0x10
// 00a74893  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?HighlightGroup@CXTPRibbonScrollableBar@@QAEXPAVCXTPRibbonGroup@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
