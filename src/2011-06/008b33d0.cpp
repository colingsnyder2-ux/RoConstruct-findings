// roc 2011-06 008b33d0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b33d0
//
// 008b33d0  56                   push esi
// 008b33d1  57                   push edi
// 008b33d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008b33d6  8b4724               mov eax, dword ptr [edi + 0x24]
// 008b33d9  8bf1                 mov esi, ecx
// 008b33db  894624               mov dword ptr [esi + 0x24], eax
// 008b33de  8b4720               mov eax, dword ptr [edi + 0x20]
// 008b33e1  894620               mov dword ptr [esi + 0x20], eax
// 008b33e4  85c0                 test eax, eax
// 008b33e6  740a                 je 0x8b33f2
// 008b33e8  83c004               add eax, 4
// 008b33eb  50                   push eax
// 008b33ec  ff154c03a400         call dword ptr [0xa4034c]
// 008b33f2  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008b33f5  894e2c               mov dword ptr [esi + 0x2c], ecx
// 008b33f8  8b5730               mov edx, dword ptr [edi + 0x30]
// 008b33fb  895630               mov dword ptr [esi + 0x30], edx
// 008b33fe  8b4734               mov eax, dword ptr [edi + 0x34]
// 008b3401  894634               mov dword ptr [esi + 0x34], eax
// 008b3404  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 008b3407  894e38               mov dword ptr [esi + 0x38], ecx
// 008b340a  8b5728               mov edx, dword ptr [edi + 0x28]
// 008b340d  895628               mov dword ptr [esi + 0x28], edx
// 008b3410  8b4768               mov eax, dword ptr [edi + 0x68]
// 008b3413  894668               mov dword ptr [esi + 0x68], eax
// 008b3416  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 008b3419  894e54               mov dword ptr [esi + 0x54], ecx
// 008b341c  8b5758               mov edx, dword ptr [edi + 0x58]
// 008b341f  5f                   pop edi
// 008b3420  895658               mov dword ptr [esi + 0x58], edx
// 008b3423  5e                   pop esi
// 008b3424  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?InitRow@CXTPReportRow@@UAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
