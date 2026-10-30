// roc 2010-06 00845030  unit: CXTPDockBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00845030
//
// 00845030  8b442404             mov eax, dword ptr [esp + 4]
// 00845034  8b542408             mov edx, dword ptr [esp + 8]
// 00845038  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 0084503e  f7d8                 neg eax
// 00845040  1bc0                 sbb eax, eax
// 00845042  83e0fa               and eax, 0xfffffffa
// 00845045  83c010               add eax, 0x10
// 00845048  f6c240               test dl, 0x40
// 0084504b  7403                 je 0x845050
// 0084504d  83c801               or eax, 1
// 00845050  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 00845053  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 00845057  7406                 je 0x84505f
// 00845059  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 0084505d  740a                 je 0x845069
// 0084505f  f6c220               test dl, 0x20
// 00845062  7405                 je 0x845069
// 00845064  0d80000000           or eax, 0x80
// 00845069  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDockBar.cpp (function ?_GetMode@CXTPDockBar@@IAEHHPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockBar.cpp
