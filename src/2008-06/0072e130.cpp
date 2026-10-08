// from server: 100% by auto
// roc 2008-06 0072e130  unit: CXTPControlGallery  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072e130
//
// 0072e130  8b817cffffff         mov eax, dword ptr [ecx - 0x84]
// 0072e136  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarThemeOffice2007.cpp (function ?GetEventIconsToDrawPart@CTODayViewEvent@CXTPCalendarThemeOffice2007@@UAEPAVCTOEventIconsToDraw@CXTPCalendarTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarThemeOffice2007.cpp
