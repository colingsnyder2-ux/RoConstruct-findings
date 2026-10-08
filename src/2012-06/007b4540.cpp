// from server: 100% by auto
// roc 2012-06 007b4540  unit: RBX::VBasicPartInstance::?$ActionStation  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b4540
//
// 007b4540  8b01                 mov eax, dword ptr [ecx]
// 007b4542  ffa094000000         jmp dword ptr [eax + 0x94]
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??_9CXTPCalendarController@@$BJE@AE)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
