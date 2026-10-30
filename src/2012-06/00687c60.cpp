// from server: 100% by auto
// roc 2012-06 00687c60  unit: RBX::VCamera::?$FactoryProduct  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00687c60
//
// 00687c60  c7017cf9b800         mov dword ptr [ecx], 0xb8f97c
// 00687c66  83c104               add ecx, 4
// 00687c69  e9f20ddaff           jmp 0x428a60
// library xtp-15.2.1/Source\Calendar\XTPCalendarTheme.cpp (function ??1CXTPPropsState@CXTPCalendarThemePart@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarTheme.cpp
