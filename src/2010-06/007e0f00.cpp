// roc 2010-06 007e0f00  unit: PAVCXTPReportRecord::?$CArray  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e0f00
//
// 007e0f00  56                   push esi
// 007e0f01  8bf1                 mov esi, ecx
// 007e0f03  e876be1900           call 0x97cd7e
// 007e0f08  8d4e20               lea ecx, [esi + 0x20]
// 007e0f0b  c706b4a4a500         mov dword ptr [esi], 0xa5a4b4
// 007e0f11  e88affffff           call 0x7e0ea0
// 007e0f16  33c0                 xor eax, eax
// 007e0f18  894644               mov dword ptr [esi + 0x44], eax
// 007e0f1b  894634               mov dword ptr [esi + 0x34], eax
// 007e0f1e  894638               mov dword ptr [esi + 0x38], eax
// 007e0f21  8b442408             mov eax, dword ptr [esp + 8]
// 007e0f25  89463c               mov dword ptr [esi + 0x3c], eax
// 007e0f28  c7464001000000       mov dword ptr [esi + 0x40], 1
// 007e0f2f  8bc6                 mov eax, esi
// 007e0f31  5e                   pop esi
// 007e0f32  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecords.cpp (function ??0CXTPReportRecords@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecords.cpp
