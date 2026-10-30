// from server: 100% by auto
// roc 2008-06 007811b0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007811b0
//
// 007811b0  83ec10               sub esp, 0x10
// 007811b3  8d0c24               lea ecx, [esp]
// 007811b6  e8d568f7ff           call 0x6f7a90
// 007811bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007811bf  8b10                 mov edx, dword ptr [eax]
// 007811c1  8911                 mov dword ptr [ecx], edx
// 007811c3  8b5004               mov edx, dword ptr [eax + 4]
// 007811c6  895104               mov dword ptr [ecx + 4], edx
// 007811c9  8b5008               mov edx, dword ptr [eax + 8]
// 007811cc  8b400c               mov eax, dword ptr [eax + 0xc]
// 007811cf  895108               mov dword ptr [ecx + 8], edx
// 007811d2  89410c               mov dword ptr [ecx + 0xc], eax
// 007811d5  8bc1                 mov eax, ecx
// 007811d7  83c410               add esp, 0x10
// 007811da  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetHeaderRect@CAppearanceSetVisio@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
