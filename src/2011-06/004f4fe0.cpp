// from server: 100% by auto
// roc 2011-06 004f4fe0  unit: RBX::VContentId::?$holder  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4fe0
//
// 004f4fe0  8b01                 mov eax, dword ptr [ecx]
// 004f4fe2  ffa08c000000         jmp dword ptr [eax + 0x8c]
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??_9CXTPCalendarController@@$BIM@AE)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
