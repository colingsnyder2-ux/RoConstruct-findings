// from server: 100% by auto
// roc 2007-08 006ffd70  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffd70
//
// 006ffd70  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006ffd73  99                   cdq 
// 006ffd74  2bc2                 sub eax, edx
// 006ffd76  8bd0                 mov edx, eax
// 006ffd78  8b442404             mov eax, dword ptr [esp + 4]
// 006ffd7c  d1fa                 sar edx, 1
// 006ffd7e  035104               add edx, dword ptr [ecx + 4]
// 006ffd81  8910                 mov dword ptr [eax], edx
// 006ffd83  8b5108               mov edx, dword ptr [ecx + 8]
// 006ffd86  895004               mov dword ptr [eax + 4], edx
// 006ffd89  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006ffd8c  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006ffd8f  895008               mov dword ptr [eax + 8], edx
// 006ffd92  89480c               mov dword ptr [eax + 0xc], ecx
// 006ffd95  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ?GetHeaderMargin@CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
