// from server: 100% by auto
// roc 2008-06 007285c0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007285c0
//
// 007285c0  8b442404             mov eax, dword ptr [esp + 4]
// 007285c4  8b5104               mov edx, dword ptr [ecx + 4]
// 007285c7  8910                 mov dword ptr [eax], edx
// 007285c9  8b5108               mov edx, dword ptr [ecx + 8]
// 007285cc  895004               mov dword ptr [eax + 4], edx
// 007285cf  8b510c               mov edx, dword ptr [ecx + 0xc]
// 007285d2  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 007285d5  895008               mov dword ptr [eax + 8], edx
// 007285d8  89480c               mov dword ptr [eax + 0xc], ecx
// 007285db  c20400               ret 4
// library xtp-11.2.2/Source\Calendar\XTPCalendarThemeOffice2007.cpp (function ?GetStandardValue@?$CXTPCalendarThemeCustomizableXValueT@VCRect@@V1@@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarThemeOffice2007.cpp
