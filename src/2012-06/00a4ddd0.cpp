// from server: 100% by auto
// roc 2012-06 00a4ddd0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4ddd0
//
// 00a4ddd0  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00a4ddd3  035104               add edx, dword ptr [ecx + 4]
// 00a4ddd6  8b442404             mov eax, dword ptr [esp + 4]
// 00a4ddda  8910                 mov dword ptr [eax], edx
// 00a4dddc  8b5108               mov edx, dword ptr [ecx + 8]
// 00a4dddf  895004               mov dword ptr [eax + 4], edx
// 00a4dde2  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00a4dde5  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00a4dde8  895008               mov dword ptr [eax + 8], edx
// 00a4ddeb  89480c               mov dword ptr [eax + 0xc], ecx
// 00a4ddee  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ?GetHeaderMargin@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
