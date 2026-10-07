// roc 2011-06 00424b40  unit: CInstanceRecord::CNameItem  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00424b40
//
// 00424b40  8b01                 mov eax, dword ptr [ecx]
// 00424b42  ffa0b8010000         jmp dword ptr [eax + 0x1b8]
// library xtp-15.2.1/Source\Calendar\XTPCalendarControl.cpp (function ??_9CXTPCalendarControl@@$BBLI@AE)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControl.cpp
