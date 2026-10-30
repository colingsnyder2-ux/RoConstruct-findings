// from server: 100% by auto
// roc 2012-06 00750dd0  unit: RBX::VPVInstance::?$NonFactoryProduct  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00750dd0
//
// 00750dd0  8b01                 mov eax, dword ptr [ecx]
// 00750dd2  ffa088000000         jmp dword ptr [eax + 0x88]
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??_9CXTPCalendarController@@$BII@AE)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
