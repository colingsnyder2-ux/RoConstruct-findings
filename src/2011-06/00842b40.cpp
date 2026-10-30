// roc 2011-06 00842b40  unit: PAVCXTPReportRecord::?$CArray  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00842b40
//
// 00842b40  56                   push esi
// 00842b41  8bf1                 mov esi, ecx
// 00842b43  e8829a1800           call 0x9cc5ca
// 00842b48  8d4e20               lea ecx, [esi + 0x20]
// 00842b4b  c706fc60ac00         mov dword ptr [esi], 0xac60fc
// 00842b51  e8dafeffff           call 0x842a30
// 00842b56  33c0                 xor eax, eax
// 00842b58  894644               mov dword ptr [esi + 0x44], eax
// 00842b5b  894634               mov dword ptr [esi + 0x34], eax
// 00842b5e  894638               mov dword ptr [esi + 0x38], eax
// 00842b61  8b442408             mov eax, dword ptr [esp + 8]
// 00842b65  89463c               mov dword ptr [esi + 0x3c], eax
// 00842b68  c7464001000000       mov dword ptr [esi + 0x40], 1
// 00842b6f  8bc6                 mov eax, esi
// 00842b71  5e                   pop esi
// 00842b72  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecords.cpp (function ??0CXTPReportRecords@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecords.cpp
