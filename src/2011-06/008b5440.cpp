// from server: 100% by auto
// roc 2011-06 008b5440  unit: CXTPReportInplaceControl  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b5440
//
// 008b5440  53                   push ebx
// 008b5441  56                   push esi
// 008b5442  57                   push edi
// 008b5443  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008b5447  33db                 xor ebx, ebx
// 008b5449  8bf1                 mov esi, ecx
// 008b544b  3bfb                 cmp edi, ebx
// 008b544d  7449                 je 0x8b5498
// 008b544f  8bcf                 mov ecx, edi
// 008b5451  e82a99f8ff           call 0x83ed80
// 008b5456  8bce                 mov ecx, esi
// 008b5458  e8b391f8ff           call 0x83e610
// 008b545d  8b4710               mov eax, dword ptr [edi + 0x10]
// 008b5460  894610               mov dword ptr [esi + 0x10], eax
// 008b5463  8b4f04               mov ecx, dword ptr [edi + 4]
// 008b5466  894e04               mov dword ptr [esi + 4], ecx
// 008b5469  8b5708               mov edx, dword ptr [edi + 8]
// 008b546c  895608               mov dword ptr [esi + 8], edx
// 008b546f  8b470c               mov eax, dword ptr [edi + 0xc]
// 008b5472  89460c               mov dword ptr [esi + 0xc], eax
// 008b5475  8b5714               mov edx, dword ptr [edi + 0x14]
// 008b5478  8d4714               lea eax, [edi + 0x14]
// 008b547b  8d4e14               lea ecx, [esi + 0x14]
// 008b547e  8911                 mov dword ptr [ecx], edx
// 008b5480  8b5004               mov edx, dword ptr [eax + 4]
// 008b5483  895104               mov dword ptr [ecx + 4], edx
// 008b5486  8b5008               mov edx, dword ptr [eax + 8]
// 008b5489  5f                   pop edi
// 008b548a  895108               mov dword ptr [ecx + 8], edx
// 008b548d  8b400c               mov eax, dword ptr [eax + 0xc]
// 008b5490  5e                   pop esi
// 008b5491  89410c               mov dword ptr [ecx + 0xc], eax
// 008b5494  5b                   pop ebx
// 008b5495  c20400               ret 4
// 008b5498  e87391f8ff           call 0x83e610
// 008b549d  5f                   pop edi
// 008b549e  895e10               mov dword ptr [esi + 0x10], ebx
// 008b54a1  895e04               mov dword ptr [esi + 4], ebx
// 008b54a4  895e08               mov dword ptr [esi + 8], ebx
// 008b54a7  895e0c               mov dword ptr [esi + 0xc], ebx
// 008b54aa  5e                   pop esi
// 008b54ab  5b                   pop ebx
// 008b54ac  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportInplaceControls.cpp (function ?SetItemArgs@CXTPReportInplaceControl@@MAEXPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportInplaceControls.cpp
