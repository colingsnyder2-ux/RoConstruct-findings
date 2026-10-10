// roc 2008-06 006c7a50  unit: CInstanceRecord::CNameItem  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c7a50
//
// 006c7a50  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006c7a54  8b01                 mov eax, dword ptr [ecx]
// 006c7a56  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 006c7a5c  52                   push edx
// 006c7a5d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006c7a61  52                   push edx
// 006c7a62  ffd0                 call eax
// 006c7a64  85c0                 test eax, eax
// 006c7a66  7c19                 jl 0x6c7a81
// 006c7a68  e8b98efdff           call 0x6a0926
// 006c7a6d  68897f0000           push 0x7f89
// 006c7a72  6a00                 push 0
// 006c7a74  ff15d02d8000         call dword ptr [0x802dd0]
// 006c7a7a  50                   push eax
// 006c7a7b  ff15042d8000         call dword ptr [0x802d04]
// 006c7a81  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItem.cpp (function ?OnMouseMove@CXTPReportRecordItem@@UAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp
