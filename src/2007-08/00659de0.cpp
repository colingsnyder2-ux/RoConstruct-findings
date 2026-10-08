// from server: 100% by auto
// roc 2007-08 00659de0  unit: UCXTPReportDataAllocatorData::?$CXTPHeapAllocatorT  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00659de0
//
// 00659de0  56                   push esi
// 00659de1  8bf1                 mov esi, ecx
// 00659de3  c7069c837c00         mov dword ptr [esi], 0x7c839c
// 00659de9  833d70878c0000       cmp dword ptr [0x8c8770], 0
// 00659df0  751a                 jne 0x659e0c
// 00659df2  a16c878c00           mov eax, dword ptr [0x8c876c]
// 00659df7  85c0                 test eax, eax
// 00659df9  7407                 je 0x659e02
// 00659dfb  50                   push eax
// 00659dfc  ff1584d27700         call dword ptr [0x77d284]
// 00659e02  c7056c878c0000000000 mov dword ptr [0x8c876c], 0
// 00659e0c  f644240801           test byte ptr [esp + 8], 1
// 00659e11  7409                 je 0x659e1c
// 00659e13  56                   push esi
// 00659e14  e8495efdff           call 0x62fc62
// 00659e19  83c404               add esp, 4
// 00659e1c  8bc6                 mov eax, esi
// 00659e1e  5e                   pop esi
// 00659e1f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapAllocatorT@UCXTPReportDataAllocatorData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
