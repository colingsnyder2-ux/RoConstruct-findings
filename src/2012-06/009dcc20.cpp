// roc 2012-06 009dcc20  unit: CXTPTabClientWnd  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dcc20
//
// 009dcc20  8b442404             mov eax, dword ptr [esp + 4]
// 009dcc24  50                   push eax
// 009dcc25  51                   push ecx
// 009dcc26  ff15e03cb200         call dword ptr [0xb23ce0]
// 009dcc2c  f7d8                 neg eax
// 009dcc2e  1bc0                 sbb eax, eax
// 009dcc30  40                   inc eax
// 009dcc31  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarTimeLineView.cpp (function ??9CRect@@QBEHABUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarTimeLineView.cpp
