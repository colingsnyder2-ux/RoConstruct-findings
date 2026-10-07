// roc 2011-06 00889ba0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00889ba0
//
// 00889ba0  8b442404             mov eax, dword ptr [esp + 4]
// 00889ba4  8b5104               mov edx, dword ptr [ecx + 4]
// 00889ba7  8910                 mov dword ptr [eax], edx
// 00889ba9  8b5108               mov edx, dword ptr [ecx + 8]
// 00889bac  895004               mov dword ptr [eax + 4], edx
// 00889baf  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00889bb2  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00889bb5  895008               mov dword ptr [eax + 8], edx
// 00889bb8  89480c               mov dword ptr [eax + 0xc], ecx
// 00889bbb  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarThemeOffice2007.cpp (function ?GetStandardValue@?$CXTPCalendarThemeCustomizableXValueT@VCRect@@V1@@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarThemeOffice2007.cpp
