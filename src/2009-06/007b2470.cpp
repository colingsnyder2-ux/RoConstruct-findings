// roc 2009-06 007b2470  unit: CXTPDockBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b2470
//
// 007b2470  8b442404             mov eax, dword ptr [esp + 4]
// 007b2474  8b542408             mov edx, dword ptr [esp + 8]
// 007b2478  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 007b247e  f7d8                 neg eax
// 007b2480  1bc0                 sbb eax, eax
// 007b2482  83e0fa               and eax, 0xfffffffa
// 007b2485  83c010               add eax, 0x10
// 007b2488  f6c240               test dl, 0x40
// 007b248b  7403                 je 0x7b2490
// 007b248d  83c801               or eax, 1
// 007b2490  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 007b2493  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 007b2497  7406                 je 0x7b249f
// 007b2499  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 007b249d  740a                 je 0x7b24a9
// 007b249f  f6c220               test dl, 0x20
// 007b24a2  7405                 je 0x7b24a9
// 007b24a4  0d80000000           or eax, 0x80
// 007b24a9  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDockBar.cpp (function ?_GetMode@CXTPDockBar@@IAEHHPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockBar.cpp
