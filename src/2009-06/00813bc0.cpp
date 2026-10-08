// roc 2009-06 00813bc0  unit: CXTPRibbonTabPopupToolBar  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00813bc0
//
// 00813bc0  8b442408             mov eax, dword ptr [esp + 8]
// 00813bc4  56                   push esi
// 00813bc5  8bf1                 mov esi, ecx
// 00813bc7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00813bcb  50                   push eax
// 00813bcc  51                   push ecx
// 00813bcd  8d5620               lea edx, [esi + 0x20]
// 00813bd0  52                   push edx
// 00813bd1  ff15c0ed8900         call dword ptr [0x89edc0]
// 00813bd7  85c0                 test eax, eax
// 00813bd9  7504                 jne 0x813bdf
// 00813bdb  5e                   pop esi
// 00813bdc  c20800               ret 8
// 00813bdf  8b4618               mov eax, dword ptr [esi + 0x18]
// 00813be2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00813be6  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 00813bec  8b442408             mov eax, dword ptr [esp + 8]
// 00813bf0  52                   push edx
// 00813bf1  50                   push eax
// 00813bf2  e8a9d6ffff           call 0x8112a0
// 00813bf7  5e                   pop esi
// 00813bf8  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?HitTestGroup@CXTPRibbonTabPopupToolBar@@UBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
