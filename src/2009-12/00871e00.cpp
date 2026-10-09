// roc 2009-12 00871e00  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00871e00
//
// 00871e00  83ec10               sub esp, 0x10
// 00871e03  8b442414             mov eax, dword ptr [esp + 0x14]
// 00871e07  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00871e0d  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 00871e13  890c24               mov dword ptr [esp], ecx
// 00871e16  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00871e1c  894c2408             mov dword ptr [esp + 8], ecx
// 00871e20  89542404             mov dword ptr [esp + 4], edx
// 00871e24  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 00871e2a  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00871e30  8d0c24               lea ecx, [esp]
// 00871e33  51                   push ecx
// 00871e34  50                   push eax
// 00871e35  89542414             mov dword ptr [esp + 0x14], edx
// 00871e39  e812ffffff           call 0x871d50
// 00871e3e  f7d8                 neg eax
// 00871e40  1bc0                 sbb eax, eax
// 00871e42  f7d8                 neg eax
// 00871e44  83c418               add esp, 0x18
// 00871e47  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetDrawImageFlags@@YAKPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
