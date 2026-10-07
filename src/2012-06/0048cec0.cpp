// roc 2012-06 0048cec0  unit: CRobloxDoc  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0048cec0
//
// 0048cec0  85c9                 test ecx, ecx
// 0048cec2  7503                 jne 0x48cec7
// 0048cec4  33c0                 xor eax, eax
// 0048cec6  c3                   ret 
// 0048cec7  8b4104               mov eax, dword ptr [ecx + 4]
// 0048ceca  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??BCDC@@QBEPAUHDC__@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
