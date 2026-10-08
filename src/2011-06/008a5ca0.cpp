// roc 2011-06 008a5ca0  unit: CXTPRibbonBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a5ca0
//
// 008a5ca0  8b442404             mov eax, dword ptr [esp + 4]
// 008a5ca4  898178010000         mov dword ptr [ecx + 0x178], eax
// 008a5caa  b801000000           mov eax, 1
// 008a5caf  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 008a5cb5  740f                 je 0x8a5cc6
// 008a5cb7  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 008a5cbd  89442404             mov dword ptr [esp + 4], eax
// 008a5cc1  e9ca70f6ff           jmp 0x80cd90
// 008a5cc6  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SetQuickAccessControl@CControlQuickAccessCommand@CXTPRibbonBar@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
