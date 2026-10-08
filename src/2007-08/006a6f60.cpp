// from server: 100% by auto
// roc 2007-08 006a6f60  unit: IIHH::?$CMap  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6f60
//
// 006a6f60  8b442404             mov eax, dword ptr [esp + 4]
// 006a6f64  50                   push eax
// 006a6f65  83c120               add ecx, 0x20
// 006a6f68  e833e4f8ff           call 0x6353a0
// 006a6f6d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a6f71  8908                 mov dword ptr [eax], ecx
// 006a6f73  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMenuBar.cpp (function ?SetAt@CXTPMenuBarMDIMenus@@QAEXIPAVCXTPMenuBarMDIMenuInfo@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMenuBar.cpp
