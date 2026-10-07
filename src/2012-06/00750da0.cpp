// roc 2012-06 00750da0  unit: RBX::PartInstance  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00750da0
//
// 00750da0  8b01                 mov eax, dword ptr [ecx]
// 00750da2  ffa0a0000000         jmp dword ptr [eax + 0xa0]
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??_9CXTPCalendarController@@$BKA@AE)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
