// roc 2012-06 00761a80  unit: RBX::Explosion  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00761a80
//
// 00761a80  c701d4edba00         mov dword ptr [ecx], 0xbaedd4
// 00761a86  83c104               add ecx, 4
// 00761a89  e9d26fccff           jmp 0x428a60
// library xtp-15.2.1/Source\Calendar\XTPCalendarTheme.cpp (function ??1CXTPPropsState@CXTPCalendarThemePart@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarTheme.cpp
