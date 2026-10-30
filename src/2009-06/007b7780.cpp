// roc 2009-06 007b7780  unit: CXTPRibbonBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7780
//
// 007b7780  8b442404             mov eax, dword ptr [esp + 4]
// 007b7784  898178010000         mov dword ptr [ecx + 0x178], eax
// 007b778a  b801000000           mov eax, 1
// 007b778f  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 007b7795  740f                 je 0x7b77a6
// 007b7797  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 007b779d  89442404             mov dword ptr [esp + 4], eax
// 007b77a1  e90a88f6ff           jmp 0x71ffb0
// 007b77a6  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SetQuickAccessControl@CControlQuickAccessCommand@CXTPRibbonBar@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
