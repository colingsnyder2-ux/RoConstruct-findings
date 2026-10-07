// roc 2010-06 004bfd20  unit: RBX::Network::VPlayer::?$EventDesc  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004bfd20
//
// 004bfd20  33c0                 xor eax, eax
// 004bfd22  3981e4000000         cmp dword ptr [ecx + 0xe4], eax
// 004bfd28  0f95c0               setne al
// 004bfd2b  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarDayView.cpp (function ?IsEditingSubject@CXTPCalendarView@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarDayView.cpp
