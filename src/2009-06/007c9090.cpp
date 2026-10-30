// roc 2009-06 007c9090  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c9090
//
// 007c9090  837c240400           cmp dword ptr [esp + 4], 0
// 007c9095  56                   push esi
// 007c9096  8bf1                 mov esi, ecx
// 007c9098  7432                 je 0x7c90cc
// 007c909a  8b4624               mov eax, dword ptr [esi + 0x24]
// 007c909d  83b8c401000000       cmp dword ptr [eax + 0x1c4], 0
// 007c90a4  750b                 jne 0x7c90b1
// 007c90a6  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 007c90ac  e8efa5f8ff           call 0x7536a0
// 007c90b1  8b4624               mov eax, dword ptr [esi + 0x24]
// 007c90b4  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 007c90ba  56                   push esi
// 007c90bb  e8f0a8f8ff           call 0x7539b0
// 007c90c0  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007c90c3  e8a8b5f7ff           call 0x744670
// 007c90c8  5e                   pop esi
// 007c90c9  c20400               ret 4
// 007c90cc  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007c90cf  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 007c90d5  56                   push esi
// 007c90d6  e805a9f8ff           call 0x7539e0
// 007c90db  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007c90de  e88db5f7ff           call 0x744670
// 007c90e3  5e                   pop esi
// 007c90e4  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?SetSelected@CXTPReportRow@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
