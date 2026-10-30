// from server: 100% by auto
// roc 2012-06 00a6d450  unit: CXTPTabPaintManager::CColorSetDefault  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6d450
//
// 00a6d450  8b01                 mov eax, dword ptr [ecx]
// 00a6d452  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a6d456  8b4024               mov eax, dword ptr [eax + 0x24]
// 00a6d459  56                   push esi
// 00a6d45a  52                   push edx
// 00a6d45b  ffd0                 call eax
// 00a6d45d  8bf0                 mov esi, eax
// 00a6d45f  56                   push esi
// 00a6d460  8d4c2410             lea ecx, [esp + 0x10]
// 00a6d464  51                   push ecx
// 00a6d465  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a6d469  e83e5af1ff           call 0x982eac
// 00a6d46e  8bc6                 mov eax, esi
// 00a6d470  5e                   pop esi
// 00a6d471  c21800               ret 0x18
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CXTPTabPaintManagerColorSet@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp
