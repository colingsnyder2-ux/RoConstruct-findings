// roc 2009-12 008a3e90  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3e90
//
// 008a3e90  837c240400           cmp dword ptr [esp + 4], 0
// 008a3e95  56                   push esi
// 008a3e96  8bf1                 mov esi, ecx
// 008a3e98  7432                 je 0x8a3ecc
// 008a3e9a  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a3e9d  83b8c401000000       cmp dword ptr [eax + 0x1c4], 0
// 008a3ea4  750b                 jne 0x8a3eb1
// 008a3ea6  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 008a3eac  e8efa5f8ff           call 0x82e4a0
// 008a3eb1  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a3eb4  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 008a3eba  56                   push esi
// 008a3ebb  e8f0a8f8ff           call 0x82e7b0
// 008a3ec0  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a3ec3  e8b8b5f7ff           call 0x81f480
// 008a3ec8  5e                   pop esi
// 008a3ec9  c20400               ret 4
// 008a3ecc  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a3ecf  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 008a3ed5  56                   push esi
// 008a3ed6  e805a9f8ff           call 0x82e7e0
// 008a3edb  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a3ede  e89db5f7ff           call 0x81f480
// 008a3ee3  5e                   pop esi
// 008a3ee4  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRow.cpp (function ?SetSelected@CXTPReportRow@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRow.cpp
