// roc 2008-06 006d7b70  unit: PAVCXTPReportRecord::?$CArray  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d7b70
//
// 006d7b70  56                   push esi
// 006d7b71  8bf1                 mov esi, ecx
// 006d7b73  e832440e00           call 0x7bbfaa
// 006d7b78  8d4e20               lea ecx, [esi + 0x20]
// 006d7b7b  c706bc448500         mov dword ptr [esi], 0x8544bc
// 006d7b81  e88affffff           call 0x6d7b10
// 006d7b86  33c0                 xor eax, eax
// 006d7b88  894644               mov dword ptr [esi + 0x44], eax
// 006d7b8b  894634               mov dword ptr [esi + 0x34], eax
// 006d7b8e  894638               mov dword ptr [esi + 0x38], eax
// 006d7b91  8b442408             mov eax, dword ptr [esp + 8]
// 006d7b95  89463c               mov dword ptr [esi + 0x3c], eax
// 006d7b98  c7464001000000       mov dword ptr [esi + 0x40], 1
// 006d7b9f  8bc6                 mov eax, esi
// 006d7ba1  5e                   pop esi
// 006d7ba2  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecords.cpp (function ??0CXTPReportRecords@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecords.cpp
