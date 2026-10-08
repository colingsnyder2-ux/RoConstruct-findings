// from server: 100% by auto
// roc 2008-06 00797230  unit: CXTPRibbonTabPopupToolBar  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797230
//
// 00797230  8b442408             mov eax, dword ptr [esp + 8]
// 00797234  56                   push esi
// 00797235  8bf1                 mov esi, ecx
// 00797237  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0079723b  50                   push eax
// 0079723c  51                   push ecx
// 0079723d  8d5620               lea edx, [esi + 0x20]
// 00797240  52                   push edx
// 00797241  ff152c2d8000         call dword ptr [0x802d2c]
// 00797247  85c0                 test eax, eax
// 00797249  7504                 jne 0x79724f
// 0079724b  5e                   pop esi
// 0079724c  c20800               ret 8
// 0079724f  8b4618               mov eax, dword ptr [esi + 0x18]
// 00797252  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00797256  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 0079725c  8b442408             mov eax, dword ptr [esp + 8]
// 00797260  52                   push edx
// 00797261  50                   push eax
// 00797262  e869d7ffff           call 0x7949d0
// 00797267  5e                   pop esi
// 00797268  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?HitTestGroup@CXTPRibbonTabPopupToolBar@@UBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
