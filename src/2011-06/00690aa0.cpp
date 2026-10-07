// roc 2011-06 00690aa0  unit: RBX::PartInstance  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00690aa0
//
// 00690aa0  8b01                 mov eax, dword ptr [ecx]
// 00690aa2  ffa090000000         jmp dword ptr [eax + 0x90]
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??_9CXTPCalendarController@@$BJA@AE)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
