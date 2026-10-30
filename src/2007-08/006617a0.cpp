// from server: 100% by auto
// roc 2007-08 006617a0  unit: PAVCXTPReportRecord::?$CArray  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006617a0
//
// 006617a0  56                   push esi
// 006617a1  8bf1                 mov esi, ecx
// 006617a3  e8926b0d00           call 0x73833a
// 006617a8  8d4e20               lea ecx, [esi + 0x20]
// 006617ab  c706fc8d7c00         mov dword ptr [esi], 0x7c8dfc
// 006617b1  e88affffff           call 0x661740
// 006617b6  33c0                 xor eax, eax
// 006617b8  894644               mov dword ptr [esi + 0x44], eax
// 006617bb  894634               mov dword ptr [esi + 0x34], eax
// 006617be  894638               mov dword ptr [esi + 0x38], eax
// 006617c1  8b442408             mov eax, dword ptr [esp + 8]
// 006617c5  89463c               mov dword ptr [esi + 0x3c], eax
// 006617c8  c7464001000000       mov dword ptr [esi + 0x40], 1
// 006617cf  8bc6                 mov eax, esi
// 006617d1  5e                   pop esi
// 006617d2  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRecords.cpp (function ??0CXTPReportRecords@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRecords.cpp
