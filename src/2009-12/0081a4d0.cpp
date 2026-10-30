// roc 2009-12 0081a4d0  unit: CInstanceRecord::CNameItem  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a4d0
//
// 0081a4d0  56                   push esi
// 0081a4d1  8bf1                 mov esi, ecx
// 0081a4d3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081a4d7  57                   push edi
// 0081a4d8  8b3e                 mov edi, dword ptr [esi]
// 0081a4da  83c120               add ecx, 0x20
// 0081a4dd  ff1580de9800         call dword ptr [0x98de80]
// 0081a4e3  8b9728010000         mov edx, dword ptr [edi + 0x128]
// 0081a4e9  50                   push eax
// 0081a4ea  8b442410             mov eax, dword ptr [esp + 0x10]
// 0081a4ee  50                   push eax
// 0081a4ef  8bce                 mov ecx, esi
// 0081a4f1  ffd2                 call edx
// 0081a4f3  5f                   pop edi
// 0081a4f4  5e                   pop esi
// 0081a4f5  c20800               ret 8
// copied from an identical function in another client (function ?OnConstraintChanged@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@PAVCXTPReportRecordItemConstraint@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp