// roc 2012-06 00401030  unit: seg_00400000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00401030
//
// 00401030  8b01                 mov eax, dword ptr [ecx]
// 00401032  50                   push eax
// 00401033  ff15e021b200         call dword ptr [0xb221e0]
// 00401039  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??1CComBSTR@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
