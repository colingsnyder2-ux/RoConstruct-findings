// roc 2010-06 007ce5a0  unit: CInstanceRecord::CNameItem  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ce5a0
//
// 007ce5a0  56                   push esi
// 007ce5a1  8bf1                 mov esi, ecx
// 007ce5a3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007ce5a7  57                   push edi
// 007ce5a8  8b3e                 mov edi, dword ptr [esi]
// 007ce5aa  83c120               add ecx, 0x20
// 007ce5ad  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007ce5b3  8b9728010000         mov edx, dword ptr [edi + 0x128]
// 007ce5b9  50                   push eax
// 007ce5ba  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ce5be  50                   push eax
// 007ce5bf  8bce                 mov ecx, esi
// 007ce5c1  ffd2                 call edx
// 007ce5c3  5f                   pop edi
// 007ce5c4  5e                   pop esi
// 007ce5c5  c20800               ret 8
// copied from an identical function in another client (function ?OnConstraintChanged@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@PAVCXTPReportRecordItemConstraint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp