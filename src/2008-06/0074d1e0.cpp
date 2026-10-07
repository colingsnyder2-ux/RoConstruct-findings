// roc 2008-06 0074d1e0  unit: CXTPReportInplaceControl  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074d1e0
//
// 0074d1e0  53                   push ebx
// 0074d1e1  56                   push esi
// 0074d1e2  57                   push edi
// 0074d1e3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0074d1e7  33db                 xor ebx, ebx
// 0074d1e9  8bf1                 mov esi, ecx
// 0074d1eb  3bfb                 cmp edi, ebx
// 0074d1ed  7449                 je 0x74d238
// 0074d1ef  8bcf                 mov ecx, edi
// 0074d1f1  e87aa0f7ff           call 0x6c7270
// 0074d1f6  8bce                 mov ecx, esi
// 0074d1f8  e8239af7ff           call 0x6c6c20
// 0074d1fd  8b4710               mov eax, dword ptr [edi + 0x10]
// 0074d200  894610               mov dword ptr [esi + 0x10], eax
// 0074d203  8b4f04               mov ecx, dword ptr [edi + 4]
// 0074d206  894e04               mov dword ptr [esi + 4], ecx
// 0074d209  8b5708               mov edx, dword ptr [edi + 8]
// 0074d20c  895608               mov dword ptr [esi + 8], edx
// 0074d20f  8b470c               mov eax, dword ptr [edi + 0xc]
// 0074d212  89460c               mov dword ptr [esi + 0xc], eax
// 0074d215  8b5714               mov edx, dword ptr [edi + 0x14]
// 0074d218  8d4714               lea eax, [edi + 0x14]
// 0074d21b  8d4e14               lea ecx, [esi + 0x14]
// 0074d21e  8911                 mov dword ptr [ecx], edx
// 0074d220  8b5004               mov edx, dword ptr [eax + 4]
// 0074d223  895104               mov dword ptr [ecx + 4], edx
// 0074d226  8b5008               mov edx, dword ptr [eax + 8]
// 0074d229  5f                   pop edi
// 0074d22a  895108               mov dword ptr [ecx + 8], edx
// 0074d22d  8b400c               mov eax, dword ptr [eax + 0xc]
// 0074d230  5e                   pop esi
// 0074d231  89410c               mov dword ptr [ecx + 0xc], eax
// 0074d234  5b                   pop ebx
// 0074d235  c20400               ret 4
// 0074d238  e8e399f7ff           call 0x6c6c20
// 0074d23d  5f                   pop edi
// 0074d23e  895e10               mov dword ptr [esi + 0x10], ebx
// 0074d241  895e04               mov dword ptr [esi + 4], ebx
// 0074d244  895e08               mov dword ptr [esi + 8], ebx
// 0074d247  895e0c               mov dword ptr [esi + 0xc], ebx
// 0074d24a  5e                   pop esi
// 0074d24b  5b                   pop ebx
// 0074d24c  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportInplaceControls.cpp (function ?SetItemArgs@CXTPReportInplaceControl@@MAEXPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportInplaceControls.cpp
