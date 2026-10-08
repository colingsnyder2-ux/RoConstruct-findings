// roc 2009-06 00752150  unit: PAVCXTPReportRecord::?$CArray  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00752150
//
// 00752150  56                   push esi
// 00752151  8bf1                 mov esi, ecx
// 00752153  e8d29d0f00           call 0x84bf2a
// 00752158  8d4e20               lea ecx, [esi + 0x20]
// 0075215b  c706245d8f00         mov dword ptr [esi], 0x8f5d24
// 00752161  e84affffff           call 0x7520b0
// 00752166  8b442408             mov eax, dword ptr [esp + 8]
// 0075216a  894644               mov dword ptr [esi + 0x44], eax
// 0075216d  33c0                 xor eax, eax
// 0075216f  894634               mov dword ptr [esi + 0x34], eax
// 00752172  894638               mov dword ptr [esi + 0x38], eax
// 00752175  89463c               mov dword ptr [esi + 0x3c], eax
// 00752178  c7464001000000       mov dword ptr [esi + 0x40], 1
// 0075217f  8bc6                 mov eax, esi
// 00752181  5e                   pop esi
// 00752182  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecords.cpp (function ??0CXTPReportRecords@@QAE@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecords.cpp
