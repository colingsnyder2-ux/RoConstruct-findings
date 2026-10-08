// from server: 100% by auto
// roc 2012-06 004010c0  unit: CRobloxWnd  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004010c0
//
// 004010c0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004010c3  6a00                 push 0
// 004010c5  50                   push eax
// 004010c6  ff15f03bb200         call dword ptr [0xb23bf0]
// 004010cc  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?BeginModalState@CWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
