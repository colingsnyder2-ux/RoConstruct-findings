// from server: 100% by auto
// roc 2012-06 00a2d8e0  unit: CXTPReportInplaceControl  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2d8e0
//
// 00a2d8e0  53                   push ebx
// 00a2d8e1  56                   push esi
// 00a2d8e2  57                   push edi
// 00a2d8e3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a2d8e7  33db                 xor ebx, ebx
// 00a2d8e9  8bf1                 mov esi, ecx
// 00a2d8eb  3bfb                 cmp edi, ebx
// 00a2d8ed  7449                 je 0xa2d938
// 00a2d8ef  8bcf                 mov ecx, edi
// 00a2d8f1  e83a99f8ff           call 0x9b7230
// 00a2d8f6  8bce                 mov ecx, esi
// 00a2d8f8  e83393f8ff           call 0x9b6c30
// 00a2d8fd  8b4710               mov eax, dword ptr [edi + 0x10]
// 00a2d900  894610               mov dword ptr [esi + 0x10], eax
// 00a2d903  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a2d906  894e04               mov dword ptr [esi + 4], ecx
// 00a2d909  8b5708               mov edx, dword ptr [edi + 8]
// 00a2d90c  895608               mov dword ptr [esi + 8], edx
// 00a2d90f  8b470c               mov eax, dword ptr [edi + 0xc]
// 00a2d912  89460c               mov dword ptr [esi + 0xc], eax
// 00a2d915  8b5714               mov edx, dword ptr [edi + 0x14]
// 00a2d918  8d4714               lea eax, [edi + 0x14]
// 00a2d91b  8d4e14               lea ecx, [esi + 0x14]
// 00a2d91e  8911                 mov dword ptr [ecx], edx
// 00a2d920  8b5004               mov edx, dword ptr [eax + 4]
// 00a2d923  895104               mov dword ptr [ecx + 4], edx
// 00a2d926  8b5008               mov edx, dword ptr [eax + 8]
// 00a2d929  5f                   pop edi
// 00a2d92a  895108               mov dword ptr [ecx + 8], edx
// 00a2d92d  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a2d930  5e                   pop esi
// 00a2d931  89410c               mov dword ptr [ecx + 0xc], eax
// 00a2d934  5b                   pop ebx
// 00a2d935  c20400               ret 4
// 00a2d938  e8f392f8ff           call 0x9b6c30
// 00a2d93d  5f                   pop edi
// 00a2d93e  895e10               mov dword ptr [esi + 0x10], ebx
// 00a2d941  895e04               mov dword ptr [esi + 4], ebx
// 00a2d944  895e08               mov dword ptr [esi + 8], ebx
// 00a2d947  895e0c               mov dword ptr [esi + 0xc], ebx
// 00a2d94a  5e                   pop esi
// 00a2d94b  5b                   pop ebx
// 00a2d94c  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportInplaceControls.cpp (function ?SetItemArgs@CXTPReportInplaceControl@@MAEXPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportInplaceControls.cpp
