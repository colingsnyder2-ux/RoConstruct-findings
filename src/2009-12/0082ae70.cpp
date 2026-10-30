// roc 2009-12 0082ae70  unit: PAVCXTPReportRecordItem::?$CArray  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082ae70
//
// 0082ae70  56                   push esi
// 0082ae71  57                   push edi
// 0082ae72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0082ae76  8bf1                 mov esi, ecx
// 0082ae78  8b4628               mov eax, dword ptr [esi + 0x28]
// 0082ae7b  8d4e20               lea ecx, [esi + 0x20]
// 0082ae7e  57                   push edi
// 0082ae7f  50                   push eax
// 0082ae80  e8ebfd0300           call 0x86ac70
// 0082ae85  89774c               mov dword ptr [edi + 0x4c], esi
// 0082ae88  8bc7                 mov eax, edi
// 0082ae8a  5f                   pop edi
// 0082ae8b  5e                   pop esi
// 0082ae8c  c20400               ret 4
// copied from an identical function in another client (function ?AddItem@CXTPReportRecord@@QAEPAVCXTPReportRecordItem@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecord.cpp