// roc 2012-06 009f9ff0  unit: CXTPControlGallery  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9ff0
//
// 009f9ff0  8b817cffffff         mov eax, dword ptr [ecx - 0x84]
// 009f9ff6  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarThemeOffice2007.cpp (function ?GetHeightFormulaPart@CTODayViewTimeScale@CXTPCalendarThemeOffice2007@@UBEPAVCTOFormula_MulDivC@CXTPCalendarTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarThemeOffice2007.cpp
