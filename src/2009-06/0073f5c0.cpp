// roc 2009-06 0073f5c0  unit: CInstanceRecord::CNameItem  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073f5c0
//
// 0073f5c0  56                   push esi
// 0073f5c1  8bf1                 mov esi, ecx
// 0073f5c3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073f5c7  57                   push edi
// 0073f5c8  8b3e                 mov edi, dword ptr [esi]
// 0073f5ca  83c120               add ecx, 0x20
// 0073f5cd  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0073f5d3  8b9728010000         mov edx, dword ptr [edi + 0x128]
// 0073f5d9  50                   push eax
// 0073f5da  8b442410             mov eax, dword ptr [esp + 0x10]
// 0073f5de  50                   push eax
// 0073f5df  8bce                 mov ecx, esi
// 0073f5e1  ffd2                 call edx
// 0073f5e3  5f                   pop edi
// 0073f5e4  5e                   pop esi
// 0073f5e5  c20800               ret 8
// copied from an identical function in another client (function ?OnConstraintChanged@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@PAVCXTPReportRecordItemConstraint@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp