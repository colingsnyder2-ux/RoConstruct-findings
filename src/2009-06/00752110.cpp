// roc 2009-06 00752110  unit: PAVCXTPReportRecord::?$CArray  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00752110
//
// 00752110  56                   push esi
// 00752111  8bf1                 mov esi, ecx
// 00752113  e8129e0f00           call 0x84bf2a
// 00752118  8d4e20               lea ecx, [esi + 0x20]
// 0075211b  c706245d8f00         mov dword ptr [esi], 0x8f5d24
// 00752121  e88affffff           call 0x7520b0
// 00752126  33c0                 xor eax, eax
// 00752128  894644               mov dword ptr [esi + 0x44], eax
// 0075212b  894634               mov dword ptr [esi + 0x34], eax
// 0075212e  894638               mov dword ptr [esi + 0x38], eax
// 00752131  8b442408             mov eax, dword ptr [esp + 8]
// 00752135  89463c               mov dword ptr [esi + 0x3c], eax
// 00752138  c7464001000000       mov dword ptr [esi + 0x40], 1
// 0075213f  8bc6                 mov eax, esi
// 00752141  5e                   pop esi
// 00752142  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecords.cpp (function ??0CXTPReportRecords@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecords.cpp
