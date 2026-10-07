// roc 2007-08 00659e80  unit: UCXTPReportAllocatorDefaultData::?$CXTPHeapAllocatorT  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00659e80
//
// 00659e80  56                   push esi
// 00659e81  8bf1                 mov esi, ecx
// 00659e83  c706ac837c00         mov dword ptr [esi], 0x7c83ac
// 00659e89  833d90878c0000       cmp dword ptr [0x8c8790], 0
// 00659e90  751a                 jne 0x659eac
// 00659e92  a18c878c00           mov eax, dword ptr [0x8c878c]
// 00659e97  85c0                 test eax, eax
// 00659e99  7407                 je 0x659ea2
// 00659e9b  50                   push eax
// 00659e9c  ff1584d27700         call dword ptr [0x77d284]
// 00659ea2  c7058c878c0000000000 mov dword ptr [0x8c878c], 0
// 00659eac  f644240801           test byte ptr [esp + 8], 1
// 00659eb1  7409                 je 0x659ebc
// 00659eb3  56                   push esi
// 00659eb4  e8a95dfdff           call 0x62fc62
// 00659eb9  83c404               add esp, 4
// 00659ebc  8bc6                 mov eax, esi
// 00659ebe  5e                   pop esi
// 00659ebf  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapAllocatorT@UCXTPReportDataAllocatorData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
