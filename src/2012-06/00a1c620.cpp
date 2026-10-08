// from server: 100% by auto
// roc 2012-06 00a1c620  unit: CXTPMenuBarMDIMenuInfo  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1c620
//
// 00a1c620  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00a1c623  f7d8                 neg eax
// 00a1c625  1bc0                 sbb eax, eax
// 00a1c627  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCustomProperties.cpp (function ?GetStartPosition@CXTPCalendarCustomProperties@@QBEPAU__POSITION@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCustomProperties.cpp
