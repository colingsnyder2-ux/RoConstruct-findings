// roc 2007-08 00659e30  unit: UCXTPReportRowAllocatorData::?$CXTPHeapAllocatorT  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00659e30
//
// 00659e30  56                   push esi
// 00659e31  8bf1                 mov esi, ecx
// 00659e33  c706a4837c00         mov dword ptr [esi], 0x7c83a4
// 00659e39  833d80878c0000       cmp dword ptr [0x8c8780], 0
// 00659e40  751a                 jne 0x659e5c
// 00659e42  a17c878c00           mov eax, dword ptr [0x8c877c]
// 00659e47  85c0                 test eax, eax
// 00659e49  7407                 je 0x659e52
// 00659e4b  50                   push eax
// 00659e4c  ff1584d27700         call dword ptr [0x77d284]
// 00659e52  c7057c878c0000000000 mov dword ptr [0x8c877c], 0
// 00659e5c  f644240801           test byte ptr [esp + 8], 1
// 00659e61  7409                 je 0x659e6c
// 00659e63  56                   push esi
// 00659e64  e8f95dfdff           call 0x62fc62
// 00659e69  83c404               add esp, 4
// 00659e6c  8bc6                 mov eax, esi
// 00659e6e  5e                   pop esi
// 00659e6f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapAllocatorT@UCXTPReportDataAllocatorData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
