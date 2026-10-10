// roc 2008-06 006c7200  unit: XTP_REPORTRECORDITEM_METRICS  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c7200
//
// 006c7200  8b442404             mov eax, dword ptr [esp + 4]
// 006c7204  83ec10               sub esp, 0x10
// 006c7207  56                   push esi
// 006c7208  8bf1                 mov esi, ecx
// 006c720a  894604               mov dword ptr [esi + 4], eax
// 006c720d  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c7211  57                   push edi
// 006c7212  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006c7216  89460c               mov dword ptr [esi + 0xc], eax
// 006c7219  c706dc328500         mov dword ptr [esi], 0x8532dc
// 006c721f  897e08               mov dword ptr [esi + 8], edi
// 006c7222  8b17                 mov edx, dword ptr [edi]
// 006c7224  50                   push eax
// 006c7225  8b4260               mov eax, dword ptr [edx + 0x60]
// 006c7228  8bcf                 mov ecx, edi
// 006c722a  ffd0                 call eax
// 006c722c  8bc8                 mov ecx, eax
// 006c722e  e80d0d0100           call 0x6d7f40
// 006c7233  894610               mov dword ptr [esi + 0x10], eax
// 006c7236  8b17                 mov edx, dword ptr [edi]
// 006c7238  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 006c723e  50                   push eax
// 006c723f  8d44240c             lea eax, [esp + 0xc]
// 006c7243  50                   push eax
// 006c7244  8bcf                 mov ecx, edi
// 006c7246  ffd2                 call edx
// 006c7248  8b08                 mov ecx, dword ptr [eax]
// 006c724a  894e14               mov dword ptr [esi + 0x14], ecx
// 006c724d  8b5004               mov edx, dword ptr [eax + 4]
// 006c7250  895618               mov dword ptr [esi + 0x18], edx
// 006c7253  8b4808               mov ecx, dword ptr [eax + 8]
// 006c7256  894e1c               mov dword ptr [esi + 0x1c], ecx
// 006c7259  8b500c               mov edx, dword ptr [eax + 0xc]
// 006c725c  5f                   pop edi
// 006c725d  895620               mov dword ptr [esi + 0x20], edx
// 006c7260  8bc6                 mov eax, esi
// 006c7262  5e                   pop esi
// 006c7263  83c410               add esp, 0x10
// 006c7266  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRecordItem.cpp (function ??0XTP_REPORTRECORDITEM_ARGS@@QAE@PAVCXTPReportControl@@PAVCXTPReportRow@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp
