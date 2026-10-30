// from server: 100% by auto
// roc 2012-06 00a1d030  unit: CXTPMenuBar  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1d030
//
// 00a1d030  8bc1                 mov eax, ecx
// 00a1d032  33c9                 xor ecx, ecx
// 00a1d034  894804               mov dword ptr [eax + 4], ecx
// 00a1d037  89480c               mov dword ptr [eax + 0xc], ecx
// 00a1d03a  894810               mov dword ptr [eax + 0x10], ecx
// 00a1d03d  894814               mov dword ptr [eax + 0x14], ecx
// 00a1d040  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a1d044  c70048e5c100         mov dword ptr [eax], 0xc1e548
// 00a1d04a  c7400811000000       mov dword ptr [eax + 8], 0x11
// 00a1d051  894818               mov dword ptr [eax + 0x18], ecx
// 00a1d054  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??0?$CMap@JJUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@AAU123@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
