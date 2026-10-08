// from server: 100% by auto
// roc 2011-06 008d9500  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d9500
//
// 008d9500  83ec10               sub esp, 0x10
// 008d9503  8d0c24               lea ecx, [esp]
// 008d9506  e8e537f8ff           call 0x85ccf0
// 008d950b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d950f  8b10                 mov edx, dword ptr [eax]
// 008d9511  8911                 mov dword ptr [ecx], edx
// 008d9513  8b5004               mov edx, dword ptr [eax + 4]
// 008d9516  895104               mov dword ptr [ecx + 4], edx
// 008d9519  8b5008               mov edx, dword ptr [eax + 8]
// 008d951c  8b400c               mov eax, dword ptr [eax + 0xc]
// 008d951f  895108               mov dword ptr [ecx + 8], edx
// 008d9522  89410c               mov dword ptr [ecx + 0xc], eax
// 008d9525  8bc1                 mov eax, ecx
// 008d9527  83c410               add esp, 0x10
// 008d952a  c21800               ret 0x18
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetHeaderRect@CAppearanceSetVisio@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
