// roc 2007-08 00654d90  unit: CInstanceRecord::CNameItem  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00654d90
//
// 00654d90  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 00654d97  6870878c00           push 0x8c8770
// 00654d9c  743b                 je 0x654dd9
// 00654d9e  ff15ecd27700         call dword ptr [0x77d2ec]
// 00654da4  833d78878c0000       cmp dword ptr [0x8c8778], 0
// 00654dab  741c                 je 0x654dc9
// 00654dad  e85e8ddcff           call 0x41db10
// 00654db2  8b442404             mov eax, dword ptr [esp + 4]
// 00654db6  8b0d6c878c00         mov ecx, dword ptr [0x8c876c]
// 00654dbc  50                   push eax
// 00654dbd  6a00                 push 0
// 00654dbf  51                   push ecx
// 00654dc0  ff15a8d27700         call dword ptr [0x77d2a8]
// 00654dc6  c20400               ret 4
// 00654dc9  8b542404             mov edx, dword ptr [esp + 4]
// 00654dcd  52                   push edx
// 00654dce  e85fb1fdff           call 0x62ff32
// 00654dd3  83c404               add esp, 4
// 00654dd6  c20400               ret 4
// 00654dd9  ff15ecd27700         call dword ptr [0x77d2ec]
// 00654ddf  8b442404             mov eax, dword ptr [esp + 4]
// 00654de3  50                   push eax
// 00654de4  e80db1fdff           call 0x62fef6
// 00654de9  83c404               add esp, 4
// 00654dec  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??2?$CXTPHeapObjectT@VCCmdTarget@@VCXTPReportDataAllocator@@@@SGPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
