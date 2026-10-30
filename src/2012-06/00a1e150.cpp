// roc 2012-06 00a1e150  unit: CXTPRibbonBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1e150
//
// 00a1e150  8b442404             mov eax, dword ptr [esp + 4]
// 00a1e154  898178010000         mov dword ptr [ecx + 0x178], eax
// 00a1e15a  b801000000           mov eax, 1
// 00a1e15f  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 00a1e165  740f                 je 0xa1e176
// 00a1e167  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 00a1e16d  89442404             mov dword ptr [esp + 4], eax
// 00a1e171  e9ba6ef6ff           jmp 0x985030
// 00a1e176  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SetQuickAccessControl@CControlQuickAccessCommand@CXTPRibbonBar@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
