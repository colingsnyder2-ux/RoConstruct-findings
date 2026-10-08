// from server: 100% by auto
// roc 2011-06 00830470  unit: CXTPReportColumn  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00830470
//
// 00830470  833dc882d10000       cmp dword ptr [0xd182c8], 0
// 00830477  b800040000           mov eax, 0x400
// 0083047c  7411                 je 0x83048f
// 0083047e  e8bdfa0400           call 0x87ff40
// 00830483  8b10                 mov edx, dword ptr [eax]
// 00830485  8bc8                 mov ecx, eax
// 00830487  8b4238               mov eax, dword ptr [edx + 0x38]
// 0083048a  ffd0                 call eax
// 0083048c  0fb7c0               movzx eax, ax
// 0083048f  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarUtils.cpp (function ?GetActiveLCID@CXTPCalendarUtils@@SAKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarUtils.cpp
