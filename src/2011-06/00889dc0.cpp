// roc 2011-06 00889dc0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00889dc0
//
// 00889dc0  83ec10               sub esp, 0x10
// 00889dc3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00889dc7  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00889dcd  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 00889dd3  890c24               mov dword ptr [esp], ecx
// 00889dd6  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00889ddc  894c2408             mov dword ptr [esp + 8], ecx
// 00889de0  89542404             mov dword ptr [esp + 4], edx
// 00889de4  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 00889dea  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00889df0  8d0c24               lea ecx, [esp]
// 00889df3  51                   push ecx
// 00889df4  50                   push eax
// 00889df5  89542414             mov dword ptr [esp + 0x14], edx
// 00889df9  e812ffffff           call 0x889d10
// 00889dfe  f7d8                 neg eax
// 00889e00  1bc0                 sbb eax, eax
// 00889e02  f7d8                 neg eax
// 00889e04  83c418               add esp, 0x18
// 00889e07  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetDrawImageFlags@@YAKPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
