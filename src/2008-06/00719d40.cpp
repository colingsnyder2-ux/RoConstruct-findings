// roc 2008-06 00719d40  unit: CXTPNewToolbarDlg  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00719d40
//
// 00719d40  8b442404             mov eax, dword ptr [esp + 4]
// 00719d44  83c178               add ecx, 0x78
// 00719d47  51                   push ecx
// 00719d48  6a64                 push 0x64
// 00719d4a  50                   push eax
// 00719d4b  e81e2b0a00           call 0x7bc86e
// 00719d50  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeTools.cpp (function ?DoDataExchange@CXTPNewToolbarDlg@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeTools.cpp
