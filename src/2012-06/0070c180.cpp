// roc 2012-06 0070c180  unit: ChatEnter  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070c180
//
// 0070c180  8b01                 mov eax, dword ptr [ecx]
// 0070c182  ffa08c000000         jmp dword ptr [eax + 0x8c]
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??_9CXTPCalendarController@@$BIM@AE)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
