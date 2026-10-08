// roc 2012-06 00a2b850  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2b850
//
// 00a2b850  56                   push esi
// 00a2b851  57                   push edi
// 00a2b852  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a2b856  8b4724               mov eax, dword ptr [edi + 0x24]
// 00a2b859  8bf1                 mov esi, ecx
// 00a2b85b  894624               mov dword ptr [esi + 0x24], eax
// 00a2b85e  8b4720               mov eax, dword ptr [edi + 0x20]
// 00a2b861  894620               mov dword ptr [esi + 0x20], eax
// 00a2b864  85c0                 test eax, eax
// 00a2b866  740a                 je 0xa2b872
// 00a2b868  83c004               add eax, 4
// 00a2b86b  50                   push eax
// 00a2b86c  ff159821b200         call dword ptr [0xb22198]
// 00a2b872  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00a2b875  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00a2b878  8b5730               mov edx, dword ptr [edi + 0x30]
// 00a2b87b  895630               mov dword ptr [esi + 0x30], edx
// 00a2b87e  8b4734               mov eax, dword ptr [edi + 0x34]
// 00a2b881  894634               mov dword ptr [esi + 0x34], eax
// 00a2b884  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00a2b887  894e38               mov dword ptr [esi + 0x38], ecx
// 00a2b88a  8b5728               mov edx, dword ptr [edi + 0x28]
// 00a2b88d  895628               mov dword ptr [esi + 0x28], edx
// 00a2b890  8b4768               mov eax, dword ptr [edi + 0x68]
// 00a2b893  894668               mov dword ptr [esi + 0x68], eax
// 00a2b896  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 00a2b899  894e54               mov dword ptr [esi + 0x54], ecx
// 00a2b89c  8b5758               mov edx, dword ptr [edi + 0x58]
// 00a2b89f  5f                   pop edi
// 00a2b8a0  895658               mov dword ptr [esi + 0x58], edx
// 00a2b8a3  5e                   pop esi
// 00a2b8a4  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?InitRow@CXTPReportRow@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
