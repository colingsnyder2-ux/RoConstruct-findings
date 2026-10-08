// roc 2012-06 00a1a640  unit: CXTPDockBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1a640
//
// 00a1a640  8b442404             mov eax, dword ptr [esp + 4]
// 00a1a644  8b542408             mov edx, dword ptr [esp + 8]
// 00a1a648  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 00a1a64e  f7d8                 neg eax
// 00a1a650  1bc0                 sbb eax, eax
// 00a1a652  83e0fa               and eax, 0xfffffffa
// 00a1a655  83c010               add eax, 0x10
// 00a1a658  f6c240               test dl, 0x40
// 00a1a65b  7403                 je 0xa1a660
// 00a1a65d  83c801               or eax, 1
// 00a1a660  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 00a1a663  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 00a1a667  7406                 je 0xa1a66f
// 00a1a669  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 00a1a66d  740a                 je 0xa1a679
// 00a1a66f  f6c220               test dl, 0x20
// 00a1a672  7405                 je 0xa1a679
// 00a1a674  0d80000000           or eax, 0x80
// 00a1a679  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDockBar.cpp (function ?_GetMode@CXTPDockBar@@IAEHHPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockBar.cpp
