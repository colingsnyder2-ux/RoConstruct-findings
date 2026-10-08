// from server: 100% by auto
// roc 2008-06 00721670  unit: CXTPMenuBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00721670
//
// 00721670  8b442404             mov eax, dword ptr [esp + 4]
// 00721674  50                   push eax
// 00721675  83c120               add ecx, 0x20
// 00721678  e853ffffff           call 0x7215d0
// 0072167d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00721681  8908                 mov dword ptr [eax], ecx
// 00721683  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ?SetAt@CXTPMenuBarMDIMenus@@QAEXIPAVCXTPMenuBarMDIMenuInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
