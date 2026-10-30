// roc 2009-06 007487e0  unit: CXTPReportControl  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007487e0
//
// 007487e0  33c0                 xor eax, eax
// 007487e2  56                   push esi
// 007487e3  8bf1                 mov esi, ecx
// 007487e5  8b8ee0020000         mov ecx, dword ptr [esi + 0x2e0]
// 007487eb  8901                 mov dword ptr [ecx], eax
// 007487ed  894104               mov dword ptr [ecx + 4], eax
// 007487f0  894108               mov dword ptr [ecx + 8], eax
// 007487f3  89410c               mov dword ptr [ecx + 0xc], eax
// 007487f6  894110               mov dword ptr [ecx + 0x10], eax
// 007487f9  894114               mov dword ptr [ecx + 0x14], eax
// 007487fc  894118               mov dword ptr [ecx + 0x18], eax
// 007487ff  89411c               mov dword ptr [ecx + 0x1c], eax
// 00748802  894120               mov dword ptr [ecx + 0x20], eax
// 00748805  894124               mov dword ptr [ecx + 0x24], eax
// 00748808  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 0074880e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00748812  89480c               mov dword ptr [eax + 0xc], ecx
// 00748815  8b96e0020000         mov edx, dword ptr [esi + 0x2e0]
// 0074881b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0074881f  894210               mov dword ptr [edx + 0x10], eax
// 00748822  8b8ee0020000         mov ecx, dword ptr [esi + 0x2e0]
// 00748828  8b542410             mov edx, dword ptr [esp + 0x10]
// 0074882c  895124               mov dword ptr [ecx + 0x24], edx
// 0074882f  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 00748835  50                   push eax
// 00748836  6ab6                 push -0x4a
// 00748838  8bce                 mov ecx, esi
// 0074883a  e821fcffff           call 0x748460
// 0074883f  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 00748845  5e                   pop esi
// 00748846  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnGetToolTipInfo@CXTPReportControl@@MAEABUXTP_NM_REPORTTOOLTIPINFO@@PAVCXTPReportRow@@PAVCXTPReportRecordItem@@AAV?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
