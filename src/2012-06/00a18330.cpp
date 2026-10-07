// roc 2012-06 00a18330  unit: CXTPShortcutManager::CKeyHelper  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a18330
//
// 00a18330  8bc1                 mov eax, ecx
// 00a18332  33c9                 xor ecx, ecx
// 00a18334  894804               mov dword ptr [eax + 4], ecx
// 00a18337  89480c               mov dword ptr [eax + 0xc], ecx
// 00a1833a  894810               mov dword ptr [eax + 0x10], ecx
// 00a1833d  894814               mov dword ptr [eax + 0x14], ecx
// 00a18340  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a18344  c70048d5c100         mov dword ptr [eax], 0xc1d548
// 00a1834a  c7400811000000       mov dword ptr [eax + 8], 0x11
// 00a18351  894818               mov dword ptr [eax + 0x18], ecx
// 00a18354  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??0?$CMap@JJUXTPDayInfo@CXTPDayInfoCache@CXTPCalendarController@@AAU123@@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
