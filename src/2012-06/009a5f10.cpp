// roc 2012-06 009a5f10  unit: CXTPCommandBarsOptions  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a5f10
//
// 009a5f10  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009a5f13  50                   push eax
// 009a5f14  ff15f83bb200         call dword ptr [0xb23bf8]
// 009a5f1a  50                   push eax
// 009a5f1b  e852360f00           call 0xa99572
// 009a5f20  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?GetDC@CWnd@@QAEPAVCDC@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
