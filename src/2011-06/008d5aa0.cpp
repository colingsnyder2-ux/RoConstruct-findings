// from server: 100% by auto
// roc 2011-06 008d5aa0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5aa0
//
// 008d5aa0  8b5118               mov edx, dword ptr [ecx + 0x18]
// 008d5aa3  035104               add edx, dword ptr [ecx + 4]
// 008d5aa6  8b442404             mov eax, dword ptr [esp + 4]
// 008d5aaa  8910                 mov dword ptr [eax], edx
// 008d5aac  8b5108               mov edx, dword ptr [ecx + 8]
// 008d5aaf  895004               mov dword ptr [eax + 4], edx
// 008d5ab2  8b510c               mov edx, dword ptr [ecx + 0xc]
// 008d5ab5  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 008d5ab8  895008               mov dword ptr [eax + 8], edx
// 008d5abb  89480c               mov dword ptr [eax + 0xc], ecx
// 008d5abe  c20400               ret 4
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ?GetHeaderMargin@CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
