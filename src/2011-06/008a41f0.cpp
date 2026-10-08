// from server: 100% by auto
// roc 2011-06 008a41f0  unit: CXTPPropertyGridItemConstraint  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a41f0
//
// 008a41f0  8b442408             mov eax, dword ptr [esp + 8]
// 008a41f4  50                   push eax
// 008a41f5  8b442408             mov eax, dword ptr [esp + 8]
// 008a41f9  8d54240c             lea edx, [esp + 0xc]
// 008a41fd  52                   push edx
// 008a41fe  50                   push eax
// 008a41ff  83c120               add ecx, 0x20
// 008a4202  e8d9940200           call 0x8cd6e0
// 008a4207  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPMenuBar.cpp (function ?GetNextMenu@CXTPMenuBarMDIMenus@@QBEXAAPAU__POSITION@@AAPAVCXTPMenuBarMDIMenuInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp
