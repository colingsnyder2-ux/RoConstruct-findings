// from server: 100% by auto
// roc 2012-06 009a8a60  unit: CXTPReportColumn  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a8a60
//
// 009a8a60  833d3894e50000       cmp dword ptr [0xe59438], 0
// 009a8a67  b800040000           mov eax, 0x400
// 009a8a6c  7411                 je 0x9a8a7f
// 009a8a6e  e87dfa0400           call 0x9f84f0
// 009a8a73  8b10                 mov edx, dword ptr [eax]
// 009a8a75  8bc8                 mov ecx, eax
// 009a8a77  8b4238               mov eax, dword ptr [edx + 0x38]
// 009a8a7a  ffd0                 call eax
// 009a8a7c  0fb7c0               movzx eax, ax
// 009a8a7f  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarUtils.cpp (function ?GetActiveLCID@CXTPCalendarUtils@@SAKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarUtils.cpp
