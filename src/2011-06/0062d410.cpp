// from server: 100% by auto
// roc 2011-06 0062d410  unit: RBX::VStarterGear::?$FactoryProduct  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062d410
//
// 0062d410  8b01                 mov eax, dword ptr [ecx]
// 0062d412  ffa0a0000000         jmp dword ptr [eax + 0xa0]
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??_9CXTPCalendarController@@$BKA@AE)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
