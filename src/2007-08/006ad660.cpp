// roc 2007-08 006ad660  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ad660
//
// 006ad660  8b442404             mov eax, dword ptr [esp + 4]
// 006ad664  8b5104               mov edx, dword ptr [ecx + 4]
// 006ad667  8910                 mov dword ptr [eax], edx
// 006ad669  8b5108               mov edx, dword ptr [ecx + 8]
// 006ad66c  895004               mov dword ptr [eax + 4], edx
// 006ad66f  8b510c               mov edx, dword ptr [ecx + 0xc]
// 006ad672  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006ad675  895008               mov dword ptr [eax + 8], edx
// 006ad678  89480c               mov dword ptr [eax + 0xc], ecx
// 006ad67b  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarThemeOffice2007.cpp (function ?GetStandardValue@?$CXTPCalendarThemeCustomizableXValueT@VCRect@@V1@@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarThemeOffice2007.cpp
