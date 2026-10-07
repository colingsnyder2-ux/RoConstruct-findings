// roc 2012-06 009b98d0  unit: CXTPReportRecordItemVariant  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b98d0
//
// 009b98d0  8b4108               mov eax, dword ptr [ecx + 8]
// 009b98d3  8b542404             mov edx, dword ptr [esp + 4]
// 009b98d7  3b4208               cmp eax, dword ptr [edx + 8]
// 009b98da  7529                 jne 0x9b9905
// 009b98dc  85c0                 test eax, eax
// 009b98de  7518                 jne 0x9b98f8
// 009b98e0  dd02                 fld qword ptr [edx]
// 009b98e2  dc19                 fcomp qword ptr [ecx]
// 009b98e4  dfe0                 fnstsw ax
// 009b98e6  f6c444               test ah, 0x44
// 009b98e9  7a08                 jp 0x9b98f3
// 009b98eb  b801000000           mov eax, 1
// 009b98f0  c20400               ret 4
// 009b98f3  33c0                 xor eax, eax
// 009b98f5  c20400               ret 4
// 009b98f8  33c9                 xor ecx, ecx
// 009b98fa  83f802               cmp eax, 2
// 009b98fd  0f94c1               sete cl
// 009b9900  8ac1                 mov al, cl
// 009b9902  c20400               ret 4
// 009b9905  32c0                 xor al, al
// 009b9907  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarControl.cpp (function ??8COleDateTime@ATL@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControl.cpp
