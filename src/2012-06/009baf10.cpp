// roc 2012-06 009baf10  unit: PAVCXTPReportRecord::?$CArray  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009baf10
//
// 009baf10  56                   push esi
// 009baf11  8bf1                 mov esi, ecx
// 009baf13  e86ce60d00           call 0xa99584
// 009baf18  8d4e20               lea ecx, [esi + 0x20]
// 009baf1b  c706e417c100         mov dword ptr [esi], 0xc117e4
// 009baf21  e84affffff           call 0x9bae70
// 009baf26  8b442408             mov eax, dword ptr [esp + 8]
// 009baf2a  894644               mov dword ptr [esi + 0x44], eax
// 009baf2d  33c0                 xor eax, eax
// 009baf2f  894634               mov dword ptr [esi + 0x34], eax
// 009baf32  894638               mov dword ptr [esi + 0x38], eax
// 009baf35  89463c               mov dword ptr [esi + 0x3c], eax
// 009baf38  c7464001000000       mov dword ptr [esi + 0x40], 1
// 009baf3f  8bc6                 mov eax, esi
// 009baf41  5e                   pop esi
// 009baf42  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecords.cpp (function ??0CXTPReportRecords@@QAE@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecords.cpp
