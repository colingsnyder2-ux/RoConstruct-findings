// roc 2009-12 008949d0  unit: CXTPRibbonBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008949d0
//
// 008949d0  8b442404             mov eax, dword ptr [esp + 4]
// 008949d4  898178010000         mov dword ptr [ecx + 0x178], eax
// 008949da  b801000000           mov eax, 1
// 008949df  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 008949e5  740f                 je 0x8949f6
// 008949e7  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 008949ed  89442404             mov dword ptr [esp + 4], eax
// 008949f1  e9ca1cf6ff           jmp 0x7f66c0
// 008949f6  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SetQuickAccessControl@CControlQuickAccessCommand@CXTPRibbonBar@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
