// from server: 100% by auto
// roc 2012-06 00a02170  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a02170
//
// 00a02170  8b442404             mov eax, dword ptr [esp + 4]
// 00a02174  8b5104               mov edx, dword ptr [ecx + 4]
// 00a02177  8910                 mov dword ptr [eax], edx
// 00a02179  8b5108               mov edx, dword ptr [ecx + 8]
// 00a0217c  895004               mov dword ptr [eax + 4], edx
// 00a0217f  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00a02182  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00a02185  895008               mov dword ptr [eax + 8], edx
// 00a02188  89480c               mov dword ptr [eax + 0xc], ecx
// 00a0218b  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarThemeOffice2007.cpp (function ?GetStandardValue@?$CXTPCalendarThemeCustomizableXValueT@VCRect@@V1@@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarThemeOffice2007.cpp
