// from server: 100% by auto
// roc 2012-06 009f5a50  unit: CXTPPropertyGridItemEnum  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f5a50
//
// 009f5a50  33c0                 xor eax, eax
// 009f5a52  394104               cmp dword ptr [ecx + 4], eax
// 009f5a55  0f95c0               setne al
// 009f5a58  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarTheme.cpp (function ?IsActive@CXTPPropsStateContext@CXTPCalendarThemePart@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarTheme.cpp
