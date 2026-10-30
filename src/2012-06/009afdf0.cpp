// roc 2012-06 009afdf0  unit: CXTPReportControl  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009afdf0
//
// 009afdf0  33c0                 xor eax, eax
// 009afdf2  56                   push esi
// 009afdf3  8bf1                 mov esi, ecx
// 009afdf5  8b8ee0020000         mov ecx, dword ptr [esi + 0x2e0]
// 009afdfb  8901                 mov dword ptr [ecx], eax
// 009afdfd  894104               mov dword ptr [ecx + 4], eax
// 009afe00  894108               mov dword ptr [ecx + 8], eax
// 009afe03  89410c               mov dword ptr [ecx + 0xc], eax
// 009afe06  894110               mov dword ptr [ecx + 0x10], eax
// 009afe09  894114               mov dword ptr [ecx + 0x14], eax
// 009afe0c  894118               mov dword ptr [ecx + 0x18], eax
// 009afe0f  89411c               mov dword ptr [ecx + 0x1c], eax
// 009afe12  894120               mov dword ptr [ecx + 0x20], eax
// 009afe15  894124               mov dword ptr [ecx + 0x24], eax
// 009afe18  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 009afe1e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009afe22  89480c               mov dword ptr [eax + 0xc], ecx
// 009afe25  8b96e0020000         mov edx, dword ptr [esi + 0x2e0]
// 009afe2b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009afe2f  894210               mov dword ptr [edx + 0x10], eax
// 009afe32  8b8ee0020000         mov ecx, dword ptr [esi + 0x2e0]
// 009afe38  8b542410             mov edx, dword ptr [esp + 0x10]
// 009afe3c  895124               mov dword ptr [ecx + 0x24], edx
// 009afe3f  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 009afe45  50                   push eax
// 009afe46  6ab6                 push -0x4a
// 009afe48  8bce                 mov ecx, esi
// 009afe4a  e821fcffff           call 0x9afa70
// 009afe4f  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 009afe55  5e                   pop esi
// 009afe56  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnGetToolTipInfo@CXTPReportControl@@MAEABUXTP_NM_REPORTTOOLTIPINFO@@PAVCXTPReportRow@@PAVCXTPReportRecordItem@@AAV?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
