// from server: 100% by auto
// roc 2012-06 00a4dec0  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4dec0
//
// 00a4dec0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00a4dec3  99                   cdq 
// 00a4dec4  2bc2                 sub eax, edx
// 00a4dec6  8bd0                 mov edx, eax
// 00a4dec8  8b442404             mov eax, dword ptr [esp + 4]
// 00a4decc  d1fa                 sar edx, 1
// 00a4dece  035104               add edx, dword ptr [ecx + 4]
// 00a4ded1  8910                 mov dword ptr [eax], edx
// 00a4ded3  8b5108               mov edx, dword ptr [ecx + 8]
// 00a4ded6  895004               mov dword ptr [eax + 4], edx
// 00a4ded9  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00a4dedc  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00a4dedf  895008               mov dword ptr [eax + 8], edx
// 00a4dee2  89480c               mov dword ptr [eax + 0xc], ecx
// 00a4dee5  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ?GetHeaderMargin@CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
