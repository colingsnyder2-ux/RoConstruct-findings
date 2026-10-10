// roc 2008-06 007472e0  unit: CXTPReportPaintManager  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007472e0
//
// 007472e0  83ec08               sub esp, 8
// 007472e3  53                   push ebx
// 007472e4  55                   push ebp
// 007472e5  56                   push esi
// 007472e6  8b742424             mov esi, dword ptr [esp + 0x24]
// 007472ea  830602               add dword ptr [esi], 2
// 007472ed  57                   push edi
// 007472ee  8bf9                 mov edi, ecx
// 007472f0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007472f4  8b01                 mov eax, dword ptr [ecx]
// 007472f6  8b5078               mov edx, dword ptr [eax + 0x78]
// 007472f9  8b1f                 mov ebx, dword ptr [edi]
// 007472fb  ffd2                 call edx
// 007472fd  8b0e                 mov ecx, dword ptr [esi]
// 007472ff  8b5604               mov edx, dword ptr [esi + 4]
// 00747302  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00747306  f7d8                 neg eax
// 00747308  1bc0                 sbb eax, eax
// 0074730a  40                   inc eax
// 0074730b  50                   push eax
// 0074730c  83ec10               sub esp, 0x10
// 0074730f  8bc4                 mov eax, esp
// 00747311  8908                 mov dword ptr [eax], ecx
// 00747313  8b4e08               mov ecx, dword ptr [esi + 8]
// 00747316  895004               mov dword ptr [eax + 4], edx
// 00747319  8b560c               mov edx, dword ptr [esi + 0xc]
// 0074731c  894808               mov dword ptr [eax + 8], ecx
// 0074731f  89500c               mov dword ptr [eax + 0xc], edx
// 00747322  8b93b0000000         mov edx, dword ptr [ebx + 0xb0]
// 00747328  55                   push ebp
// 00747329  8d442428             lea eax, [esp + 0x28]
// 0074732d  50                   push eax
// 0074732e  8bcf                 mov ecx, edi
// 00747330  ffd2                 call edx
// 00747332  8b442410             mov eax, dword ptr [esp + 0x10]
// 00747336  85c0                 test eax, eax
// 00747338  740b                 je 0x747345
// 0074733a  85ed                 test ebp, ebp
// 0074733c  7407                 je 0x747345
// 0074733e  8b0e                 mov ecx, dword ptr [esi]
// 00747340  03c8                 add ecx, eax
// 00747342  894e08               mov dword ptr [esi + 8], ecx
// 00747345  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00747349  5f                   pop edi
// 0074734a  5e                   pop esi
// 0074734b  8d5002               lea edx, [eax + 2]
// 0074734e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00747352  83c102               add ecx, 2
// 00747355  5d                   pop ebp
// 00747356  8910                 mov dword ptr [eax], edx
// 00747358  894804               mov dword ptr [eax + 4], ecx
// 0074735b  5b                   pop ebx
// 0074735c  83c408               add esp, 8
// 0074735f  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawCollapsedBitmap@CXTPReportPaintManager@@QAE?AVCSize@@PAVCDC@@PBVCXTPReportRow@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp
