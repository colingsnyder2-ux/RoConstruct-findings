// roc 2012-06 00998130  unit: CXTPPropertyGridItemConstraint  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00998130
//
// 00998130  8bc1                 mov eax, ecx
// 00998132  33c9                 xor ecx, ecx
// 00998134  894804               mov dword ptr [eax + 4], ecx
// 00998137  89480c               mov dword ptr [eax + 0xc], ecx
// 0099813a  894810               mov dword ptr [eax + 0x10], ecx
// 0099813d  894814               mov dword ptr [eax + 0x14], ecx
// 00998140  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00998144  c700f4e6c000         mov dword ptr [eax], 0xc0e6f4
// 0099814a  c7400811000000       mov dword ptr [eax + 8], 0x11
// 00998151  894818               mov dword ptr [eax + 0x18], ecx
// 00998154  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??0?$CMap@JJUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@AAU123@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
