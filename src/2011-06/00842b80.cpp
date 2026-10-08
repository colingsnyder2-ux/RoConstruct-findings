// roc 2011-06 00842b80  unit: PAVCXTPReportRecord::?$CArray  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00842b80
//
// 00842b80  56                   push esi
// 00842b81  8bf1                 mov esi, ecx
// 00842b83  e8429a1800           call 0x9cc5ca
// 00842b88  8d4e20               lea ecx, [esi + 0x20]
// 00842b8b  c706fc60ac00         mov dword ptr [esi], 0xac60fc
// 00842b91  e89afeffff           call 0x842a30
// 00842b96  8b442408             mov eax, dword ptr [esp + 8]
// 00842b9a  894644               mov dword ptr [esi + 0x44], eax
// 00842b9d  33c0                 xor eax, eax
// 00842b9f  894634               mov dword ptr [esi + 0x34], eax
// 00842ba2  894638               mov dword ptr [esi + 0x38], eax
// 00842ba5  89463c               mov dword ptr [esi + 0x3c], eax
// 00842ba8  c7464001000000       mov dword ptr [esi + 0x40], 1
// 00842baf  8bc6                 mov eax, esi
// 00842bb1  5e                   pop esi
// 00842bb2  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecords.cpp (function ??0CXTPReportRecords@@QAE@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecords.cpp
