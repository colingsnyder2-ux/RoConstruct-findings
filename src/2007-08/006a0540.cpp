// roc 2007-08 006a0540  unit: CXTPNewToolbarDlg  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a0540
//
// 006a0540  8b442404             mov eax, dword ptr [esp + 4]
// 006a0544  83c178               add ecx, 0x78
// 006a0547  51                   push ecx
// 006a0548  6a64                 push 0x64
// 006a054a  50                   push eax
// 006a054b  e8dafef8ff           call 0x63042a
// 006a0550  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCustomizeTools.cpp (function ?DoDataExchange@CXTPNewToolbarDlg@@MAEXPAVCDataExchange@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCustomizeTools.cpp
