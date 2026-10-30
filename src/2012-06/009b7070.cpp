// roc 2012-06 009b7070  unit: CInstanceRecord::CNameItem  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b7070
//
// 009b7070  56                   push esi
// 009b7071  8bf1                 mov esi, ecx
// 009b7073  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009b7077  57                   push edi
// 009b7078  8b3e                 mov edi, dword ptr [esi]
// 009b707a  83c120               add ecx, 0x20
// 009b707d  ff159847b200         call dword ptr [0xb24798]
// 009b7083  8b9728010000         mov edx, dword ptr [edi + 0x128]
// 009b7089  50                   push eax
// 009b708a  8b442410             mov eax, dword ptr [esp + 0x10]
// 009b708e  50                   push eax
// 009b708f  8bce                 mov ecx, esi
// 009b7091  ffd2                 call edx
// 009b7093  5f                   pop edi
// 009b7094  5e                   pop esi
// 009b7095  c20800               ret 8
// copied from an identical function in another client (function ?OnConstraintChanged@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@PAVCXTPReportRecordItemConstraint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp