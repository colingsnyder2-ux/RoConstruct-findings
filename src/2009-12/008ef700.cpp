// roc 2009-12 008ef700  unit: CXTPRibbonTabPopupToolBar  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ef700
//
// 008ef700  8b442408             mov eax, dword ptr [esp + 8]
// 008ef704  56                   push esi
// 008ef705  8bf1                 mov esi, ecx
// 008ef707  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008ef70b  50                   push eax
// 008ef70c  51                   push ecx
// 008ef70d  8d5620               lea edx, [esi + 0x20]
// 008ef710  52                   push edx
// 008ef711  ff155cca9800         call dword ptr [0x98ca5c]
// 008ef717  85c0                 test eax, eax
// 008ef719  7504                 jne 0x8ef71f
// 008ef71b  5e                   pop esi
// 008ef71c  c20800               ret 8
// 008ef71f  8b4618               mov eax, dword ptr [esi + 0x18]
// 008ef722  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008ef726  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 008ef72c  8b442408             mov eax, dword ptr [esp + 8]
// 008ef730  52                   push edx
// 008ef731  50                   push eax
// 008ef732  e8b9d6ffff           call 0x8ecdf0
// 008ef737  5e                   pop esi
// 008ef738  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?HitTestGroup@CXTPRibbonTabPopupToolBar@@UBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
