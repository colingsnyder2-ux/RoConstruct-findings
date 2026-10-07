// roc 2008-06 0071a770  unit: CXTPDockBar  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071a770
//
// 0071a770  8b442404             mov eax, dword ptr [esp + 4]
// 0071a774  8b542408             mov edx, dword ptr [esp + 8]
// 0071a778  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 0071a77e  f7d8                 neg eax
// 0071a780  1bc0                 sbb eax, eax
// 0071a782  83e0fa               and eax, 0xfffffffa
// 0071a785  83c010               add eax, 0x10
// 0071a788  f6c240               test dl, 0x40
// 0071a78b  7403                 je 0x71a790
// 0071a78d  83c801               or eax, 1
// 0071a790  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 0071a793  83795c00             cmp dword ptr [ecx + 0x5c], 0
// 0071a797  7406                 je 0x71a79f
// 0071a799  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 0071a79d  740a                 je 0x71a7a9
// 0071a79f  f6c220               test dl, 0x20
// 0071a7a2  7405                 je 0x71a7a9
// 0071a7a4  0d80000000           or eax, 0x80
// 0071a7a9  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDockBar.cpp (function ?_GetMode@CXTPDockBar@@IAEHHPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockBar.cpp
