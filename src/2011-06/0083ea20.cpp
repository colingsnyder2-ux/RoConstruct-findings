// roc 2011-06 0083ea20  unit: CInstanceRecord::CNameItem  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083ea20
//
// 0083ea20  56                   push esi
// 0083ea21  8bf1                 mov esi, ecx
// 0083ea23  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0083ea27  57                   push edi
// 0083ea28  8b3e                 mov edi, dword ptr [esi]
// 0083ea2a  83c120               add ecx, 0x20
// 0083ea2d  ff15c82da400         call dword ptr [0xa42dc8]
// 0083ea33  8b9728010000         mov edx, dword ptr [edi + 0x128]
// 0083ea39  50                   push eax
// 0083ea3a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0083ea3e  50                   push eax
// 0083ea3f  8bce                 mov ecx, esi
// 0083ea41  ffd2                 call edx
// 0083ea43  5f                   pop edi
// 0083ea44  5e                   pop esi
// 0083ea45  c20800               ret 8
// copied from an identical function in another client (function ?OnConstraintChanged@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@PAVCXTPReportRecordItemConstraint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp