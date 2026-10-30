// roc 2009-06 00795460  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00795460
//
// 00795460  83ec10               sub esp, 0x10
// 00795463  8b442414             mov eax, dword ptr [esp + 0x14]
// 00795467  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 0079546d  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 00795473  890c24               mov dword ptr [esp], ecx
// 00795476  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 0079547c  894c2408             mov dword ptr [esp + 8], ecx
// 00795480  89542404             mov dword ptr [esp + 4], edx
// 00795484  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 0079548a  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00795490  8d0c24               lea ecx, [esp]
// 00795493  51                   push ecx
// 00795494  50                   push eax
// 00795495  89542414             mov dword ptr [esp + 0x14], edx
// 00795499  e812ffffff           call 0x7953b0
// 0079549e  f7d8                 neg eax
// 007954a0  1bc0                 sbb eax, eax
// 007954a2  f7d8                 neg eax
// 007954a4  83c418               add esp, 0x18
// 007954a7  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetDrawImageFlags@@YAKPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
