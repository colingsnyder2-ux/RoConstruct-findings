// from server: 100% by auto
// roc 2008-06 006d00a0  unit: CXTPReportControl  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d00a0
//
// 006d00a0  33c0                 xor eax, eax
// 006d00a2  56                   push esi
// 006d00a3  8bf1                 mov esi, ecx
// 006d00a5  8b8ee0020000         mov ecx, dword ptr [esi + 0x2e0]
// 006d00ab  8901                 mov dword ptr [ecx], eax
// 006d00ad  894104               mov dword ptr [ecx + 4], eax
// 006d00b0  894108               mov dword ptr [ecx + 8], eax
// 006d00b3  89410c               mov dword ptr [ecx + 0xc], eax
// 006d00b6  894110               mov dword ptr [ecx + 0x10], eax
// 006d00b9  894114               mov dword ptr [ecx + 0x14], eax
// 006d00bc  894118               mov dword ptr [ecx + 0x18], eax
// 006d00bf  89411c               mov dword ptr [ecx + 0x1c], eax
// 006d00c2  894120               mov dword ptr [ecx + 0x20], eax
// 006d00c5  894124               mov dword ptr [ecx + 0x24], eax
// 006d00c8  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 006d00ce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d00d2  89480c               mov dword ptr [eax + 0xc], ecx
// 006d00d5  8b96e0020000         mov edx, dword ptr [esi + 0x2e0]
// 006d00db  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d00df  894210               mov dword ptr [edx + 0x10], eax
// 006d00e2  8b8ee0020000         mov ecx, dword ptr [esi + 0x2e0]
// 006d00e8  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d00ec  895124               mov dword ptr [ecx + 0x24], edx
// 006d00ef  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 006d00f5  50                   push eax
// 006d00f6  6ab6                 push -0x4a
// 006d00f8  8bce                 mov ecx, esi
// 006d00fa  e821fcffff           call 0x6cfd20
// 006d00ff  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 006d0105  5e                   pop esi
// 006d0106  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnGetToolTipInfo@CXTPReportControl@@MAEABUXTP_NM_REPORTTOOLTIPINFO@@PAVCXTPReportRow@@PAVCXTPReportRecordItem@@AAV?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
