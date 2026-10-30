// from server: 100% by auto
// roc 2007-08 0071b900  unit: CXTPTabPaintManager::CColorSetDefault  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071b900
//
// 0071b900  8b01                 mov eax, dword ptr [ecx]
// 0071b902  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071b906  8b4024               mov eax, dword ptr [eax + 0x24]
// 0071b909  56                   push esi
// 0071b90a  52                   push edx
// 0071b90b  ffd0                 call eax
// 0071b90d  8bf0                 mov esi, eax
// 0071b90f  56                   push esi
// 0071b910  8d4c2410             lea ecx, [esp + 0x10]
// 0071b914  51                   push ecx
// 0071b915  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071b919  e8924ff1ff           call 0x6308b0
// 0071b91e  8bc6                 mov eax, esi
// 0071b920  5e                   pop esi
// 0071b921  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSet@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp
