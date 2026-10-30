// roc 2009-12 0081af00  unit: CInstanceRecord::CNameItem  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081af00
//
// 0081af00  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0081af04  8b01                 mov eax, dword ptr [ecx]
// 0081af06  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 0081af0c  52                   push edx
// 0081af0d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0081af11  52                   push edx
// 0081af12  ffd0                 call eax
// 0081af14  85c0                 test eax, eax
// 0081af16  7c19                 jl 0x81af31
// 0081af18  e8018cfdff           call 0x7f3b1e
// 0081af1d  68897f0000           push 0x7f89
// 0081af22  6a00                 push 0
// 0081af24  ff1548ca9800         call dword ptr [0x98ca48]
// 0081af2a  50                   push eax
// 0081af2b  ff1520ca9800         call dword ptr [0x98ca20]
// 0081af31  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnMouseMove@CXTPReportRecordItem@@UAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp