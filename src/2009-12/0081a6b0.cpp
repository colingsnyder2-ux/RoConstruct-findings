// roc 2009-12 0081a6b0  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a6b0
//
// 0081a6b0  8b442404             mov eax, dword ptr [esp + 4]
// 0081a6b4  83ec10               sub esp, 0x10
// 0081a6b7  56                   push esi
// 0081a6b8  8bf1                 mov esi, ecx
// 0081a6ba  894604               mov dword ptr [esi + 4], eax
// 0081a6bd  8b442420             mov eax, dword ptr [esp + 0x20]
// 0081a6c1  57                   push edi
// 0081a6c2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0081a6c6  89460c               mov dword ptr [esi + 0xc], eax
// 0081a6c9  c706ec479f00         mov dword ptr [esi], 0x9f47ec
// 0081a6cf  897e08               mov dword ptr [esi + 8], edi
// 0081a6d2  8b17                 mov edx, dword ptr [edi]
// 0081a6d4  50                   push eax
// 0081a6d5  8b4260               mov eax, dword ptr [edx + 0x60]
// 0081a6d8  8bcf                 mov ecx, edi
// 0081a6da  ffd0                 call eax
// 0081a6dc  8bc8                 mov ecx, eax
// 0081a6de  e85d060100           call 0x82ad40
// 0081a6e3  894610               mov dword ptr [esi + 0x10], eax
// 0081a6e6  8b17                 mov edx, dword ptr [edi]
// 0081a6e8  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 0081a6ee  50                   push eax
// 0081a6ef  8d44240c             lea eax, [esp + 0xc]
// 0081a6f3  50                   push eax
// 0081a6f4  8bcf                 mov ecx, edi
// 0081a6f6  ffd2                 call edx
// 0081a6f8  8b08                 mov ecx, dword ptr [eax]
// 0081a6fa  894e14               mov dword ptr [esi + 0x14], ecx
// 0081a6fd  8b5004               mov edx, dword ptr [eax + 4]
// 0081a700  895618               mov dword ptr [esi + 0x18], edx
// 0081a703  8b4808               mov ecx, dword ptr [eax + 8]
// 0081a706  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0081a709  8b500c               mov edx, dword ptr [eax + 0xc]
// 0081a70c  5f                   pop edi
// 0081a70d  895620               mov dword ptr [esi + 0x20], edx
// 0081a710  8bc6                 mov eax, esi
// 0081a712  5e                   pop esi
// 0081a713  83c410               add esp, 0x10
// 0081a716  c20c00               ret 0xc
// copied from an identical function in another client (function ??0XTP_REPORTRECORDITEM_ARGS@@QAE@PAVCXTPReportControl@@PAVCXTPReportRow@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp