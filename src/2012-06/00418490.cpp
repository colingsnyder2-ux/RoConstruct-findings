// roc 2012-06 00418490  unit: CChatPrompt  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00418490
//
// 00418490  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00418493  50                   push eax
// 00418494  ff15503ab200         call dword ptr [0xb23a50]
// 0041849a  50                   push eax
// 0041849b  e8c6a15600           call 0x982666
// 004184a0  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?GetDC@CWnd@@QAEPAVCDC@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
