// roc 2009-12 008235f0  unit: CXTPReportControl  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008235f0
//
// 008235f0  33c0                 xor eax, eax
// 008235f2  56                   push esi
// 008235f3  8bf1                 mov esi, ecx
// 008235f5  8b8ee0020000         mov ecx, dword ptr [esi + 0x2e0]
// 008235fb  8901                 mov dword ptr [ecx], eax
// 008235fd  894104               mov dword ptr [ecx + 4], eax
// 00823600  894108               mov dword ptr [ecx + 8], eax
// 00823603  89410c               mov dword ptr [ecx + 0xc], eax
// 00823606  894110               mov dword ptr [ecx + 0x10], eax
// 00823609  894114               mov dword ptr [ecx + 0x14], eax
// 0082360c  894118               mov dword ptr [ecx + 0x18], eax
// 0082360f  89411c               mov dword ptr [ecx + 0x1c], eax
// 00823612  894120               mov dword ptr [ecx + 0x20], eax
// 00823615  894124               mov dword ptr [ecx + 0x24], eax
// 00823618  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 0082361e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00823622  89480c               mov dword ptr [eax + 0xc], ecx
// 00823625  8b96e0020000         mov edx, dword ptr [esi + 0x2e0]
// 0082362b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0082362f  894210               mov dword ptr [edx + 0x10], eax
// 00823632  8b8ee0020000         mov ecx, dword ptr [esi + 0x2e0]
// 00823638  8b542410             mov edx, dword ptr [esp + 0x10]
// 0082363c  895124               mov dword ptr [ecx + 0x24], edx
// 0082363f  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 00823645  50                   push eax
// 00823646  6ab6                 push -0x4a
// 00823648  8bce                 mov ecx, esi
// 0082364a  e821fcffff           call 0x823270
// 0082364f  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 00823655  5e                   pop esi
// 00823656  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnGetToolTipInfo@CXTPReportControl@@MAEABUXTP_NM_REPORTTOOLTIPINFO@@PAVCXTPReportRow@@PAVCXTPReportRecordItem@@AAV?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
