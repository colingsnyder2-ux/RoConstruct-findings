// from server: 100% by auto
// roc 2008-06 00721e20  unit: CXTPRibbonBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00721e20
//
// 00721e20  8b442404             mov eax, dword ptr [esp + 4]
// 00721e24  898178010000         mov dword ptr [ecx + 0x178], eax
// 00721e2a  b801000000           mov eax, 1
// 00721e2f  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 00721e35  740f                 je 0x721e46
// 00721e37  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 00721e3d  89442404             mov dword ptr [esp + 4], eax
// 00721e41  e98a9af8ff           jmp 0x6ab8d0
// 00721e46  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SetQuickAccessControl@CControlQuickAccessCommand@CXTPRibbonBar@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
