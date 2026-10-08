// from server: 100% by auto
// roc 2012-06 00a1c630  unit: CXTPMenuBarMDIMenuInfo  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1c630
//
// 00a1c630  8b442408             mov eax, dword ptr [esp + 8]
// 00a1c634  50                   push eax
// 00a1c635  8b442408             mov eax, dword ptr [esp + 8]
// 00a1c639  8d54240c             lea edx, [esp + 0xc]
// 00a1c63d  52                   push edx
// 00a1c63e  50                   push eax
// 00a1c63f  83c120               add ecx, 0x20
// 00a1c642  e819bbf7ff           call 0x998160
// 00a1c647  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPMenuBar.cpp (function ?GetNextMenu@CXTPMenuBarMDIMenus@@QBEXAAPAU__POSITION@@AAPAVCXTPMenuBarMDIMenuInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp
