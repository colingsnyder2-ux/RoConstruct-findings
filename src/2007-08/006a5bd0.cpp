// from server: 100% by auto
// roc 2007-08 006a5bd0  unit: CXTPMenuBarMDIMenuInfo  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a5bd0
//
// 006a5bd0  8b442408             mov eax, dword ptr [esp + 8]
// 006a5bd4  50                   push eax
// 006a5bd5  8b442408             mov eax, dword ptr [esp + 8]
// 006a5bd9  8d54240c             lea edx, [esp + 0xc]
// 006a5bdd  52                   push edx
// 006a5bde  50                   push eax
// 006a5bdf  83c120               add ecx, 0x20
// 006a5be2  e849610400           call 0x6ebd30
// 006a5be7  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMenuBar.cpp (function ?GetNextMenu@CXTPMenuBarMDIMenus@@QBEXAAPAU__POSITION@@AAPAVCXTPMenuBarMDIMenuInfo@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMenuBar.cpp
