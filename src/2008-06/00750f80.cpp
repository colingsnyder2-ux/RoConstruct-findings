// from server: 100% by auto
// roc 2008-06 00750f80  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750f80
//
// 00750f80  56                   push esi
// 00750f81  57                   push edi
// 00750f82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00750f86  8b4724               mov eax, dword ptr [edi + 0x24]
// 00750f89  8bf1                 mov esi, ecx
// 00750f8b  894624               mov dword ptr [esi + 0x24], eax
// 00750f8e  8b4720               mov eax, dword ptr [edi + 0x20]
// 00750f91  894620               mov dword ptr [esi + 0x20], eax
// 00750f94  85c0                 test eax, eax
// 00750f96  740a                 je 0x750fa2
// 00750f98  83c004               add eax, 4
// 00750f9b  50                   push eax
// 00750f9c  ff15b0218000         call dword ptr [0x8021b0]
// 00750fa2  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00750fa5  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00750fa8  8b5730               mov edx, dword ptr [edi + 0x30]
// 00750fab  895630               mov dword ptr [esi + 0x30], edx
// 00750fae  8b4734               mov eax, dword ptr [edi + 0x34]
// 00750fb1  894634               mov dword ptr [esi + 0x34], eax
// 00750fb4  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00750fb7  894e38               mov dword ptr [esi + 0x38], ecx
// 00750fba  8b5728               mov edx, dword ptr [edi + 0x28]
// 00750fbd  895628               mov dword ptr [esi + 0x28], edx
// 00750fc0  8b4768               mov eax, dword ptr [edi + 0x68]
// 00750fc3  894668               mov dword ptr [esi + 0x68], eax
// 00750fc6  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 00750fc9  894e54               mov dword ptr [esi + 0x54], ecx
// 00750fcc  8b5758               mov edx, dword ptr [edi + 0x58]
// 00750fcf  5f                   pop edi
// 00750fd0  895658               mov dword ptr [esi + 0x58], edx
// 00750fd3  5e                   pop esi
// 00750fd4  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?InitRow@CXTPReportRow@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
