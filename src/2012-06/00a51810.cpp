// from server: 100% by auto
// roc 2012-06 00a51810  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a51810
//
// 00a51810  83ec10               sub esp, 0x10
// 00a51813  8d0c24               lea ecx, [esp]
// 00a51816  e8e538f8ff           call 0x9d5100
// 00a5181b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5181f  8b10                 mov edx, dword ptr [eax]
// 00a51821  8911                 mov dword ptr [ecx], edx
// 00a51823  8b5004               mov edx, dword ptr [eax + 4]
// 00a51826  895104               mov dword ptr [ecx + 4], edx
// 00a51829  8b5008               mov edx, dword ptr [eax + 8]
// 00a5182c  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a5182f  895108               mov dword ptr [ecx + 8], edx
// 00a51832  89410c               mov dword ptr [ecx + 0xc], eax
// 00a51835  8bc1                 mov eax, ecx
// 00a51837  83c410               add esp, 0x10
// 00a5183a  c21800               ret 0x18
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetHeaderRect@CAppearanceSetVisio@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
