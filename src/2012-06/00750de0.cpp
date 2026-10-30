// from server: 100% by auto
// roc 2012-06 00750de0  unit: RBX::VPVInstance::?$NonFactoryProduct  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00750de0
//
// 00750de0  8b01                 mov eax, dword ptr [ecx]
// 00750de2  ffa098000000         jmp dword ptr [eax + 0x98]
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??_9CXTPCalendarController@@$BJI@AE)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
