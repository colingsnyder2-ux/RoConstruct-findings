// from server: 100% by auto
// roc 2012-06 00859120  unit: std::runtime_error  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00859120
//
// 00859120  8b01                 mov eax, dword ptr [ecx]
// 00859122  50                   push eax
// 00859123  ff15703db200         call dword ptr [0xb23d70]
// 00859129  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??1CComBSTR@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
