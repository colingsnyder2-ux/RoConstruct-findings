// roc 2012-06 00a31bf0  unit: CXTPDockingPaneBase  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a31bf0
//
// 00a31bf0  8bc1                 mov eax, ecx
// 00a31bf2  33c9                 xor ecx, ecx
// 00a31bf4  894804               mov dword ptr [eax + 4], ecx
// 00a31bf7  89480c               mov dword ptr [eax + 0xc], ecx
// 00a31bfa  894810               mov dword ptr [eax + 0x10], ecx
// 00a31bfd  894814               mov dword ptr [eax + 0x14], ecx
// 00a31c00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a31c04  c700c006c200         mov dword ptr [eax], 0xc206c0
// 00a31c0a  c7400811000000       mov dword ptr [eax + 8], 0x11
// 00a31c11  894818               mov dword ptr [eax + 0x18], ecx
// 00a31c14  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??0?$CMap@JJUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@AAU123@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
