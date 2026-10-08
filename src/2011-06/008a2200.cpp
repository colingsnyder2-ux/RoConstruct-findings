// roc 2011-06 008a2200  unit: CXTPDockBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a2200
//
// 008a2200  8b442404             mov eax, dword ptr [esp + 4]
// 008a2204  8b542408             mov edx, dword ptr [esp + 8]
// 008a2208  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 008a220e  f7d8                 neg eax
// 008a2210  1bc0                 sbb eax, eax
// 008a2212  83e0fa               and eax, 0xfffffffa
// 008a2215  83c010               add eax, 0x10
// 008a2218  f6c240               test dl, 0x40
// 008a221b  7403                 je 0x8a2220
// 008a221d  83c801               or eax, 1
// 008a2220  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 008a2223  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 008a2227  7406                 je 0x8a222f
// 008a2229  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 008a222d  740a                 je 0x8a2239
// 008a222f  f6c220               test dl, 0x20
// 008a2232  7405                 je 0x8a2239
// 008a2234  0d80000000           or eax, 0x80
// 008a2239  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDockBar.cpp (function ?_GetMode@CXTPDockBar@@IAEHHPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockBar.cpp
