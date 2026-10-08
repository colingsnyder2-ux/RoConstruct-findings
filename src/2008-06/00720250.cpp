// from server: 100% by auto
// roc 2008-06 00720250  unit: CXTPMenuBarMDIMenuInfo  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720250
//
// 00720250  8b442408             mov eax, dword ptr [esp + 8]
// 00720254  50                   push eax
// 00720255  8b442408             mov eax, dword ptr [esp + 8]
// 00720259  8d54240c             lea edx, [esp + 0xc]
// 0072025d  52                   push edx
// 0072025e  50                   push eax
// 0072025f  83c120               add ecx, 0x20
// 00720262  e8e98b0400           call 0x768e50
// 00720267  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?GetNextMenu@CXTPMenuBarMDIMenus@@QBEXAAPAU__POSITION@@AAPAVCXTPMenuBarMDIMenuInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
