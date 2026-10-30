// from server: 100% by auto
// roc 2008-06 006c8e20  unit: CXTPReportRecordItemEditOptions  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c8e20
//
// 006c8e20  833d68e1970000       cmp dword ptr [0x97e168], 0
// 006c8e27  b800040000           mov eax, 0x400
// 006c8e2c  7411                 je 0x6c8e3f
// 006c8e2e  e80d6c0500           call 0x71fa40
// 006c8e33  8b10                 mov edx, dword ptr [eax]
// 006c8e35  8bc8                 mov ecx, eax
// 006c8e37  8b4238               mov eax, dword ptr [edx + 0x38]
// 006c8e3a  ffd0                 call eax
// 006c8e3c  0fb7c0               movzx eax, ax
// 006c8e3f  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarUtils.cpp (function ?GetActiveLCID@CXTPCalendarUtils@@SAKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarUtils.cpp
