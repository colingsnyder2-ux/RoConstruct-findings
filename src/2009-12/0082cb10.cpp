// roc 2009-12 0082cb10  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082cb10
//
// 0082cb10  83794000             cmp dword ptr [ecx + 0x40], 0
// 0082cb14  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0082cb18  7514                 jne 0x82cb2e
// 0082cb1a  ff1580de9800         call dword ptr [0x98de80]
// 0082cb20  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0082cb24  50                   push eax
// 0082cb25  ff15d4cf9800         call dword ptr [0x98cfd4]
// 0082cb2b  c20800               ret 8
// 0082cb2e  ff1580de9800         call dword ptr [0x98de80]
// 0082cb34  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0082cb38  50                   push eax
// 0082cb39  ff1584de9800         call dword ptr [0x98de84]
// 0082cb3f  c20800               ret 8
// copied from an identical function in another client (function ?Compare@CXTPReportRecords@@UBEHABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp