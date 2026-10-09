// roc 2009-12 00890e30  unit: CXTPDockBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00890e30
//
// 00890e30  8b442404             mov eax, dword ptr [esp + 4]
// 00890e34  8b542408             mov edx, dword ptr [esp + 8]
// 00890e38  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 00890e3e  f7d8                 neg eax
// 00890e40  1bc0                 sbb eax, eax
// 00890e42  83e0fa               and eax, 0xfffffffa
// 00890e45  83c010               add eax, 0x10
// 00890e48  f6c240               test dl, 0x40
// 00890e4b  7403                 je 0x890e50
// 00890e4d  83c801               or eax, 1
// 00890e50  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 00890e53  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 00890e57  7406                 je 0x890e5f
// 00890e59  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 00890e5d  740a                 je 0x890e69
// 00890e5f  f6c220               test dl, 0x20
// 00890e62  7405                 je 0x890e69
// 00890e64  0d80000000           or eax, 0x80
// 00890e69  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDockBar.cpp (function ?_GetMode@CXTPDockBar@@IAEHHPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockBar.cpp
