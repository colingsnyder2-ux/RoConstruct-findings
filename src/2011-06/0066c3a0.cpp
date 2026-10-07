// roc 2011-06 0066c3a0  unit: DxUserInput  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066c3a0
//
// 0066c3a0  8b01                 mov eax, dword ptr [ecx]
// 0066c3a2  ffa088000000         jmp dword ptr [eax + 0x88]
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??_9CXTPCalendarController@@$BII@AE)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
