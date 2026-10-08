// from server: 100% by auto
// roc 2012-06 0048d060  unit: CRobloxPlayerDlg  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0048d060
//
// 0048d060  8b01                 mov eax, dword ptr [ecx]
// 0048d062  ffa0bc010000         jmp dword ptr [eax + 0x1bc]
// library xtp-15.2.1/Source\Calendar\XTPCalendarControl.cpp (function ??_9CXTPCalendarControl@@$BBLM@AE)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControl.cpp
