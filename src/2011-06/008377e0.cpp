// roc 2011-06 008377e0  unit: CXTPReportControl  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008377e0
//
// 008377e0  33c0                 xor eax, eax
// 008377e2  56                   push esi
// 008377e3  8bf1                 mov esi, ecx
// 008377e5  8b8ee0020000         mov ecx, dword ptr [esi + 0x2e0]
// 008377eb  8901                 mov dword ptr [ecx], eax
// 008377ed  894104               mov dword ptr [ecx + 4], eax
// 008377f0  894108               mov dword ptr [ecx + 8], eax
// 008377f3  89410c               mov dword ptr [ecx + 0xc], eax
// 008377f6  894110               mov dword ptr [ecx + 0x10], eax
// 008377f9  894114               mov dword ptr [ecx + 0x14], eax
// 008377fc  894118               mov dword ptr [ecx + 0x18], eax
// 008377ff  89411c               mov dword ptr [ecx + 0x1c], eax
// 00837802  894120               mov dword ptr [ecx + 0x20], eax
// 00837805  894124               mov dword ptr [ecx + 0x24], eax
// 00837808  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 0083780e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00837812  89480c               mov dword ptr [eax + 0xc], ecx
// 00837815  8b96e0020000         mov edx, dword ptr [esi + 0x2e0]
// 0083781b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0083781f  894210               mov dword ptr [edx + 0x10], eax
// 00837822  8b8ee0020000         mov ecx, dword ptr [esi + 0x2e0]
// 00837828  8b542410             mov edx, dword ptr [esp + 0x10]
// 0083782c  895124               mov dword ptr [ecx + 0x24], edx
// 0083782f  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 00837835  50                   push eax
// 00837836  6ab6                 push -0x4a
// 00837838  8bce                 mov ecx, esi
// 0083783a  e821fcffff           call 0x837460
// 0083783f  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 00837845  5e                   pop esi
// 00837846  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnGetToolTipInfo@CXTPReportControl@@MAEABUXTP_NM_REPORTTOOLTIPINFO@@PAVCXTPReportRow@@PAVCXTPReportRecordItem@@AAV?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
