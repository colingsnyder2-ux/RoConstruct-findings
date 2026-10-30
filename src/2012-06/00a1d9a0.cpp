// from server: 100% by auto
// roc 2012-06 00a1d9a0  unit: CXTPMenuBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1d9a0
//
// 00a1d9a0  8b442404             mov eax, dword ptr [esp + 4]
// 00a1d9a4  50                   push eax
// 00a1d9a5  83c120               add ecx, 0x20
// 00a1d9a8  e8a3e0f7ff           call 0x99ba50
// 00a1d9ad  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a1d9b1  8908                 mov dword ptr [eax], ecx
// 00a1d9b3  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPMenuBar.cpp (function ?SetAt@CXTPMenuBarMDIMenus@@QAEXIPAVCXTPMenuBarMDIMenuInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp
