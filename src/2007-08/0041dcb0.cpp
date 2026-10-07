// roc 2007-08 0041dcb0  unit: CInstanceExplorer  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041dcb0
//
// 0041dcb0  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 0041dcb7  7410                 je 0x41dcc9
// 0041dcb9  8b442404             mov eax, dword ptr [esp + 4]
// 0041dcbd  50                   push eax
// 0041dcbe  e8edfdffff           call 0x41dab0
// 0041dcc3  83c404               add esp, 4
// 0041dcc6  c20400               ret 4
// 0041dcc9  6870878c00           push 0x8c8770
// 0041dcce  ff15e8d27700         call dword ptr [0x77d2e8]
// 0041dcd4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041dcd8  51                   push ecx
// 0041dcd9  e8841f2100           call 0x62fc62
// 0041dcde  59                   pop ecx
// 0041dcdf  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??3?$CXTPHeapObjectT@VCCmdTarget@@VCXTPReportRowAllocator@@@@SGXPAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
