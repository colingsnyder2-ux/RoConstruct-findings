// roc 2009-12 0089b3e0  unit: CXTPReportPaintManager  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089b3e0
//
// 0089b3e0  83ec08               sub esp, 8
// 0089b3e3  53                   push ebx
// 0089b3e4  55                   push ebp
// 0089b3e5  56                   push esi
// 0089b3e6  8b742424             mov esi, dword ptr [esp + 0x24]
// 0089b3ea  830602               add dword ptr [esi], 2
// 0089b3ed  57                   push edi
// 0089b3ee  8bf9                 mov edi, ecx
// 0089b3f0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089b3f4  8b01                 mov eax, dword ptr [ecx]
// 0089b3f6  8b5078               mov edx, dword ptr [eax + 0x78]
// 0089b3f9  8b1f                 mov ebx, dword ptr [edi]
// 0089b3fb  ffd2                 call edx
// 0089b3fd  8b0e                 mov ecx, dword ptr [esi]
// 0089b3ff  8b5604               mov edx, dword ptr [esi + 4]
// 0089b402  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0089b406  f7d8                 neg eax
// 0089b408  1bc0                 sbb eax, eax
// 0089b40a  40                   inc eax
// 0089b40b  50                   push eax
// 0089b40c  83ec10               sub esp, 0x10
// 0089b40f  8bc4                 mov eax, esp
// 0089b411  8908                 mov dword ptr [eax], ecx
// 0089b413  8b4e08               mov ecx, dword ptr [esi + 8]
// 0089b416  895004               mov dword ptr [eax + 4], edx
// 0089b419  8b560c               mov edx, dword ptr [esi + 0xc]
// 0089b41c  894808               mov dword ptr [eax + 8], ecx
// 0089b41f  89500c               mov dword ptr [eax + 0xc], edx
// 0089b422  8b93b0000000         mov edx, dword ptr [ebx + 0xb0]
// 0089b428  55                   push ebp
// 0089b429  8d442428             lea eax, [esp + 0x28]
// 0089b42d  50                   push eax
// 0089b42e  8bcf                 mov ecx, edi
// 0089b430  ffd2                 call edx
// 0089b432  8b442410             mov eax, dword ptr [esp + 0x10]
// 0089b436  85c0                 test eax, eax
// 0089b438  740b                 je 0x89b445
// 0089b43a  85ed                 test ebp, ebp
// 0089b43c  7407                 je 0x89b445
// 0089b43e  8b0e                 mov ecx, dword ptr [esi]
// 0089b440  03c8                 add ecx, eax
// 0089b442  894e08               mov dword ptr [esi + 8], ecx
// 0089b445  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089b449  5f                   pop edi
// 0089b44a  5e                   pop esi
// 0089b44b  8d5002               lea edx, [eax + 2]
// 0089b44e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089b452  83c102               add ecx, 2
// 0089b455  5d                   pop ebp
// 0089b456  8910                 mov dword ptr [eax], edx
// 0089b458  894804               mov dword ptr [eax + 4], ecx
// 0089b45b  5b                   pop ebx
// 0089b45c  83c408               add esp, 8
// 0089b45f  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawCollapsedBitmap@CXTPReportPaintManager@@QAE?AVCSize@@PAVCDC@@PBVCXTPReportRow@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp