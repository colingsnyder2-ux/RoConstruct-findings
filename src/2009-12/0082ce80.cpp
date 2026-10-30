// roc 2009-12 0082ce80  unit: PAVCXTPReportRecord::?$CArray  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082ce80
//
// 0082ce80  56                   push esi
// 0082ce81  8bf1                 mov esi, ecx
// 0082ce83  e8ba950f00           call 0x926442
// 0082ce88  8d4e20               lea ecx, [esi + 0x20]
// 0082ce8b  c706cc619f00         mov dword ptr [esi], 0x9f61cc
// 0082ce91  e88affffff           call 0x82ce20
// 0082ce96  33c0                 xor eax, eax
// 0082ce98  894644               mov dword ptr [esi + 0x44], eax
// 0082ce9b  894634               mov dword ptr [esi + 0x34], eax
// 0082ce9e  894638               mov dword ptr [esi + 0x38], eax
// 0082cea1  8b442408             mov eax, dword ptr [esp + 8]
// 0082cea5  89463c               mov dword ptr [esi + 0x3c], eax
// 0082cea8  c7464001000000       mov dword ptr [esi + 0x40], 1
// 0082ceaf  8bc6                 mov eax, esi
// 0082ceb1  5e                   pop esi
// 0082ceb2  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecords.cpp (function ??0CXTPReportRecords@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecords.cpp
