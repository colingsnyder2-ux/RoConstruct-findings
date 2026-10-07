// roc 2008-06 0079c5f0  unit: CXTPTabPaintManager::CColorSetDefault  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079c5f0
//
// 0079c5f0  8b01                 mov eax, dword ptr [ecx]
// 0079c5f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0079c5f6  8b4024               mov eax, dword ptr [eax + 0x24]
// 0079c5f9  56                   push esi
// 0079c5fa  52                   push edx
// 0079c5fb  ffd0                 call eax
// 0079c5fd  8bf0                 mov esi, eax
// 0079c5ff  56                   push esi
// 0079c600  8d4c2410             lea ecx, [esp + 0x10]
// 0079c604  51                   push ecx
// 0079c605  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079c609  e8504df0ff           call 0x6a135e
// 0079c60e  8bc6                 mov eax, esi
// 0079c610  5e                   pop esi
// 0079c611  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSet@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
