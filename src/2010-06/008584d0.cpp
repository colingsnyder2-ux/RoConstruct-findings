// roc 2010-06 008584d0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008584d0
//
// 008584d0  56                   push esi
// 008584d1  57                   push edi
// 008584d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008584d6  8b4724               mov eax, dword ptr [edi + 0x24]
// 008584d9  8bf1                 mov esi, ecx
// 008584db  894624               mov dword ptr [esi + 0x24], eax
// 008584de  8b4720               mov eax, dword ptr [edi + 0x20]
// 008584e1  894620               mov dword ptr [esi + 0x20], eax
// 008584e4  85c0                 test eax, eax
// 008584e6  740a                 je 0x8584f2
// 008584e8  83c004               add eax, 4
// 008584eb  50                   push eax
// 008584ec  ff1580a39e00         call dword ptr [0x9ea380]
// 008584f2  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008584f5  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008584f8  8b5730               mov edx, dword ptr [edi + 0x30]
// 008584fb  895630               mov dword ptr [esi + 0x30], edx
// 008584fe  8b4734               mov eax, dword ptr [edi + 0x34]
// 00858501  894634               mov dword ptr [esi + 0x34], eax
// 00858504  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00858507  894e38               mov dword ptr [esi + 0x38], ecx
// 0085850a  8b5728               mov edx, dword ptr [edi + 0x28]
// 0085850d  895628               mov dword ptr [esi + 0x28], edx
// 00858510  8b4768               mov eax, dword ptr [edi + 0x68]
// 00858513  894668               mov dword ptr [esi + 0x68], eax
// 00858516  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 00858519  894e54               mov dword ptr [esi + 0x54], ecx
// 0085851c  8b5758               mov edx, dword ptr [edi + 0x58]
// 0085851f  5f                   pop edi
// 00858520  895658               mov dword ptr [esi + 0x58], edx
// 00858523  5e                   pop esi
// 00858524  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?InitRow@CXTPReportRow@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
