// roc 2011-06 008d5b90  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5b90
//
// 008d5b90  8b4118               mov eax, dword ptr [ecx + 0x18]
// 008d5b93  99                   cdq 
// 008d5b94  2bc2                 sub eax, edx
// 008d5b96  8bd0                 mov edx, eax
// 008d5b98  8b442404             mov eax, dword ptr [esp + 4]
// 008d5b9c  d1fa                 sar edx, 1
// 008d5b9e  035104               add edx, dword ptr [ecx + 4]
// 008d5ba1  8910                 mov dword ptr [eax], edx
// 008d5ba3  8b5108               mov edx, dword ptr [ecx + 8]
// 008d5ba6  895004               mov dword ptr [eax + 4], edx
// 008d5ba9  8b510c               mov edx, dword ptr [ecx + 0xc]
// 008d5bac  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 008d5baf  895008               mov dword ptr [eax + 8], edx
// 008d5bb2  89480c               mov dword ptr [eax + 0xc], ecx
// 008d5bb5  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ?GetHeaderMargin@CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
