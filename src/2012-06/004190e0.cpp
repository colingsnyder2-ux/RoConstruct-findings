// roc 2012-06 004190e0  unit: CutVerb  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004190e0
//
// 004190e0  8b01                 mov eax, dword ptr [ecx]
// 004190e2  50                   push eax
// 004190e3  ff15b421b200         call dword ptr [0xb221b4]
// 004190e9  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??1CComBSTR@ATL@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
