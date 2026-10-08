// from server: 100% by auto
// roc 2007-08 006a5bc0  unit: CXTPMenuBarMDIMenuInfo  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a5bc0
//
// 006a5bc0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006a5bc3  f7d8                 neg eax
// 006a5bc5  1bc0                 sbb eax, eax
// 006a5bc7  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarCustomProperties.cpp (function ?GetStartPosition@CXTPCalendarCustomProperties@@QBEPAU__POSITION@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarCustomProperties.cpp
