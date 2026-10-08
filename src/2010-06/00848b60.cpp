// roc 2010-06 00848b60  unit: CXTPRibbonBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00848b60
//
// 00848b60  8b442404             mov eax, dword ptr [esp + 4]
// 00848b64  898178010000         mov dword ptr [ecx + 0x178], eax
// 00848b6a  b801000000           mov eax, 1
// 00848b6f  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 00848b75  740f                 je 0x848b86
// 00848b77  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 00848b7d  89442404             mov dword ptr [esp + 4], eax
// 00848b81  e91a1cf6ff           jmp 0x7aa7a0
// 00848b86  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SetQuickAccessControl@CControlQuickAccessCommand@CXTPRibbonBar@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
