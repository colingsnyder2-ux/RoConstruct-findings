// roc 2011-06 008b2ed0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b2ed0
//
// 008b2ed0  837c240400           cmp dword ptr [esp + 4], 0
// 008b2ed5  56                   push esi
// 008b2ed6  8bf1                 mov esi, ecx
// 008b2ed8  7432                 je 0x8b2f0c
// 008b2eda  8b4624               mov eax, dword ptr [esi + 0x24]
// 008b2edd  83b8c401000000       cmp dword ptr [eax + 0x1c4], 0
// 008b2ee4  750b                 jne 0x8b2ef1
// 008b2ee6  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 008b2eec  e8bf10f9ff           call 0x843fb0
// 008b2ef1  8b4624               mov eax, dword ptr [esi + 0x24]
// 008b2ef4  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 008b2efa  56                   push esi
// 008b2efb  e8c013f9ff           call 0x8442c0
// 008b2f00  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008b2f03  e86807f8ff           call 0x833670
// 008b2f08  5e                   pop esi
// 008b2f09  c20400               ret 4
// 008b2f0c  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008b2f0f  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 008b2f15  56                   push esi
// 008b2f16  e8d513f9ff           call 0x8442f0
// 008b2f1b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008b2f1e  e84d07f8ff           call 0x833670
// 008b2f23  5e                   pop esi
// 008b2f24  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?SetSelected@CXTPReportRow@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
