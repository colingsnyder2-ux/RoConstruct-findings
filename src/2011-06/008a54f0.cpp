// from server: 100% by auto
// roc 2011-06 008a54f0  unit: CXTPMenuBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a54f0
//
// 008a54f0  8b442404             mov eax, dword ptr [esp + 4]
// 008a54f4  50                   push eax
// 008a54f5  83c120               add ecx, 0x20
// 008a54f8  e8839f0100           call 0x8bf480
// 008a54fd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008a5501  8908                 mov dword ptr [eax], ecx
// 008a5503  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPMenuBar.cpp (function ?SetAt@CXTPMenuBarMDIMenus@@QAEXIPAVCXTPMenuBarMDIMenuInfo@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp
