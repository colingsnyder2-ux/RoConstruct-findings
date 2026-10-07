// roc 2011-06 008f50f0  unit: CXTPTabPaintManager::CColorSetDefault  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f50f0
//
// 008f50f0  8b01                 mov eax, dword ptr [ecx]
// 008f50f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f50f6  8b4024               mov eax, dword ptr [eax + 0x24]
// 008f50f9  56                   push esi
// 008f50fa  52                   push edx
// 008f50fb  ffd0                 call eax
// 008f50fd  8bf0                 mov esi, eax
// 008f50ff  56                   push esi
// 008f5100  8d4c2410             lea ecx, [esp + 0x10]
// 008f5104  51                   push ecx
// 008f5105  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f5109  e8125df1ff           call 0x80ae20
// 008f510e  8bc6                 mov eax, esi
// 008f5110  5e                   pop esi
// 008f5111  c21800               ret 0x18
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CXTPTabPaintManagerColorSet@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp
