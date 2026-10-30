// from server: 100% by auto
// roc 2007-08 007037d0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007037d0
//
// 007037d0  83ec10               sub esp, 0x10
// 007037d3  8d0c24               lea ecx, [esp]
// 007037d6  e885c7f7ff           call 0x67ff60
// 007037db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007037df  8b10                 mov edx, dword ptr [eax]
// 007037e1  8911                 mov dword ptr [ecx], edx
// 007037e3  8b5004               mov edx, dword ptr [eax + 4]
// 007037e6  895104               mov dword ptr [ecx + 4], edx
// 007037e9  8b5008               mov edx, dword ptr [eax + 8]
// 007037ec  8b400c               mov eax, dword ptr [eax + 0xc]
// 007037ef  895108               mov dword ptr [ecx + 8], edx
// 007037f2  89410c               mov dword ptr [ecx + 0xc], eax
// 007037f5  8bc1                 mov eax, ecx
// 007037f7  83c410               add esp, 0x10
// 007037fa  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetHeaderRect@CAppearanceSetVisio@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
