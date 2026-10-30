// roc 2009-12 008a4390  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a4390
//
// 008a4390  56                   push esi
// 008a4391  57                   push edi
// 008a4392  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a4396  8b4724               mov eax, dword ptr [edi + 0x24]
// 008a4399  8bf1                 mov esi, ecx
// 008a439b  894624               mov dword ptr [esi + 0x24], eax
// 008a439e  8b4720               mov eax, dword ptr [edi + 0x20]
// 008a43a1  894620               mov dword ptr [esi + 0x20], eax
// 008a43a4  85c0                 test eax, eax
// 008a43a6  740a                 je 0x8a43b2
// 008a43a8  83c004               add eax, 4
// 008a43ab  50                   push eax
// 008a43ac  ff150cb29800         call dword ptr [0x98b20c]
// 008a43b2  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008a43b5  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008a43b8  8b5730               mov edx, dword ptr [edi + 0x30]
// 008a43bb  895630               mov dword ptr [esi + 0x30], edx
// 008a43be  8b4734               mov eax, dword ptr [edi + 0x34]
// 008a43c1  894634               mov dword ptr [esi + 0x34], eax
// 008a43c4  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 008a43c7  894e38               mov dword ptr [esi + 0x38], ecx
// 008a43ca  8b5728               mov edx, dword ptr [edi + 0x28]
// 008a43cd  895628               mov dword ptr [esi + 0x28], edx
// 008a43d0  8b4768               mov eax, dword ptr [edi + 0x68]
// 008a43d3  894668               mov dword ptr [esi + 0x68], eax
// 008a43d6  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 008a43d9  894e54               mov dword ptr [esi + 0x54], ecx
// 008a43dc  8b5758               mov edx, dword ptr [edi + 0x58]
// 008a43df  5f                   pop edi
// 008a43e0  895658               mov dword ptr [esi + 0x58], edx
// 008a43e3  5e                   pop esi
// 008a43e4  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?InitRow@CXTPReportRow@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
