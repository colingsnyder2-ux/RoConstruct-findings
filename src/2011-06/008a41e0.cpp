// from server: 100% by auto
// roc 2011-06 008a41e0  unit: CXTPPropertyGridItemConstraint  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a41e0
//
// 008a41e0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 008a41e3  f7d8                 neg eax
// 008a41e5  1bc0                 sbb eax, eax
// 008a41e7  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCustomProperties.cpp (function ?GetStartPosition@CXTPCalendarCustomProperties@@QBEPAU__POSITION@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCustomProperties.cpp
