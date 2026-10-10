// roc 2012-06 009ab840  unit: XTP_REPORTRECORDITEM_METRICS  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ab840
//
// 009ab840  53                   push ebx
// 009ab841  56                   push esi
// 009ab842  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009ab846  57                   push edi
// 009ab847  68e802c100           push 0xc102e8
// 009ab84c  6834fabf00           push 0xbffa34
// 009ab851  8bce                 mov ecx, esi
// 009ab853  ff15983fb200         call dword ptr [0xb23f98]
// 009ab859  68e002c100           push 0xc102e0
// 009ab85e  68dc02c100           push 0xc102dc
// 009ab863  8bce                 mov ecx, esi
// 009ab865  ff15983fb200         call dword ptr [0xb23f98]
// 009ab86b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 009ab86f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 009ab873  57                   push edi
// 009ab874  53                   push ebx
// 009ab875  56                   push esi
// 009ab876  e865d2ffff           call 0x9a8ae0
// 009ab87b  57                   push edi
// 009ab87c  53                   push ebx
// 009ab87d  56                   push esi
// 009ab87e  e8fdd2ffff           call 0x9a8b80
// 009ab883  83c418               add esp, 0x18
// 009ab886  5f                   pop edi
// 009ab887  5e                   pop esi
// 009ab888  5b                   pop ebx
// 009ab889  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\ReportControl\XTPReportControlLocale.cpp (function ?_ProcessDateTimeSpecs@CXTPReportControlLocale@@CAXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBU_SYSTEMTIME@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/ReportControl/XTPReportControlLocale.cpp
