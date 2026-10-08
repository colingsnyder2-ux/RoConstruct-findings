// roc 2010-06 007e0f40  unit: PAVCXTPReportRecord::?$CArray  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e0f40
//
// 007e0f40  56                   push esi
// 007e0f41  8bf1                 mov esi, ecx
// 007e0f43  e836be1900           call 0x97cd7e
// 007e0f48  8d4e20               lea ecx, [esi + 0x20]
// 007e0f4b  c706b4a4a500         mov dword ptr [esi], 0xa5a4b4
// 007e0f51  e84affffff           call 0x7e0ea0
// 007e0f56  8b442408             mov eax, dword ptr [esp + 8]
// 007e0f5a  894644               mov dword ptr [esi + 0x44], eax
// 007e0f5d  33c0                 xor eax, eax
// 007e0f5f  894634               mov dword ptr [esi + 0x34], eax
// 007e0f62  894638               mov dword ptr [esi + 0x38], eax
// 007e0f65  89463c               mov dword ptr [esi + 0x3c], eax
// 007e0f68  c7464001000000       mov dword ptr [esi + 0x40], 1
// 007e0f6f  8bc6                 mov eax, esi
// 007e0f71  5e                   pop esi
// 007e0f72  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecords.cpp (function ??0CXTPReportRecords@@QAE@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecords.cpp
