// roc 2010-06 007d7650  unit: CXTPReportControl  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d7650
//
// 007d7650  33c0                 xor eax, eax
// 007d7652  56                   push esi
// 007d7653  8bf1                 mov esi, ecx
// 007d7655  8b8ee0020000         mov ecx, dword ptr [esi + 0x2e0]
// 007d765b  8901                 mov dword ptr [ecx], eax
// 007d765d  894104               mov dword ptr [ecx + 4], eax
// 007d7660  894108               mov dword ptr [ecx + 8], eax
// 007d7663  89410c               mov dword ptr [ecx + 0xc], eax
// 007d7666  894110               mov dword ptr [ecx + 0x10], eax
// 007d7669  894114               mov dword ptr [ecx + 0x14], eax
// 007d766c  894118               mov dword ptr [ecx + 0x18], eax
// 007d766f  89411c               mov dword ptr [ecx + 0x1c], eax
// 007d7672  894120               mov dword ptr [ecx + 0x20], eax
// 007d7675  894124               mov dword ptr [ecx + 0x24], eax
// 007d7678  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 007d767e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007d7682  89480c               mov dword ptr [eax + 0xc], ecx
// 007d7685  8b96e0020000         mov edx, dword ptr [esi + 0x2e0]
// 007d768b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d768f  894210               mov dword ptr [edx + 0x10], eax
// 007d7692  8b8ee0020000         mov ecx, dword ptr [esi + 0x2e0]
// 007d7698  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d769c  895124               mov dword ptr [ecx + 0x24], edx
// 007d769f  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 007d76a5  50                   push eax
// 007d76a6  6ab6                 push -0x4a
// 007d76a8  8bce                 mov ecx, esi
// 007d76aa  e821fcffff           call 0x7d72d0
// 007d76af  8b86e0020000         mov eax, dword ptr [esi + 0x2e0]
// 007d76b5  5e                   pop esi
// 007d76b6  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnGetToolTipInfo@CXTPReportControl@@MAEABUXTP_NM_REPORTTOOLTIPINFO@@PAVCXTPReportRow@@PAVCXTPReportRecordItem@@AAV?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
