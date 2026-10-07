// roc 2008-06 00720240  unit: CXTPMenuBarMDIMenuInfo  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720240
//
// 00720240  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00720243  f7d8                 neg eax
// 00720245  1bc0                 sbb eax, eax
// 00720247  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarCustomProperties.cpp (function ?GetStartPosition@CXTPCalendarCustomProperties@@QBEPAU__POSITION@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarCustomProperties.cpp
