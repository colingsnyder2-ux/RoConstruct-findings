// roc 2012-06 009baed0  unit: PAVCXTPReportRecord::?$CArray  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009baed0
//
// 009baed0  56                   push esi
// 009baed1  8bf1                 mov esi, ecx
// 009baed3  e8ace60d00           call 0xa99584
// 009baed8  8d4e20               lea ecx, [esi + 0x20]
// 009baedb  c706e417c100         mov dword ptr [esi], 0xc117e4
// 009baee1  e88affffff           call 0x9bae70
// 009baee6  33c0                 xor eax, eax
// 009baee8  894644               mov dword ptr [esi + 0x44], eax
// 009baeeb  894634               mov dword ptr [esi + 0x34], eax
// 009baeee  894638               mov dword ptr [esi + 0x38], eax
// 009baef1  8b442408             mov eax, dword ptr [esp + 8]
// 009baef5  89463c               mov dword ptr [esi + 0x3c], eax
// 009baef8  c7464001000000       mov dword ptr [esi + 0x40], 1
// 009baeff  8bc6                 mov eax, esi
// 009baf01  5e                   pop esi
// 009baf02  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecords.cpp (function ??0CXTPReportRecords@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecords.cpp
