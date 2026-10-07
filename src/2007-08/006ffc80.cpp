// roc 2007-08 006ffc80  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffc80
//
// 006ffc80  8b5118               mov edx, dword ptr [ecx + 0x18]
// 006ffc83  035104               add edx, dword ptr [ecx + 4]
// 006ffc86  8b442404             mov eax, dword ptr [esp + 4]
// 006ffc8a  8910                 mov dword ptr [eax], edx
// 006ffc8c  8b5108               mov edx, dword ptr [ecx + 8]
// 006ffc8f  895004               mov dword ptr [eax + 4], edx
// 006ffc92  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006ffc95  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006ffc98  895008               mov dword ptr [eax + 8], edx
// 006ffc9b  89480c               mov dword ptr [eax + 0xc], ecx
// 006ffc9e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ?GetHeaderMargin@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
