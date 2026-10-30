// roc 2009-06 007c9590  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c9590
//
// 007c9590  56                   push esi
// 007c9591  57                   push edi
// 007c9592  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007c9596  8b4724               mov eax, dword ptr [edi + 0x24]
// 007c9599  8bf1                 mov esi, ecx
// 007c959b  894624               mov dword ptr [esi + 0x24], eax
// 007c959e  8b4720               mov eax, dword ptr [edi + 0x20]
// 007c95a1  894620               mov dword ptr [esi + 0x20], eax
// 007c95a4  85c0                 test eax, eax
// 007c95a6  740a                 je 0x7c95b2
// 007c95a8  83c004               add eax, 4
// 007c95ab  50                   push eax
// 007c95ac  ff15d0e18900         call dword ptr [0x89e1d0]
// 007c95b2  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 007c95b5  894e2c               mov dword ptr [esi + 0x2c], ecx
// 007c95b8  8b5730               mov edx, dword ptr [edi + 0x30]
// 007c95bb  895630               mov dword ptr [esi + 0x30], edx
// 007c95be  8b4734               mov eax, dword ptr [edi + 0x34]
// 007c95c1  894634               mov dword ptr [esi + 0x34], eax
// 007c95c4  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 007c95c7  894e38               mov dword ptr [esi + 0x38], ecx
// 007c95ca  8b5728               mov edx, dword ptr [edi + 0x28]
// 007c95cd  895628               mov dword ptr [esi + 0x28], edx
// 007c95d0  8b4768               mov eax, dword ptr [edi + 0x68]
// 007c95d3  894668               mov dword ptr [esi + 0x68], eax
// 007c95d6  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 007c95d9  894e54               mov dword ptr [esi + 0x54], ecx
// 007c95dc  8b5758               mov edx, dword ptr [edi + 0x58]
// 007c95df  5f                   pop edi
// 007c95e0  895658               mov dword ptr [esi + 0x58], edx
// 007c95e3  5e                   pop esi
// 007c95e4  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?InitRow@CXTPReportRow@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
