// roc 2012-06 004010d0  unit: CRobloxWnd  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004010d0
//
// 004010d0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004010d3  6a01                 push 1
// 004010d5  50                   push eax
// 004010d6  ff15f03bb200         call dword ptr [0xb23bf0]
// 004010dc  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?EndModalState@CWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
