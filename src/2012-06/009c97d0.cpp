// from server: 100% by auto
// roc 2012-06 009c97d0  unit: CXTPToolBar::CControlButtonExpand  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c97d0
//
// 009c97d0  8b01                 mov eax, dword ptr [ecx]
// 009c97d2  50                   push eax
// 009c97d3  ff15b821b200         call dword ptr [0xb221b8]
// 009c97d9  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??1CComBSTR@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
