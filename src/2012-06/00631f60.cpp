// roc 2012-06 00631f60  unit: std::D::DU?$char_traits::V?$basic_string::?$Table  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00631f60
//
// 00631f60  c701583bb800         mov dword ptr [ecx], 0xb83b58
// 00631f66  83c104               add ecx, 4
// 00631f69  e952ffffff           jmp 0x631ec0
// library xtp-15.2.1/Source\Calendar\XTPCalendarTheme.cpp (function ??1CXTPPropsState@CXTPCalendarThemePart@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarTheme.cpp
